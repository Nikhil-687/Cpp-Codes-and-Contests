#include <iostream>
#include <string>

#include "library.hpp"

namespace {

int tests_run = 0;
int tests_failed = 0;

void check(bool condition, const std::string& description)
{
    ++tests_run;
    if (condition) {
        std::cout << "  [PASS] " << description << std::endl;
    } else {
        ++tests_failed;
        std::cout << "  [FAIL] " << description << std::endl;
    }
}

void test_add_and_count()
{
    std::cout << "test_add_and_count" << std::endl;
    Library library;
    library.addBook(Book("Dune", "Frank Herbert", 15.99, 3));
    library.addBook(Book("1984", "George Orwell", 9.99, 5));

    check(library.bookCount() == 2, "bookCount() should be 2 after adding two books");
}

void test_total_value()
{
    std::cout << "test_total_value" << std::endl;
    Library library;
    library.addBook(Book("Dune", "Frank Herbert", 10.00, 2));   // 20.00
    library.addBook(Book("1984", "George Orwell", 5.00, 4));    // 20.00

    check(library.totalValue() == 40.00, "totalValue() should sum price * copies for every book");
}

void test_list_titles()
{
    std::cout << "test_list_titles" << std::endl;
    Library library;
    library.addBook(Book("Dune", "Frank Herbert", 15.99, 3));
    library.addBook(Book("1984", "George Orwell", 9.99, 5));

    auto titles = library.listTitles();
    check(titles.size() == 2, "listTitles() should return one entry per book");
    check(!titles.empty() && titles[0] == "Dune", "first title should be 'Dune'");
    check(titles.size() > 1 && titles[1] == "1984", "second title should be '1984'");
}

void test_has_book()
{
    std::cout << "test_has_book" << std::endl;
    Library library;
    library.addBook(Book("Dune", "Frank Herbert", 15.99, 3));

    check(library.hasBook("Dune"), "hasBook() should find an existing title");
    check(!library.hasBook("Nonexistent"), "hasBook() should return false for a missing title");
}

void test_total_copies()
{
    std::cout << "test_total_copies" << std::endl;
    Library library;
    library.addBook(Book("Dune", "Frank Herbert", 15.99, 3));
    library.addBook(Book("1984", "George Orwell", 9.99, 5));
    library.addBook(Book("Brave New World", "Aldous Huxley", 11.50, 2));

    // 3 + 5 + 2 = 10
    check(library.totalCopies() == 10, "totalCopies() should sum copies across ALL books, including the last one");
}

void test_remove_duplicate_titles()
{
    std::cout << "test_remove_duplicate_titles" << std::endl;
    Library library;
    library.addBook(Book("Duplicate", "Author A", 5.00, 1));
    library.addBook(Book("Duplicate", "Author B", 6.00, 1));
    library.addBook(Book("Unique", "Author C", 7.00, 1));

    bool removed = library.removeBook("Duplicate");

    check(removed, "removeBook() should report true when a matching title is removed");
    check(library.bookCount() == 1, "removeBook() should remove ALL books matching the title, leaving only 'Unique'");
}

void test_total_copies_empty_library()
{
    std::cout << "test_total_copies_empty_library" << std::endl;
    Library library;
    check(library.totalCopies() == 0, "totalCopies() on an empty library should be 0, not crash");
}

} // namespace

int main()
{
    test_add_and_count();
    test_total_value();
    test_list_titles();
    test_has_book();
    test_total_copies();
    test_remove_duplicate_titles();
    test_total_copies_empty_library();

    std::cout << "----------------------------------------" << std::endl;
    std::cout << tests_run << " tests run, " << tests_failed << " failed." << std::endl;

    return tests_failed == 0 ? 0 : 1;
}
