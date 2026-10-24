#pragma once

#include <string>

class Product {
public:
    Product(int id, std::string name, double price, int quantity);

    int getId() const;
    const std::string& getName() const;
    double getPrice() const;
    int getQuantity() const;

    void setPrice(double price);
    void setQuantity(int quantity);

private:
    int id_;
    std::string name_;
    double price_;
    int quantity_;
};
