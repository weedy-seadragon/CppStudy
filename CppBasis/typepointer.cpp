#include <iostream>

void showValue(float f){
    std::cout << f << std::endl;
}

int main(){
    float i = 42.195f;//小数を保持したいのでfloatで宣言
    showValue(i);
}