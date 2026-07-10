#include <iostream>

int main(){
    int i = 0;

    int& j = i;//jを参照にすることにより出力結果を42に変更
    j = 42;

    std::cout << i << std::endl;

}