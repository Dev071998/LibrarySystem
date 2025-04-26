#ifndef BOOK_HPP
#define BOOK_HPP

#include <iostream>
#include <string>

class Book{
    private:
        int id;
        std::string title;
        std::string author;
        boolean borrowed;
    public:
        Book(int id, std::string title, std::string author, boolean borrowed){ /* parameterized constructor */
            this->id = id;
           this->title = title;
           this->author = author;
           this->borrowed = borrowed;
        }
        
        int getid(){
            return this->id;
        }
        std::string getAuthor(){
            return this->author;
        }
        boolean getBorrowed(){
            return this->borrowed;
        }
        std::string getTitle(){
            return this->title;
        }
};

#endif /* BOOK_HPP */
