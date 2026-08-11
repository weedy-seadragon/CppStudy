#include <string>
#include <iostream>

class Book{
    std::string title;
    std::string writer;
    int price;

public:
    Book(std::string title, std::string writer, int price) : title(title), writer(writer), price(price){}
    Book(const Book& copy) : title(copy.title), writer(copy.writer), price(copy.price) {};
    void SetAll();
};

void Book::SetAll(){
    std::cout << "title:" << title << std::endl;
    std::cout << "writer:" << writer << std::endl;
    std::cout << "price:" << price << std::endl;
}

int main(){
    Book book("a","mosari",240);
    Book copy(book);
    copy.SetAll();
}

//インスタンスの初期化時に=を使うことができないのは2つ以上のメンバ変数を初期化するとき