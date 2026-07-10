#include <iostream>

int main(){
    int array[] = {5, 4, 3, 2, 1};

    for(auto e : array){
        std::cout << e << std::endl;
        decltype(e) eNew = e + 0.001f;//eの型から型推論される
        std::cout << eNew << std::endl;
    }
}
/*
型推論して変数宣言するには初期値が必要

上記のプログラムでeはintに型推論される

*/