#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book 
{
public:
    Book();
    Book(std::string title,std::string author, int pageNumber, int year);
   
    std::string getTitle() const;
    std::string getAuthor() const;
    int getPageNumber() const;
    int getYear() const;
    
    void setTitle(std::string title);
    void setAuthor(std::string author);
    void setPageNumber(int pageNumber);
    void setYear(int year);

    virtual ~Book(){};
private: 
    std::string title_;
    std::string author_;
    int pageNumber_;
    int year_;
};

#endif // BOOK_H