#include "menu.h"

Menu::Menu(std::istream &in)
{
    while(!in.eof())
    {
        std::string name;
        double price;
        in >> name >> price;
        items.push_back(Item(name, price));
    }
}

void Menu::print(std::ostream &out)
{
    out << "Menu:" << std::endl;
    for (int idx = 0; idx < items.size(); ++idx)
    {
        int id = idx + 1;
        out << id << ": " << items[idx].getName() << " $" << items[idx].getPrice() << std::endl;
    }
}

Item Menu::get(int id)
{
    if (id < 1 || id > items.size())
    {
        return Item("Invalid Item", 0.0);
    }
    int idx = id - 1;
    return items[idx];
}
