#include <iostream>

void swap(int *a, int *b);  // 함수 선언
void swap(int *a);

void swap(int *a, int *b) 
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swap(int *a)
{
    int tmp = *a;
    std::cout<<*a<<std::endl;
}

int main(void)
{
    int num1=20, num2=30;

    swap(&num1, &num2);  // 함수 오버로딩
    swap(&num1);
    std::cout<<num1<<" "<<num2<<std::endl;
    
    return 0;
}
