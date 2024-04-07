#include <iostream>

#include <string>

#include <algorithm>

struct Book {

    std::string title;

    std::string author;

    std::string publisher;

    std::string genre;

};

void printBook(const Book& book) {

    std::cout << "name: " << book.title << std::endl;

    std::cout << "author: " << book.author << std::endl;

    std::cout << "publishing house: " << book.publisher << std::endl;

    std::cout << "genre: " << book.genre << std::endl;

    std::cout << std::endl;

}

void editBook(Book& book) {

    std::cout << "enter new book: ";

    std::getline(std::cin >> std::ws, book.title);

    std::cout << "enter new author: ";

    std::getline(std::cin >> std::ws, book.author);

    std::cout << "enter new publishing house: ";

    std::getline(std::cin >> std::ws, book.publisher);

    std::cout << "enter new genre: ";

    std::getline(std::cin >> std::ws, book.genre);

}

void printAllBooks(const Book library[], int size) {

    std::cout << "library:" << std::endl;

    for (int i = 0; i < size; i++) {

        std::cout << "boook " << i + 1 << ":" << std::endl;

        printBook(library[i]);

    }

}

void searchByAuthor(const Book library[], int size, const std::string& author) {

    std::cout << "books author " << author << ":" << std::endl;

    bool found = false;

    for (int i = 0; i < size; i++) {

        if (library[i].author == author) {

            printBook(library[i]);

            found = true;

        }

    }

    if (!found) {

        std::cout << "error." << std::endl;

    }

}

void searchByTitle(const Book library[], int size, const std::string& title) {

    std::cout << "book with name \"" << title << "\":" << std::endl;

    bool found = false;

    for (int i = 0; i < size; i++) {

        if (library[i].title == title) {

            printBook(library[i]);

            found = true;

        }

    }

    if (!found) {

        std::cout << "error." << std::endl;

    }

}

bool compareByTitle(const Book& book1, const Book& book2) {

    return book1.title < book2.title;

}

bool compareByAuthor(const Book& book1, const Book& book2) {

    return book1.author < book2.author;

}

bool compareByPublisher(const Book& book1, const Book& book2) {

    return book1.publisher < book2.publisher;

}

void sortBooksByTitle(Book library[], int size) {

    std::sort(library, library + size, compareByTitle);

}

void sortBooksByAuthor(Book library[], int size) {

    std::sort(library, library + size, compareByAuthor);

}

void sortBooksByPublisher(Book library[], int size) {

    std::sort(library, library + size, compareByPublisher);

}

void removeBookByCriteria(Book library[], int& size, const std::string& criteria) {

    int removedCount = 0;

    for (int i = 0; i < size; i++) {

        if (library[i].title == criteria || library[i].author == criteria ||

            library[i].publisher == criteria || library[i].genre == criteria) {

            removedCount++;

        }
        else {

            library[i - removedCount] = library[i];

        }

    }

    size -= removedCount;

    std::cout << "delete " << removedCount << " choose." << std::endl;

}

void addNewBook(Book library[], int& size) {

    if (size >= 10) {

        std::cout << "full." << std::endl;

        return;

    }

    Book newBook;

    std::cout << "enter new book: ";

    std::getline(std::cin >> std::ws, newBook.title);

    std::cout << "enter new author: ";

    std::getline(std::cin >> std::ws, newBook.author);

    std::cout << "enter new publishing house: ";

    std::getline(std::cin >> std::ws, newBook.publisher);

    std::cout << "enter new genre: ";

    std::getline(std::cin >> std::ws, newBook.genre);

    library[size] = newBook;

    size++;

    std::cout << "good." << std::endl;

}

int main() {

    Book library[10];

    int size = 0;


    Book book1 = { "book 1", "author 1", "pub name 1", "genre 1" };

    Book book2 = { "book 2", "author 2", "pub name 2", "genre 2" };

    library[size++] = book1;

    library[size++] = book2;
    addNewBook(library, size);

    editBook(library[0]);

    printAllBooks(library, size);

    searchByAuthor(library, size, "author 1");

    searchByTitle(library, size, "book 2");

    sortBooksByTitle(library, size);

    sortBooksByAuthor(library, size);

    sortBooksByPublisher(library, size);

    removeBookByCriteria(library, size, "genre 2");

    printAllBooks(library, size);

    return 0;

}

