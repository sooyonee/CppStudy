#ifndef POINT_H
#define POINT_H
 
class Point {
    private:
        int x, y;
    
    public:
        Point(int x = 0, int y = 0);
        int getX() const;
        int getY() const;
        void setX(int x);
        void setY(int y);
        void print() const;
        const Point operator+(const Point &rhs) const; // rhs passed by reference
        // member function is const : it cannot modify data members
        // return value is const
};
 
#endif