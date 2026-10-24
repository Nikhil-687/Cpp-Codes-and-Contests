#include <iostream>
#include <string>

#include "inventory.hpp"
#include "order.hpp"
#include "checkout.hpp"

namespace xyz {

const std::string formatSku(int id)
{
    std::string sku = "PROD-" + std::to_string(id);
    return sku;
}

} // namespace

int main()
{
    Inventory inventory;
    inventory.addProduct(Product(1, "Wireless Mouse", 25.00, 10));
    inventory.addProduct(Product(2, "Mechanical Keyboard", 75.00, 5));

    std::cout << "SKU: " << xyz::formatSku(1) << std::endl;

    Product* mouse = inventory.findProduct(1);
    Product* keyboard = inventory.findProduct(2);

    Order order(1001);
    std::vector<OrderLine> lines = {
        {mouse, 2},
        {keyboard, 1},
    };

    double total = order.finalize(lines);
    std::cout << "Order total: $" << total << std::endl;

    printReceipt(order);

    std::cout << "Total inventory value: $" << inventory.totalInventoryValue() << std::endl;

    return 0;
}
