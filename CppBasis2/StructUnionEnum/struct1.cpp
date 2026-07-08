#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

struct product{
    int id;
    int price;
    int stock;
};

void showProduct(product* productPointer){//引数をポインタ型へ変更
    std::cout << "商品ID：" << productPointer->id << std::endl;
    std::cout << "単価：" << productPointer->price << std::endl;
    std::cout << "在庫数：" << productPointer->stock << std::endl;
}

int main() {
#ifdef _WIN32
	//コンソール出力をUTF-8として扱う（文字化け対策）
	SetConsoleOutputCP(CP_UTF8);
#endif
    //構造体の実体を作成
    product pen = {
        0,//商品ID
        100,//単価
        200,//在庫数
    };

    product *penPointer = &pen;//実体（pen）のポインタを宣言

    showProduct(penPointer);

    //showProduct(&pen);//わざわざポインタを宣言しなくてもこうすれば良い
}
/*
構造体と共用体の違い
構造体はメンバ変数ごとに異なる値を代入する事ができるが、共用体ではすべてのメンバ変数で同じアドレスが共有される。
共用体は初期化の際には一番はじめのメンバ変数しか初期化することができない（というかそこを初期化したら自動的にすべて初期化される）。（C++17まで）
C++20からは指示付き初期化子（designated initializer）が追加され、最初のメンバ以外も直接指定して初期化できるようになった。
*/