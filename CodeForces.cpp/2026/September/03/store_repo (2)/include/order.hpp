#pragma once

#include <vector>

#include "product.hpp"
#include "receipt.hpp"

struct OrderLine {
    Product* product;
    int quantity;
};

class Order {
public:
    explicit Order(int id);
    ~Order();

    // Takes ownership of the given lines and computes the order total.
    double finalize(std::vector<OrderLine> lines);

    int getId() const;

    // Lazily creates (and caches) a Receipt for this order.
    // The Order retains ownership of the returned pointer.
    Receipt* generateReceipt();

private:
    int id_;
    std::vector<OrderLine> lines_;
    double total_ = 0.0;
    Receipt* receipt_ = nullptr;
};
