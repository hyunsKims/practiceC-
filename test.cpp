#include <iostream>

using namespace std;

// // constant_member_function.cpp
// class Date
// {
// public:
//    Date();
//    Date( int mn, int dy, int yr ){};
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
// int main()
// {
//    Date testDate();
//    Date MyDate( 7, 4, 1998 );
//    const Date BirthDate( 3, 18, 1953 );
//    MyDate.setMonth( 4 );    // Okay
//    cout<<BirthDate.getMonth();    // Okay
// //    BirthDate.setMonth( 4 ); // C2662 Error
// }


class Point{
   public:
        Point();
        Point(int x, int y){};
        void SetX( int x );
        int GetX() const;
        int GetY() const;

      //   inline int GetX() const{
      //       return x_;
      //   }
      //   inline int GetY() const{
      //       return y_;
      //   }

   private:
        int now_x;
        int now_y;

}; 

int Point::GetX() const
{
   return now_x;
}

int Point::GetY() const
{
   return now_y;
}

void Point::SetX( int x ){
   now_x = x;
}

int main(void)
{
    Point pt1(5, 3);
    pt1.SetX(7);
    std::cout<<pt1.GetX()<<std::endl;
    return 0;
}