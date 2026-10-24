#include <iostream>

#include "library.hpp"

int main()
{
    Library library;

    Book dune("Dune", "Frank Herbert", 15.99, 3);
    library.addBook(std::move(dune));

    // Is this line safe? Think carefully about what std::move(dune) did above.
    std::cout << "Added: " << dune.getTitle() << " by " << dune.getAuthor() << std::endl;

    library.addBook(Book("1984", "George Orwell", 9.99, 5));
    library.addBook(Book("Brave New World", "Aldous Huxley", 11.50, 2));

    std::cout << "Total books in catalog: " << library.bookCount() << std::endl;
    std::cout << "Total copies: " << library.totalCopies() << std::endl;
    std::cout << "Total value: $" << library.totalValue() << std::endl;

    std::cout << "\nCatalog:" << std::endl;
    for (const auto& title : library.listTitles()) {
        std::cout << "  - " << title << std::endl;
    }

    return 0;
}
