#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
//コンソール出力をUTF-8として扱う（文字化け対策）
SetConsoleOutputCP(CP_UTF8);
#endif

    int a = 2;
    switch(a + 1){
        case 1:
            std::cout << "a + 1は1です" << std::endl;
            break;
            
        case 2:
            std::cout << "a + 1は2です" << std::endl;
            break;

        default:
            std::cout << "a + 1は1でも2でもありません" << std::endl;
            break;

    }
    //defaultを消したときの挙動を確認した
}