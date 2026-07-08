#include <iostream>

int sum(int x, int y, int z){
    return x+y+z;
}

int main(){
    std::cout << "sum(5,1,-2):" << sum(5,1,-2) << std::endl;
}