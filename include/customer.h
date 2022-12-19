#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer
{
public:
    Customer();
    Customer(std::string name, std::string city);

    std::string getName() const;
    std::string getCity() const;

    void setName(std::string name);
    void setCity(std::string city);
    
    virtual ~Customer(){};
private:
    std::string name_;
    std::string city_;
};

#endif // CUSTOMER_H