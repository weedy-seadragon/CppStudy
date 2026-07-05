#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

void showMessage(int value){
    if(!(10 <= value && value < 20)){
        std::cout << "10以上20未満です" << std::endl;
    }else{
        std::cout << "10以上20未満ではありません" << std::endl;
    }
}

int main() {
#ifdef _WIN32
//コンソール出力をUTF-8として扱う（文字化け対策）
SetConsoleOutputCP(CP_UTF8);
#endif
    //真偽反転
	showMessage(9);
    showMessage(15);
    showMessage(20);
}