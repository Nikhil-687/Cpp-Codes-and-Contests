#include <iostream>
#include <string>
#include <vector>

#include "inventory.hpp"
#include "order.hpp"
#include "checkout.hpp"

namespace {

int tests_run = 0;
int tests_failed = 0;

void check(bool condition, const std::string& description)
{
    ++tests_run;
    if (condition) {
        std::cout << "  [PASS] " << description << std::endl;
    } else {
        ++tests_failed;
        std::cout << "  [FAIL] " << description << std::endl;
    }
}

void test_add_and_find()
{
    std::cout << "test_add_and_find" << std::endl;
    Inventory inventory;
    inventory.addProduct(Product(1, "Wireless Mouse", 25.00, 10));
    inventory.addProduct(Product(2, "Mechanical Keyboard", 75.00, 5));

    check(inventory.productCount() == 2, "productCount() should be 2 after adding two products");

    Product* mouse = inventory.findProduct(1);
    check(mouse != nullptr, "findProduct(1) should find the mouse");
    check(mouse != nullptr && mouse->getName() == "Wireless Mouse", "found product should have the right name");
}

void test_restock_updates_original()
{
    std::cout << "test_restock_updates_original" << std::endl;
    Inventory inventory;
    inventory.addProduct(Product(1, "Wireless Mouse", 25.00, 10));

    bool ok = inventory.restock(1, 5);
    check(ok, "restock() should return true for an existing id");

    Product* mouse = inventory.findProduct(1);
    check(mouse != nullptr && mouse->getQuantity() == 15,
          "restock(1, 5) should raise the mouse's quantity from 10 to 15");
}

void test_bulk_add_and_reprice()
{
    std::cout << "test_bulk_add_and_reprice" << std::endl;
    Inventory inventory;
    inventory.addProduct(Product(1, "Wireless Mouse", 25.00, 10));

    // Force several reallocations while re-pricing product 1.
    std::vector<Product> newProducts;
    for (int i = 2; i < 60; ++i) {
        newProducts.emplace_back(i, "Filler Product", 1.00, 1);
    }
    inventory.bulkAddAndReprice(newProducts, 1, 19.99);

    Product* mouse = inventory.findProduct(1);
    check(mouse != nullptr && mouse->getPrice() == 19.99,
          "bulkAddAndReprice() should update product 1's price to 19.99");
}

void test_finalize_total()
{
    std::cout << "test_finalize_total" << std::endl;
    Inventory inventory;
    inventory.addProduct(Product(1, "Wireless Mouse", 25.00, 10));
    inventory.addProduct(Product(2, "Mechanical Keyboard", 75.00, 5));

    Product* mouse = inventory.findProduct(1);
    Product* keyboard = inventory.findProduct(2);

    Order order(1001);
    std::vector<OrderLine> lines = {
        {mouse, 2},
        {keyboard, 1},
    };

    // Expected: 2 * 25.00 + 1 * 75.00 = 125.00
    double total = order.finalize(lines);
    check(total == 125.00, "finalize() should return the correct order total (125.00)");
}

void test_total_inventory_value()
{
    std::cout << "test_total_inventory_value" << std::endl;
    Inventory inventory;
    inventory.addProduct(Product(1, "Widget", 10.00, 2));   // 20.00
    inventory.addProduct(Product(2, "Gadget", 5.00, 4));    // 20.00

    // Expected: 20.00 + 20.00 = 40.00
    check(inventory.totalInventoryValue() == 40.00,
          "totalInventoryValue() should sum price * quantity across exactly the products present");
}

void test_receipt_lifecycle()
{
    std::cout << "test_receipt_lifecycle" << std::endl;
    Inventory inventory;
    inventory.addProduct(Product(1, "Wireless Mouse", 25.00, 10));
    Product* mouse = inventory.findProduct(1);

    Order order(2002);
    std::vector<OrderLine> lines = {{mouse, 1}};
    order.finalize(lines);

    printReceipt(order);
    check(true, "printReceipt() should print without the program crashing here");
    // Order's destructor runs at the end of this scope.
}

} // namespace

int main()
{
    test_add_and_find();
    test_restock_updates_original();
    test_bulk_add_and_reprice();
    test_finalize_total();
    test_total_inventory_value();
    test_receipt_lifecycle();

    std::cout << "----------------------------------------" << std::endl;
    std::cout << tests_run << " tests run, " << tests_failed << " failed." << std::endl;

    return tests_failed == 0 ? 0 : 1;
}
