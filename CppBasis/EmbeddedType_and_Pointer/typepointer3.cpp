#include <iostream>

int main(){
    int i = 0;

    int* iptr = &i;

    *iptr = 42;//ポインターを用いての出力変更
    
    std::cout << i << std::endl;
}