#include <iostream>
using namespace std;
float PI = 3.147;
struct Shape
{
    float area;
    Shape()
    {
        this->area=0;
    }
    Shape(float area)
    {
        this->area=area;
    }
    virtual float calculateArea()
    {
        return this->area;
    }
    virtual void display()
    {
        cout<<"\nArea = "<<area;
    }
};
struct circle : public Shape
{
    float r;

    void setRadius(float r)
    {
        this->r = r;
    }
    float getRadius()
    {
        return this->r;
    }
    circle()
    {
        this->r = 0;
    }
    circle(float r)
    {
        this->r = r;
    }
    void display()
    {
        cout << "\nradius  = " << this->r;
    }
    float calculateArea()
    {
        return this->area = PI * this->r * this->r;
    }
};
struct tringle : public Shape
{
    float b, h;

    void setBredth(float b)
    {
        this->b = b;
    }
    void setHeight(float h)
    {
        this->h = h;
    }
    float getBredth()
    {
        return this->b;
    }
    float getHeigth()
    {
        return this->h;
    }

    tringle()
    {
        this->b = 0;
        this->h = 0;
    }
    tringle(float b, float h)
    {
        this->b = b;
        this->h = h;
    }
    void display()
    {
        cout << "\nBredth  = " << this->b;
        cout << "\nHeigth  = " << this->h;
    }
    float calculateArea()
    {
        return this->b * this->h;
    }
};
struct rectangle : public Shape
{
    float l, w;
    rectangle()
    {
        this->l = 0;
        this->w = 0;
    }
    rectangle(float l, float w)
    {
        this->l = l;
        this->w = w;
    }
    void setLength(float l)
    {
        this->l = l;
    }
    void setWidth(float w)
    {
        this->w = w;
    }
    float getLength()
    {
        return this->l;
    }
    float getWidth()
    {
        return this->w;
    }

    void display()
    {
        cout << "\nLenth  = " << l;
        cout << "\nWidth  = " << w;
    }
    float calculateArea()
    {
        area = 2 * l * w;
        return area;
    }
};
int main()
{
    Shape *sh;
    circle c1(56);
    sh=&c1;
    sh->display();
    cout<<"\nArea = "<<sh->calculateArea();
    
    rectangle r1(10, 20);
    sh=&r1;
    cout<<"\n";
    sh->display();
    cout<<"\nArea = "<<sh->calculateArea();

    tringle t1(30, 40);
    sh=&t1;
    cout<<"\n";
    sh->display();
    cout<<"\nArea = "<<sh->calculateArea();

}