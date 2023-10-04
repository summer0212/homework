#include<iostream>
#include<cstring>
using namespace std;

class employee
{
private:
float salary;
float hoursOfWork;
int *eptr;
int size;

public:
// employee(int n)
// {
//     this->eptr=new int[5];

// }


void getInfo()
{
    cout<<"enter the salary: ";
    cin>>this->salary;
    cout<<"enter working hours: ";
    cin>>this->hoursOfWork;
    // cout<<"enter the salary: ";
    // cin>>this->salary;
    // this->addSal();
    // this->finalSalary();

}

void addSal()
{
    if(this->salary<5000)
    {
        this->salary=this->salary+1000;
    }

}

void addWork()
{
    if(this->hoursOfWork>6)
    {
        this->salary=this->salary+500;
    }

}

void display()
{
    cout<<"The final salary: "<<this->salary<<endl;
    cout<<"extra bonus : "<<this->hoursOfWork<<endl;

}



};

int main()
{
    employee  arr_e[5];
    for(int i=0;i<5;i++)
    {
        arr_e[i].getInfo();
    } 

    for(int i=0;i<5;i++)
    {
        arr_e[i].addSal();
        arr_e[i].addWork();
    } 

    for(int i=0;i<5;i++)
    {
        arr_e[i].display();
    }

    // emp1.addSal();
    // emp1.finalSalary();
    return 0;


}