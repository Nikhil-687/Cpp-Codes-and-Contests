#pragma once

#include <string>
#include <vector>

#include "book.hpp"

class Library {
public:
    void addBook(Book book);

    // Removes ALL books matching the given title.
    // Returns true if at least one book was removed.
    bool removeBook(const std::string& title);

    // Returns the total number of copies across every book in the catalog.
    int totalCopies() const;

    // Returns true if a book with the given title exists in the catalog.
    bool hasBook(const std::string& title);

    // Returns the total value of the catalog (price * copies, summed).
    double totalValue() const;

    std::vector<std::string> listTitles() const;

    size_t bookCount() const;

private:
    std::vector<Book> books_;
};
