#include "checkout.hpp"

void printReceipt(Order& order)
{
    Receipt* receipt = order.generateReceipt();
    receipt->print();
    // delete receipt;
}
