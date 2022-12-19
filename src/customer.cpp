#include "customer.h"

Customer::Customer(std::string name, std::string city)
{
    this->name_ = name;
    this->city_ = city;
}

std::string Customer::getName() const
{
    return this->name_;
}
std::string Customer::getCity() const
{
    return this->city_;
}

void Customer::setName(std::string name)
{
    this->name_ = name;    
}

void Customer::setCity(std::string city)
{
    this->city_ = city;
}