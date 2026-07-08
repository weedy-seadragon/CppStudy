#include <iostream>
#include <string>

int main(){
    std::string string = {'w', 'e', 'e', 'd', 'y', '\0', 's', 'e', 'a', 'd', 'r', 'a', 'g', 'o', 'n', '\0'};
    
    std::cout << string << std::endl;
    std::cout << string.size() << std::endl;
}
//実行結果:weedyseadragon 16
//sizeを見るとNULL文字も要素数に入っている