#include <iostream>

using namespace std;



// 참조형 반환의 경우, 참조자가 반환된다.
// int& RefRetFuncOne(int &ref)
// {
//     ref++;
//     return ref;
// }


// int형 반환의 경우, 참조자 반환 때, 값이 반환된다.
int RefRetFuncOne(int &ref)
{
    ref++;
    return ref;
}

int main(void)
{
    int num1 = 1;
    int num2 = RefRetFuncOne(num1); // 참조자를 반환 후, num2가 일반변수이므로 '값'이 반환된다.
    // int &num2 = RefRetFuncOne(num1); // 참조자를 반환 후, num2가 참조자이므로 '관계'가 하나 더 형성된다.

    num1++;
    num2 += 100;
    cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2<<endl;

    return 0;
}