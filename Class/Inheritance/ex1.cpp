//継承されるクラスを親クラス、継承するクラスを子クラスという
#include <string>

class Base{
public:
    virtual std::string name() const;
    virtual std::string most_name() const = 0;
};

std::string Base::name() const { return "Base";}

class Derived : public Base{
public:
    std::string name() const override{ return "Derived"; }
};

class MoreDerived : public Derived{
public:
    std::string name() const override{ return "MoreDerived"; }
};

class MostDerived : public Derived{
public:
    std::string most_name() const override { return "MostDerived"; }
};

//この状態でDrivedクラスのインスタンスを作成すると抽象クラス型 "Derived" のオブジェクトは使用できませんとでる

int main(){
    //Derived derived;
}