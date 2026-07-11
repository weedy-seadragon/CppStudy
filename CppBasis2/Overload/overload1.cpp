#include <iostream>

void showValue(int a){
    std::cout << a << std::endl;
}

int sum(int a, int b, int c){
    return a + b + c;
}

int sum(int a, int b){
    return a + b;
}

//引数4つのオーバーロード関数の追加
int sum(int a, int b, int c, int d){
    return a + b + c + d;
}

int main(){
    int x = sum(10, 20);
    showValue(x);

    int y = sum(5, 15, 25);
    showValue(y);

    int z = sum(100, 200, 300, 400);
    showValue(z);

}