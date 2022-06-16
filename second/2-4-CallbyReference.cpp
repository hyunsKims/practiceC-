#include <iostream>

using namespace std;
int swapValue(int a, int b);
int swapRef(int * pt1, int * pt2);
int swapRef_Ref(int &ref1, int &ref2);

int swapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}


int swapRef_ptr(int * pt1, int * pt2)
{
    int temp = *pt1;
    *pt1 = *pt2;
    *pt2 = temp;
}


int swapRef_Ref(int &ref1, int &ref2)
{
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}
 

int main(void)
{
    int a = 1;
    int b = 2;

    // Call by Value
    swapValue(a, b);
    cout<<"SwapValue"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;

    cout<<endl;

    // Call by Reference
    swapRef_ptr(&a, &b);
    cout<<"SwapPtr"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;

    cout<<endl;

    swapRef_Ref(a, b);
    cout<<"SwapRef"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}