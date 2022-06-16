// SimpleMain.cpp
#include "SimpleFunc.h"
#include <iostream>


// SimpleFunc.cpp
void BestComImpl::SimpleFunc(void)
{
    std::cout << "aaa 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
    std::cout << "bbb 정의한 함수" << std::endl;
}


int main(void)
{
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    std::cout << "hello" << std::endl;
    return 0;
}