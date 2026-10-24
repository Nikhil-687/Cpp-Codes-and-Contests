#include "product.hpp"

Product::Product(int id, std::string name, double price, int quantity)
    : id_(id), name_(std::move(name)), price_(price), quantity_(quantity)
{
}

int Product::getId() const { return id_; }
const std::string& Product::getName() const { return name_; }
double Product::getPrice() const { return price_; }
int Product::getQuantity() const { return quantity_; }

void Product::setPrice(double price) { price_ = price; }
void Product::setQuantity(int quantity) { quantity_ = quantity; }
