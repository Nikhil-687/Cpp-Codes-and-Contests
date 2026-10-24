#include "order.hpp"
#include<iostream>

Order::Order(int id) : id_(id) {}

Order::~Order()
{
    delete receipt_;
}

double Order::finalize(std::vector<OrderLine> lines)
{
    lines_ = std::move(lines);
    
    double total = 0.0;
    for (const auto& line : lines_) {
        total += line.product->getPrice() * line.quantity;
    }

    total_ = total;
    return total_;
}

int Order::getId() const { return id_; }

Receipt* Order::generateReceipt()
{
    if (receipt_ == nullptr) {
        receipt_ = new Receipt(id_, total_);
    }
    return receipt_;
}
