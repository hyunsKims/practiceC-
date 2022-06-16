class Point{
    private:
        int x_, y_;

    public:
        Point();
        Point(int x, int y){
            x_ = x;
            y_ = y;

        };
        inline int GetX() const{
            return x_;
        }
        inline int GetY() const{
            return y_;
        }
};
