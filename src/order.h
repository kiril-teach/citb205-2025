#pragma once

#include <ostream>
#include <vector>

#include "item.h"
#include "discount.h"

using std::vector;

class Order
{
public:
    Order();
    void add(const Item &item);
    void set(const Discount *discount);
    void print(std::ostream &out);

private:
    vector<Item> items;
    const Discount *discount;
};
