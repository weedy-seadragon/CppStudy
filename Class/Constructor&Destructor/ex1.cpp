/*
コンストラクター戻り値の型を持たない、メンバ初期化リストを扱うことができるという特徴を持つ。
*/
#include <iostream>

class Hoge{
public:
    Hoge();
    ~Hoge();
};

Hoge::Hoge(){
    std::cout << "Call Constructor" << std::endl;
}

Hoge::~Hoge(){
    std::cout << "Call Destructor" << std::endl;
}

int main(){
    Hoge hoge;
}

/*
コンストラクターでメモリを取得し、デストラクターで解放することをRAIIという
*/