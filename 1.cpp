//Employee Hr Admin SalesManager Polymorphic behaviour

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;
struct Employee
{
    int id;
    char name[20];
    double salary;
    // default
    Employee()
    {
        this->id = 0;
        strcpy(this->name, "NotGiven");
        this->salary = 0;
    }
    // parameterised Constructor
    Employee(int id, const char *name, double salary)
    {
        this->id = id;
        strcpy(this->name, name);
        this->salary = salary;
    }

    // setters
    void setId(int id)
    {
        this->id = id;
    }
    void setName(const char *name)
    {
        strcpy(this->name, name);
    }
    void setSalary(double salary)
    {
        this->salary = salary;
    }

    // gettters
    int getId()
    {
        return this->id;
    }
    char *getName()
    {
        return this->name;
    }
    double getSalary()
    {
        return this->salary;
    }
    virtual double calculateSalary()
    {
        return this->salary;
    }
    virtual void display()
    {
        cout << "\nId          = " << this->id;
        cout << "\nName        = " << this->name;
        cout << "\nSalary      = " << this->salary;
    }
};
struct SalesManager : public Employee
{
    double Incentive;
    int target;

    // setter
    void setIncentive(double incentive)
    {
        this->Incentive = incentive;
    }
    void setTarget(int target)
    {
        this->target = target;
    }

    // getters
    double getIncentive()
    {
        return this->Incentive;
    }
    int getTarget()
    {
        return this->target;
    }

    // default
    SalesManager() : Employee()
    {
        this->Incentive = 0;
        this->target = 0;
    }
    // parameterised
    SalesManager(int id,const char *name, double salary, double incentive, int target) : Employee(id, name, salary)
    {
        this->Incentive = incentive;
        this->target = target;
    }
    double calculateSalary()
    {
        return this->Incentive + this->getSalary();
    }
    void display()
    {
        Employee::display();
        cout << "\nIncentive   = " << this->Incentive;
        cout << "\nTarget      = " << this->target;
    }
};
struct Admin : public Employee
{
    double allowance;

    void setAllowance(double allowance)
    {
        this->allowance = allowance;
    }

    double getAllowance()
    {
        return this->allowance;
    }

    Admin() : Employee()
    {
        this->allowance = 0;
    }
    Admin(int id,const char *name, double salary, double allowance) : Employee(id, name, salary)
    {
        this->allowance = allowance;
    }
    double calculateSalary()
    {
        return this->allowance + this->getSalary();
    }
    void display()
    {
        Employee::display();
        cout << "\nAllowance = " << this->allowance;
    }
};
struct HR : public Employee
{
    double commision;

    void setCommision(double commision)
    {
        this->commision = commision;
    }

    double getCommision()
    {
        return this->commision;
    }

    HR() : Employee()
    {
        this->commision = 0;
    }
    HR(int id,const char *name, double salary, double commision) : Employee(id, name, salary)
    {
        this->commision = commision;
    }
    double calculateSalary()
    {
        return this->commision + this->getSalary();
    }

    void display()
    {
        Employee::display();
        cout << "\nCommision   = " << this->commision;
    }
};

int main()
{
   Employee *emp;
//    Employee emp1(101,"Suraj",60000);
//    emp=&emp1;
//    emp->display();
//    cout<<"\nTotal Salary = "<<emp->calculateSalary();
//    cout<<"\n";

   Admin ad1(102,"Vaishali",45000,2500);
   emp=&ad1;                //Upcasting
   emp->display();
   cout<<"\nTotal Salary = "<<emp->calculateSalary();
   cout<<"\n";

   SalesManager sm1(103,"Kale",40000,1200,120);
   emp=&sm1;
   emp->display();
   cout<<"\nTotal Salary = "<<emp->calculateSalary();
   cout<<"\n";

   HR hr1(104,"Gomchale",43000,4000);
   emp=&hr1;
   emp->display();
   cout<<"\nTotal Salary = "<<emp->calculateSalary();

}