#include <iomanip>
#include "discount.h"

PercentageDiscount::PercentageDiscount(int percentage) : off(percentage / 100.0)
{
}

double PercentageDiscount::apply(double total) const
{
    return total - off * total;
}

void PercentageDiscount::print(std::ostream &out) const
{
    out << "Discount: " << int(off * 100.0) << "% off" << std::endl;
}

FlatDiscount::FlatDiscount(double amount) : off(amount)
{
}
double FlatDiscount::apply(double total) const
{
    return total - off;
}
void FlatDiscount::print(std::ostream &out) const
{
    out << "Discount: $" << std::setprecision(2) << std::fixed << off << " off"
        << std::endl;
}

double Discount::apply(double total) const
{
    return total;
}

void Discount::print(std::ostream &out) const
{
    out << "Discount: None" << std::endl;
}
