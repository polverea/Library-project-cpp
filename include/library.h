#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <vector>
#include "book.h"
#include "customer.h"

class Library 
{
public:
    Library(std::string libName);
    
    std::string getName() const;
    void addBook(Book* book);
    void removeBook(std::string bookTitle);

    void addCustomer(Customer* customer);
    void removeCustomer(std::string customerName);

    void displayBooks() const;
    void displayCustomers() const;

    virtual ~Library(){};

private: 
    std::string libName_;
    std::vector<Book*> books_;
    std::vector<Customer*> registredCustomers_;
};

#endif // LIBRARY_H