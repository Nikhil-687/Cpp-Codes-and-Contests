#pragma once

#include <string>

class Book {
public:
    Book(std::string title, std::string author, double price, int copies);

    const std::string& getTitle() const;
    const std::string& getAuthor() const;
    double getPrice() const;
    int getCopies() const;

    void setCopies(int copies);

private:
    std::string title_;
    std::string author_;
    double price_;
    int copies_;
};
