#include "book.h"
#include <string>

Book::Book(std::string title,std::string author, int pageNumber, int year)
{
    this->title_ = title;
    this->author_ = author;
    this->pageNumber_ = pageNumber;
    this->year_ = year;
}

std::string Book::getTitle() const
{
    return this->title_;
}

std::string Book::getAuthor() const
{
    return this->author_;
}

int Book::getPageNumber() const
{
    return this->pageNumber_;
}

int Book::getYear() const
{
    return this->year_;
}

void Book::setTitle(std::string title)
{
    this->title_ = title;
}

void Book::setAuthor(std::string author)
{
    this->author_ = author;
}

void Book::setPageNumber(int pageNumber)
{
    this->pageNumber_ = pageNumber;
}
void Book::setYear(int year)
{
    this->year_ = year;
}