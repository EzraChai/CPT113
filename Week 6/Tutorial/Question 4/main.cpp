#include <iostream>

class Author
{
private:
    std::string name;
    std::string hometown;
    std::string genre[10];

public:
    Author(std::string name, std::string hometown, std::string genre[10])
    {
        this->name = name;
        this->hometown = hometown;
        for (int i = 0; i < 10; i++)
        {
            this->genre[i] = genre[i];
        }
    }
    friend class Book;
};

class Book
{
private:
    std::string bookId;
    std::string bookType;
    std::string genre;

public:
    Book(std::string bookId, std::string bookType, std::string genre)
    {
        this->bookId = bookId;
        this->bookType = bookType;
        this->genre = genre;
    }

    void print(Author author)
    {
        std::cout << "Book ID: " << bookId << std::endl;
        std::cout << "Book Type: " << bookType << std::endl;
        std::cout << "Genre: " << genre << std::endl;
        std::cout << "Author Name: " << author.name << std::endl;
    }
};

int main()
{

    std::string bookList[10];
    Author author("J.K. Rowling", "Yate", bookList);
    Book book("1", "Fiction", "Fantasy");

    book.print(author);

    return 0;
}