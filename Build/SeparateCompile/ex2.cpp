#include "ex2.h"

int count = 0;

void AddCount(){
    count++;
}


int main(){
    AddCount();
    std::cout << count << std::endl;
    AddCount();
    std::cout << count << std::endl;
}