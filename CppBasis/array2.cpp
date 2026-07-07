#include <iostream>

int main(){
    char string[] = {'w', 'e', 'e', 'd', 'y', '\0', 's', 'e', 'a', 'd', 'r', 'a', 'g', 'o', 'n', '\0'};
    
    std::cout << string << std::endl;
}

//実行結果:weedy 文字列の出力がNULLが現れるまで順番に文字を出力という仕様であるため。