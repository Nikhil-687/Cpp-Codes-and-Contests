#pragma once

class Receipt {
public:
    Receipt(int orderId, double total);

    void print() const;

private:
    int orderId_;
    double total_;
};
