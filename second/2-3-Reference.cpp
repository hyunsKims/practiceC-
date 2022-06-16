#include <iostream>

using namespace std;

int main(void)
{

    // 변수에 대한 참조자
    int num1 = 1000;
    int &num2 = num1;

    num2 = 3000;

    cout<< "VAL: "<<num1<<endl;
    cout<< "REF: "<<num2<<endl; // 동일한 3000이 나옴. 

    cout<< "VAL: "<<&num1<<endl;
    cout<< "REF: "<<&num2<<endl; // 동일 메모리 주소 참조

    cout<<endl;

    // 배열 요소에 대한 참조자 (배열 요소 또한 변수), 배열은 포인터로 구성, 정적으로 할당함
    int arr[3] = {1, 3, 5};
    int &ref1 = arr[0];
    int &ref2 = arr[1];
    int &ref3 = arr[2];

    cout<<ref1<<endl;
    cout<<ref2<<endl;
    cout<<ref3<<endl;

    cout<<endl;
    // 포인터에 대한 참조자
    int num = 12;
    int *ptr = &num;
    int **dptr = &ptr;

    int &ref = num;
    int *(&pref) = ptr;
    int **(&dpref) = dptr;

    cout<<ref<<endl;
    cout<<*pref<<endl;
    cout<<**dpref<<endl;
    return 0;
}