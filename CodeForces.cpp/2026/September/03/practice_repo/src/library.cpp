#include "library.hpp"

void Library::addBook(Book book)
{
    books_.push_back(std::move(book));
}

bool Library::removeBook(const std::string& title)
{
    bool removed = false;
    for (auto it = books_.begin(); it != books_.end();) {
        if (it->getTitle() == title) {
            it = books_.erase(it);
            removed = true;
        } else {
            ++it;
        }
    }
    return removed;
}

int Library::totalCopies() const
{
    int total = 0;
    for (const auto& book : books_) {
        total += book.getCopies();
    }
    return total;
}

bool Library::hasBook(const std::string& title)
{
    for (const auto& book : books_) {
        if (book.getTitle() == title) {
            return true;
        }
    }
    return false;
}

double Library::totalValue() const
{
    double total = 0.0;
    for (const auto& book : books_) {
        total += book.getPrice() * book.getCopies();
    }
    return total;
}

std::vector<std::string> Library::listTitles() const
{
    std::vector<std::string> titles;
    titles.reserve(books_.size());
    for (const auto& book : books_) {
        titles.push_back(book.getTitle());
    }
    return titles;
}

size_t Library::bookCount() const
{
    return books_.size();
}
