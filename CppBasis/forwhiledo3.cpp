#include <iostream>

int main(){
    int array[] = {4, 2, 1, 9, 5};

    int i = 0;
    do{
        std::cout << array[4-i] << std::endl;
        i += 1;
    }while(i < 5);
}
//do-whileを使って逆順に出力