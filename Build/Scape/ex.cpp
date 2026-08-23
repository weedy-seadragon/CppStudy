//スコープから抜けた際にそのスコープで宣言された変数は破棄される

#include <iostream>

int counter = 0;//グローバル変数として宣言することで生存範囲を広げる

int get_counter(){
    //int counter = 0;
    return counter++;
}

int main(){
    std::cout << get_counter() << std::endl;
    std::cout << get_counter() << std::endl;
    std::cout << get_counter() << std::endl;
}