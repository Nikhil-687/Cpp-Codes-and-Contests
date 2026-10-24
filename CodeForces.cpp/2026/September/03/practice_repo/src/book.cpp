#include "book.hpp"

Book::Book(std::string title, std::string author, double price, int copies)
    : title_(std::move(title)), author_(std::move(author)), price_(price), copies_(copies)
{
}

const std::string& Book::getTitle() const { return title_; }
const std::string& Book::getAuthor() const { return author_; }
double Book::getPrice() const { return price_; }
int Book::getCopies() const { return copies_; }

void Book::setCopies(int copies) { copies_ = copies; }
