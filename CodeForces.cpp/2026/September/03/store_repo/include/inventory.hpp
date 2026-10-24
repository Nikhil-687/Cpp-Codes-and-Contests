#pragma once

#include <vector>

#include "product.hpp"

class Inventory {
public:
    void addProduct(Product product);

    // Returns a pointer to the product with the given id, or nullptr if not found.
    Product* findProduct(int id);

    // Adds every product in `newProducts` to the catalog, then updates the
    // price of the existing product identified by `existingId`.
    void bulkAddAndReprice(const std::vector<Product>& newProducts, int existingId, double newPrice);

    // Increases the quantity of the product with the given id by `extraQuantity`.
    // Returns false if no product with that id exists.
    bool restock(int id, int extraQuantity);

    // Sum of price * quantity across the entire catalog.
    double totalInventoryValue() const;

    size_t productCount() const;

private:
    std::vector<Product> products_;
};
