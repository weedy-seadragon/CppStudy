#include <iostream>

int main(){
    int array[] = {4, 2, 1, 9, 5};

    int i = 0;
    while(i < 5){
        std::cout << array[4-i] << std::endl;
        i += 1;
    }
}
//逆順に出力