//staticメンバーは特定のインスタンスに紐づかない、全てのインスタンスで共有されるようなメンバー
#include <iostream>

class hoge{
private:
    inline static int count = 0;
public:
    hoge();
    int GetCount(){ return count;}
};

hoge::hoge(){
    count++;
}

int main(){
    hoge hoge1;
    hoge hoge2;
    hoge hoge3;
    std::cout << hoge1.GetCount() << std::endl;
    std::cout << hoge2.GetCount() << std::endl;
    std::cout << hoge3.GetCount() << std::endl;//全部3になる
}