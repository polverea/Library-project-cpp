#include <iostream>

#include "library.h"
#include "book.h"
#include "customer.h"

int main() 
{
    Library library("My Library");
    int opt;
    do{
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Add a book" << std::endl;
        std::cout << "2. Display all books" << std::endl;
        std::cout << "3. Remove book by title" << std::endl;
        std::cout << "4. Add a customer" << std::endl;
        std::cout << "5. Display all customers" << std::endl;
        std::cout << "Enter your choice: ";
        std:: cin >> opt;
        switch(opt)
        {   
            case 1:
            {
                std::string title;
                std::string author;
                int year, pageNumber;
                std::cout << "Add the title of the book: ";
                std::cin >> title;
                std::cout << "Add the author of the book: ";
                std::cin >> author;
                std::cout << "Add the number of pages: ";
                std::cin >> pageNumber;
                std::cout << "Add the year when book appeard: ";
                std::cin >> year;
                library.addBook(new Book(title, author, pageNumber, year));
                break;
            }
            case 2:
                library.displayBooks();
                break;
            case 3: 
            {
                std::cout << "Add the title of the book you want to be deleted:  " << std::endl;
                std::string title;
                std::cin >> title;
                library.removeBook(title);
                break;
            }
            case 4:
            {
                std::string name, city;
                std::cout << "Add the name of the customer: ";
                std::cin >> name;
                std::cout << "Add the city of the customer: ";
                std::cin >> city;
                library.addCustomer(new Customer(name, city));
                break;
            }
            case 5: 
            {
                std::cout << "Add the name of the customer you want to be deleted:  " << std::endl;
                std::string name;
                std::cin >> name;
                library.removeCustomer(name);
                break;
            }
            case 6:
                library.displayCustomers();
                break;
            default:
                return 0;
        }
    }
    while(opt != 0);
    return 0;
}     