#include <iostream>
#include <string>
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
#ifdef _WIN32
    //コンソール入力をUTF-8として扱う（文字化け対策）
    SetConsoleCP(CP_UTF8);  
	//コンソール出力をUTF-8として扱う（文字化け対策）
	SetConsoleOutputCP(CP_UTF8);
#endif
    std::string input;
    do{
        std::cout << "文字列を入力してください>";

        std::getline(std::cin, input);
        
        if(input.empty()){
            std::cout << "入力がありませんでした。プログラムを終了します。" << std::endl;
        }else{
            std::cout << "入力されたのは " << input << " です。" << std::endl; 
        }
    }while(!input.empty());
    
}