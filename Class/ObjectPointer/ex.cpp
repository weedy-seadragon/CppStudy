//thisポインターは関数の仮引数とメンバ変数の名前が一致した場合に、それらを分別する際に使用する

class Hoge{
private:
    int value;
public:
    void SetValue(int value);
    int GetValue(){ return value; }
};

void Hoge::SetValue(int value){
    this->value = value;
}

/*
void Hoge::SetValue(int value){
    value = value;
}
これだとちゃんと値がsetされない
*/