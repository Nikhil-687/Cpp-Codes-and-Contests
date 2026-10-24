# Project: Store Order System

## Overview

A small store management system:

- `Product` (`include/product.hpp`, `src/product.cpp`) — id, name, price, quantity.
- `Inventory` (`include/inventory.hpp`, `src/inventory.cpp`) — owns a catalog of
  products: add, find, restock, bulk-add-and-reprice, and total value.
- `Order` (`include/order.hpp`, `src/order.cpp`) — takes a set of order lines,
  computes a total, and can generate a `Receipt`.
- `Receipt` (`include/receipt.hpp`, `src/receipt.cpp`) — a simple printable record.
- `checkout.hpp/.cpp` — a helper that prints an order's receipt.

## Task

Run `./run_tests.sh`. Several tests fail. One crashes the whole test binary.

Find and fix every underlying bug in the `src/` files. Don't modify
`test/test_suite.cpp` — it's the spec. When you're done, `./run_tests.sh`
should report `0 failed`, and `./run.sh` should run the demo app cleanly
start to finish without crashing.

There is also at least one issue that no test catches — you'll need to
read the code (and pay attention to anything your compiler/IDE flags) to
find it.

## Suggested approach

1. Read every test name and failure message before touching any source file.
   Write down, in your own words, what each one implies is wrong.
2. For each failure, form a hypothesis by reading the relevant function
   yourself first.
3. Fix one bug at a time and re-run the tests after each fix — don't
   batch multiple fixes together, or you won't know which change did what.
4. Watch the terminal output order carefully. If the test binary aborts
   partway through, note what ran successfully *before* the crash — that's
   informative about where the problem is, not just that it exists.

## Build requirements

- CMake 3.10+
- A C++17 compiler (g++ or clang++)
