#include "library.h"
#include <iostream>
#include <algorithm>

Library::Library(std::string libName) : libName_(libName)
{} 

void Library::addBook(Book* book)
{
    books_.push_back(book);

    if (!books_.empty())
    {
        std::cout << "Book has been added in library!" << std::endl;
    }
}

void Library::removeBook(std::string bookTitle)
{
    for(auto book : books_)
        if(book->getTitle() == bookTitle)
            books_.erase(std::remove(books_.begin(), books_.end(), book), books_.end());
}

void Library::addCustomer(Customer* customer)
{
    registredCustomers_.push_back(customer);

    if (!registredCustomers_.empty())
    {
        std::cout << "Customer has been added in library!" << std::endl;
    }
}

void Library::removeCustomer(std::string customerName)
{
    for(auto customer : registredCustomers_)
        if (customer->getName() == customerName)
            registredCustomers_.erase(std::remove(registredCustomers_.begin(), registredCustomers_.end(), customer), registredCustomers_.end());
}

void Library::displayBooks() const
{
    for (auto book : books_)
        std::cout << "Title: " << book->getTitle() <<", Author: " << book->getAuthor() << ", Year: " << book->getYear() << ", Number of pages: " << book->getPageNumber() << std::endl;
}

void Library::displayCustomers() const
{
    for (auto customer : registredCustomers_)
        std::cout << "Name: " << customer->getName() <<", City: " << customer->getCity() << std::endl;
}
