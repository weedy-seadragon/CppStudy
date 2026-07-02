#include <iostream>

void show_message(){
    std::cout << "hello. world" << std::endl;

    return;//ここで関数を終了（返り値を返す）しているため、以下の処理は実行されない

    std::cout << "hello, return" << std::endl;
}

int main(){
    show_message();
}