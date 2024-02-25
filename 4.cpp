//mouse heirarchy

#include<iostream>
#include<string.h>
using namespace std;

class mouse
{
    protected:
    int productId;
    public:
    mouse()
    {
        this->productId=0;
    }
    mouse(int id)
    {
        this->productId=id;
    }
    void setProductId(int id)
    {
        this->productId=id;
    }
    int getProductId()
    {
        return this->productId;
    }
    virtual void display()
    {
        cout<<"\nProductId = "<<this->productId;
    }
    
};
class opticalMouse:public mouse
{
    protected:
    const char *sensorType;
    public:
    opticalMouse():mouse()
    {
        // strcpy(this->sensorType,"NotGiven");
        this->sensorType="NotGiven";
    }
    opticalMouse(int id,const char* sensorType):mouse(id)
    {
        // strcpy(this->sensorType,sensorType);
        this->sensorType=sensorType;
    }
    void setSensorType(const char* sensorType)
    {
        // strcpy(this->sensorType,sensorType);
        this->sensorType=sensorType;
    }
    const char* getSensorType()
    {
        return sensorType;
    }
    void display()
    {
        mouse::display();
        cout<<"\nSensorType = "<<this->sensorType;
    }
};
class ballMouse:public mouse
{
    protected:
    const char *ballType;

    public:
    ballMouse():mouse()
    {
        // strcpy(this->ballType,"NotGiven");
        this->ballType="NotGiven";
    }
    ballMouse(int id,const char* ballType):mouse(id)
    {
        // strcpy(this->ballType,ballType);
        this->ballType=ballType;
    }
    void setBallType(const char* ballType)
    {
        // strcpy(this->ballType,ballType);
        this->ballType=ballType;
    }
    const char* getBallType()
    {
        return this->ballType;
    }
    void display()
    {
        mouse::display();
        cout<<"\nBallType = "<<this->ballType;
    }

};
int main()
{
    const char *sensor="Laser";
    const char* ballType="Rubber";
    mouse *mouse;
    opticalMouse op1(101,sensor);
    // op1.setProductId(101);
    // op1.setSensorType(sensor);
    mouse=&op1;
    mouse->display();

    ballMouse b1(102,ballType);
    cout<<"\n";
    mouse=&b1;
    mouse->display();

    return 0;
}