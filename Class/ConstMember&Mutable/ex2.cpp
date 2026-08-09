class A{
    int v;

public:
    void set(int value);
    int& get();
    const int& get()const;
};

void A::set(int value){
    v = value;
}

int& A::get(){
    return v;
}

const int& A::get()const{
    return v;
}

int main(){
    A a;
    a.set(42);

    const A& ca = a;
    ca.get();
}

/*
mutableで宣言されたメンバ変数は、constメンバ関数の中でも書き換えが許可される。
これは「外から見た振る舞い（戻り値など）を変えない範囲で、内部的な実装の都合上
書き換えたいデータ（キャッシュ、カウンタなど）」を扱うために使われる。(キャッシュなど)場合に役立つ。
*/