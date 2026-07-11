#include <iostream>

class Hoge{
private:
    using syosu = double;
    syosu data;
public:
    syosu GetData();
    void SetData(syosu newData);
};

Hoge::syosu Hoge::GetData(){
    return data;
}

void Hoge::SetData(Hoge::syosu newData){
    data = newData;
}

int main(){
    Hoge hoge;
    hoge.SetData(22.6);
    std::cout << hoge.GetData() << std::endl;
}