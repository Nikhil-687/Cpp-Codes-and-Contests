#include "inventory.hpp"
#include<iostream>

void Inventory::addProduct(Product product)
{
    products_.push_back(std::move(product));
}

Product* Inventory::findProduct(int id)
{
    for (auto& product : products_) {
        if (product.getId() == id) {
            return &product;
        }
    }
    return nullptr;
}

void Inventory::bulkAddAndReprice(const std::vector<Product>& newProducts, int existingId, double newPrice)
{

    for (const auto& product : newProducts) {
        products_.push_back(product);
    }

    for(auto& existing : products_){
        if (existing.getId() == existingId) {
            existing.setPrice(newPrice);
        }
    }
}

bool Inventory::restock(int id, int extraQuantity)
{
    Product* found = findProduct(id);
    if (found == nullptr) {
        return false;
    }

    Product& updated = *found;
    updated.setQuantity(updated.getQuantity() + extraQuantity);
    return true;
}

double Inventory::totalInventoryValue() const
{
    double total = 0.0;
    for (size_t i = 0; i < products_.size(); ++i) {
        total += products_[i].getPrice() * products_[i].getQuantity();
    }
    return total;
}

size_t Inventory::productCount() const
{
    return products_.size();
}
