#include "SecondsTariff.h"
 

SecondsTariff::SecondsTariff()
{
    price = 1.0f;
}

SecondsTariff::SecondsTariff(std::string name, float price) :Tariff(name)
{
    if (price <= 0)
        throw new PriceException("number is negative", price);

    this->price = price;
}

void SecondsTariff::setPrice(float price)
{
    this->price = price;
}

float SecondsTariff::getPrice() const
{
    return price;
}

float SecondsTariff::calcCost(int seconds) const
{
    if (seconds <= 0)
        throw new SecondsException("seconds is negative", seconds);

    return price * seconds;
}

void SecondsTariff::show() const
{
    cout << "Seconds Tariff\n";
    Tariff::show();
    cout << "Price for seconds: " << price << endl;
}
