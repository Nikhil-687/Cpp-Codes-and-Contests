#include "receipt.hpp"
#include <iostream>

Receipt::Receipt(int orderId, double total) : orderId_(orderId), total_(total) {}

void Receipt::print() const
{
    std::cout << "Receipt for order #" << orderId_ << ": $" << total_ << std::endl;
}
