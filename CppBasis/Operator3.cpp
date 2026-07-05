#include <iostream>

int main() {
    /*
	int i = 0;
    i *= 2 + 4;
    i % 3;
    std::cout << i << std::endl;
    */
   //複合演算子無しでの書き換え
   	int i = 0;
    i = i * (2 + 4);
    i = i % 3;
    std::cout << i << std::endl;
}