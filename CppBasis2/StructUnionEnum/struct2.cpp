#include <iostream>

struct S{
    int x;
    int y;
};

union U{
    S s;
};

int main(){
    U u = {};
    u.s.x = 10;
    u.s.y = 20;

    std::cout << u.s.x << std::endl;
}

/*
実行結果
予想:10 Uのメンバ(ここではsだけ)が同じアドレスに存在するだけで、メンバのメンバ(s.xとs.y)が同じアドレスに存在するわけではないから
結果:10
*/