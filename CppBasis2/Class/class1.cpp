#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

class product{
    int id;
    int price;
    int stock;

public:
    int GetId();//idのゲッター
    void SetId(int newId);//idのセッター

    int GetPrice();//priceのゲッター
    bool isValidPrice(int newPrice);
    void SetPrice(int newPrice);//priceのセッター

    int GetStock();//stockのゲッター
    bool isValidStock(int newStock);
    void SetStock(int newStock);//stockのセッター

    void SetAllData(int newId, int newPrice, int newStock);

};

int product::GetId(){
    return id;
}

void product::SetId(int newId){
    id = newId;
}

int product::GetPrice(){
    return price;
}

bool product::isValidPrice(int newPrice){
    return (0 <= newPrice);
}

void product::SetPrice(int newPrice){
    if(!isValidPrice(newPrice)){
        std::cout << "エラー:単価は0以上にしてください" << std::endl;
        return;
    }
    price = newPrice;
}

int product::GetStock(){
    return stock;
}

bool product::isValidStock(int newStock){
    return (0 <= newStock);
}

void product::SetStock(int newStock){
    if(!isValidStock(newStock)){
        std::cout << "エラー:在庫数は0以上にしてください" << std::endl;
        return;
    }
    stock = newStock;
}

void product::SetAllData(int newId, int newPrice, int newStock){
    if(!isValidPrice(newPrice) && !isValidStock(newStock)){
        std::cout << "エラー:単価と在庫数は0以上にしてください" << std::endl;
        return;
    }else if(!isValidPrice(newPrice)){
        std::cout << "エラー:単価は0以上にしてください" << std::endl;
        return;
    }else if(!isValidStock(newStock)){
        std::cout << "エラー:在庫数は0以上にしてください" << std::endl;
        return;
    }else{
        id = newId;
        price = newPrice;
        stock = newStock;
    }
}



int main() {
#ifdef _WIN32
	//コンソール出力をUTF-8として扱う（文字化け対策）
	SetConsoleOutputCP(CP_UTF8);
#endif
    //インスタンスを生成
    product pen;

    //非公開のメンバ変数をセッターで初期化
    /*ここを変更
    pen.SetId(0);
    pen.SetPrice(100);
    pen.SetStock(200);    
    */

    pen.SetAllData(0, 100, 200);

    product* ptr = &pen;

    //ゲッターから値を取得
    std::cout << "商品ID：" << ptr->GetId() << std::endl;
    std::cout << "単価：" << ptr->GetPrice() << std::endl;
    std::cout << "在庫数：" << ptr->GetStock() << std::endl;
}