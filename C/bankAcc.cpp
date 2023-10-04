#include<iostream>
#include<cstring>
using namespace std;

class bankAccount
{
 private:
 
 string holder;
 string accType;
 static int count;
 int accNUmber;
 int *accPtr;
 public:
 bankAccount(int index)
 {
    this->accPtr=new int[index];
 }


 void getAccDetail()
 {
      
    for(int k=0;k<=this->accNUmber;k++)
    {
    cout<<"enter the name of the holder: ";
    cin>>this->holder;
    cout<<"enter the type of the holder: ";
    cin>>this->accType;
    
    count++;
    accNUmber=count;
    cout<<"Account number generated is: "<< accNUmber<<endl;
    }
    this->accNUmber++;

    
 }
};

int bankAccount :: count=100;

class currentAccount : public bankAccount
{
    private:
    float balance=1000;

    public:
    void display()
    {
        cout<<"the final account balance: "<<this->balance;

    }

    void deposit()
    {
        double deposit=0;
        cout<<"Enter the amount you to deposit : "<<endl;
        cin>>deposit;
        this->balance=this->balance+deposit;
    }

    void withdraw()
    {
        double withdraw=0;
        cout<<"Enter the amount you to be withdrawn  : "<<endl;
        cin>>withdraw;
        this->balance=this->balance-withdraw;

    }

};

class savingAccount : public bankAccount
{
    private:
    float balance=0;

    public:
    void display()
    {
        cout<<"the final account balance: "<<this->balance;

    }

    void deposit()
    {
        double deposit=0;
        cout<<"Enter the amount you to deposit : "<<endl;
        cin>>deposit;
        this->balance=this->balance+deposit;
    }

    void withdraw()
    {
        double withdraw=0;
        cout<<"Enter the amount you to be withdrawn  : "<<endl;
        cin>>withdraw;
        this->balance=this->balance-withdraw;

    }

};




int main()
{
    bankAccount obj(100);
    currentAccount c1;
    savingAccount s1;
    cout<<"1.add account"<<endl;
    cout<<"2.deposit"<<endl;
    cout<<"3.withdrawal"<<endl;
    cout<<"4. display final balance"<<endl;
    cout<<"5.exit"<<endl;
    int choice;
    while(1)
    {
        switch(choice)
        {
            case 1:
            c1.getAccDetail();
            break;

            case 2:
            c1.deposit();
            break;

            case 3:
            c1.withdraw();
            break;

            case 4:
            c1.display();
            break;

        }
    }
    






//     bankAccount person;
//     person.getAccDetail();
    
   
   
   
    
    // s1.getAccDetail();
    // s1.deposit();
    // s1.withdraw();
    // s1.display();
    
return 0;
}