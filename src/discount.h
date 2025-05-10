#pragma once

#include <ostream>

class Discount
{
public:
    virtual double apply(double total) const = 0;
    virtual void print(std::ostream &out) const = 0;
};

class PercentageDiscount : public Discount
{
public:
    PercentageDiscount(int percentage);
    double apply(double total) const override;
    void print(std::ostream &out) const override;

private:
    double off;
};

class FlatDiscount : public Discount
{
public:
    FlatDiscount(double amount);
    double apply(double total) const override;
    void print(std::ostream &out) const override;

private:
    double off;
};
