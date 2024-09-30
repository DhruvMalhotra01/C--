#include<iostream>
using namespace std;
class Shape
{
    protected:
        int width;
        int height;
    public:
        virtual int getArea()=0;
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
};
class Rectangle:public Shape//derived
{
    public:
    int getArea()
    {
        return(width*height);
    }
};
class Triangle:public Shape//derived
{
    public:
    int getArea()
    {    
        return(width*height)/2;
    }
};
int main()
{
    Rectangle Rect;
    Triangle Tri;
    Rect.setWidth(5);
    Rect.setHeight(7);
    cout<<"Total rectangle area:"<<Rect.getArea()<<endl;
    Tri.setWidth(5);
    Tri.setHeight(7);
    cout<<"Total Triangle area:"<<Tri.getArea()<<endl;
    return 0;

}