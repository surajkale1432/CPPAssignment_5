// artist painter musician

#include <iostream>
#include <string.h>
using namespace std;

class artist
{
protected:
    const char *name;
    int age;
    const char *gender;

public:
    // Default constructor suru
    artist()
    {
        // strcpy(this->name, "NotGiven");
        this->name="NotGiven";
        this->age = 0;
        // strcpy(this->gender, "NotDefine");
        this->gender="NotDefine";
    }
    // Parameterised constructor suru
    artist(const char *name, int age,const  char *gender)
    {
        // strcpy(this->name, name);
        this->name=name;
        this->age = age;
        // strcpy(this->gender, gender);
        this->gender=gender;
    }
    // setters
    void setName(const char *name)
    {
        // strcpy(this->name, name);
        this->name=name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setGender(const char *gender)
    {
        // strcpy(this->gender, gender);
        this->gender=gender;
    }
    // getters
    const char *getName()
    {
        return this->name;
    }
    int getAge()
    {
        return this->age;
    }
    const char *getGender()
    {
        return this->gender;
    }

    // Display
    void display()
    {
        cout << "\nName   = " << this->name;
        cout << "\nAge    = " << this->age;
        cout << "\nGender = " << this->gender;
    }
};
class Painter : public artist
{
protected:
    int noOfBrush;
    char paintingType[20];

public:
    Painter() : artist()
    {
        this->noOfBrush = 0;
        strcpy(this->paintingType, "NotSpecified");
        // this->paintingType=
    }
    Painter(const char *name, int age,const  char *gender, int noOfBrush, const char *paintingType) : artist(name, age, gender)
    {
        this->noOfBrush = noOfBrush;
        strcpy(this->paintingType, paintingType);
        // this->paintingType=paintingType;
    }
    void setBrush(int noOfBrush)
    {
        this->noOfBrush = noOfBrush;
    }
    void setPaintingType(const char *paintingType)
    {
        strcpy(this->paintingType, paintingType);
        // this->paintingType=paintingType;
    }
    int getBrush()
    {
        return this->noOfBrush;
    }
    char *getPaintingType()
    {
        return this->paintingType;
    }

    void display()
    {
        artist::display();
        cout << "\nNoOfBrush    = " << this->noOfBrush;
        cout << "\nPaintingType = " << this->paintingType;
    }
};
int main()
{
    artist a1;
    const char name[10] = "Vivek";
    const char gender[10] = "Male";
    const char name1[10] = "Shubham";
    const char paintingType[20] = "OilPainting";
    Painter p1(name, 81, gender, 5, paintingType);

    p1.display();
}