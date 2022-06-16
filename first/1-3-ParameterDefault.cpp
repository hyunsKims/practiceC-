#include <iostream>
int Adder(int num1 = 1, int num2 = 2);  // declaration of function

int main(void)
{
    std::cout<<Adder()<<std::endl;  // default Parameter
    std::cout<<Adder(5)<<std::endl; // Start in left
    std::cout<<Adder(5, 7)<<std::endl;
    return 0;
}

int Adder(int num1, int num2)
{
    return num1 + num2;
}