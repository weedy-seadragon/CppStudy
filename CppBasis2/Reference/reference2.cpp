int main(){
    const int i = 42;
    /*エラーを修正
    int& r = i;
    */
    const int& r = i;
}