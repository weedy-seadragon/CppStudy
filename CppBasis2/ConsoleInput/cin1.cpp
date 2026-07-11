#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
#ifdef _WIN32
	//コンソール出力をUTF-8として扱う（文字化け対策）
	SetConsoleOutputCP(CP_UTF8);
#endif

    int input;

    std::cout << "数値を入力してください>";

    std::cin >> input;

    std::cout << "入力されたのは" << input << "です。" << std::endl; 
    
}