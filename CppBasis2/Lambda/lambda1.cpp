#include <iostream>

/*
void showValue(int v){
    std::cout << v << std::endl;
}
*/

//ラムダ式を利用して書き換え
int main(){
    auto showValue = [](int a){
        std::cout << a << std::endl;
    };

    showValue(42);
}

/*
ラムダ式の戻り値の型が推論できない場合は引数リストの直後に「-> 型名」と明示する必要がある
ラムダ式の中から関数内部の変数を変更できるようにするには参照でキャプチャするかmutableを使えばいい
*/