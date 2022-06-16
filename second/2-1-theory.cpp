// #include <iostream>

// using namespace std;

// int main(void)
// {
//     const int i = 41;
//     i = 20;
//     i++;
//     cout<<i;    
//     return 0;
// }



#include <iostream>
int a = 100;
int b = 200;

int main()
{
    // 포인터 값 상수화
    const int* ptr = &a;
    ptr = &b;
    // *ptr = 200;
    std::cout<<*ptr<<std::endl;

    // 포인터 상수화
    int* const ptr2 = &b;
    // ptr2 = &a;
    *ptr2 = 100;
    std::cout<<*ptr2;
}




// #include <iostream>

// class Date
// {
// public:
//    Date( int mn, int dy, int yr );
//    int getMonth() const;     // A read-only function
//    void setMonth( int mn );   // A write function; can't be const
// private:
//    int month;
// };

// int Date::getMonth() const
// {
//    return month;        // Doesn't modify anything
// }

// void Date::setMonth( int mn )
// {
//    month = mn;          // Modifies data member
// }

// int main(void)
// {
//    Date MyDate( 7, 4, 1998 );
//    Date BirthDate( 1, 18, 1953 );
//    MyDate.setMonth( 4 );    // Okay
//    BirthDate.getMonth();    // Okay
//    BirthDate.setMonth( 4 ); // C2662 Error

//    return 0;
// }




