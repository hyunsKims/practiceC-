#include <iostream>

using namespace std;

bool isRight(int num)
{
    if (num <= 0)
        return false;
    else
        return true;
}

int main(void)
{
    bool isPos;
    int num;

    cout<<"Input Number :  ";
    cin>>num;

    isPos = isRight(num);
    cout<<sizeof(isPos)<<endl;
    
    if(isPos)
        cout<<"Pos Num"<<endl;
    else
        cout<<"Neg Num"<<endl;

    return 0;
}