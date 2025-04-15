#pragma once

#include <string>

using std::string;

class Item
{
public:
    Item(const string &name, double price);
    string getName() const;
    double getPrice() const;

private:
    string name;
    double price;
};
