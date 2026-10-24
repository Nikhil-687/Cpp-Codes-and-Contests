# Project: Library Catalog System

## Overview

This is a small C++ library catalog system built around two classes:

- `Book` (`include/book.hpp`, `src/book.cpp`) — a simple value type holding
  title, author, price, and copy count.
- `Library` (`include/library.hpp`, `src/library.cpp`) — manages a
  collection of `Book`s: add, remove, count, value totals, and listing.

## Task

Run the test suite with `./run_tests.sh`. Some tests currently **fail**
(one of them may even crash the test binary). Your job:

1. Read the failing test output carefully — the test names and messages
   describe the expected behavior.
2. Find the root cause of each bug in `src/library.cpp` (you should not
   need to modify `test/test_library.cpp` — treat it as the spec).
3. Fix the bugs.
4. Re-run `./run_tests.sh` until everything passes.
5. Run `./run.sh` to sanity-check the demo app still behaves sensibly.

## Notes

- There's also a line in `src/main.cpp` worth thinking about carefully —
  it compiles and runs fine, but is it actually *correct*? (Hint: it's
  related to move semantics.) No test covers this one — it's there for
  you to spot by reading.
- Don't just make the test pass by changing the loop bound until numbers
  match — understand *why* the current code is wrong first.
- Some bugs are pure logic errors (wrong output). At least one is closer
  to undefined behavior (it might crash, might not, depending on your
  compiler/optimization level) — that unpredictability is itself a clue
  about what kind of bug it is.

## Build requirements

- CMake 3.10+
- A C++17 compiler (g++ or clang++)
