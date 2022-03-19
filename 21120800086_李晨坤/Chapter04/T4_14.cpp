/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 19,2022*/
//信用额度问题
#include <iostream>

using namespace std;

int main()
{
   double account=0,a=0,limit=0,b=0,c=0,sum=0;
   while(account!=-1)
   {
       cout<<"Enter account number(or -1 to quit): ";
       cin>>account;
       cout<<"Enter beginning balance: ";
       cin>>a;
       cout<<"Enter total charges: ";
       cin>>b;
       cout<<"Enter total credits: ";
       cin>>c;
       cout<<"Enter credit limit: ";
       cin>>limit;
       sum=a+b-c;
       cout<<"New balance is "<<sum<<endl;
       if(sum>=limit)
       {
           cout<<"Account :     "<<account<<endl;
           cout<<"Credit limit: "<<limit<<endl;
           cout<<"Balance:      "<<sum<<endl;
           cout<<"Credit Limit Exceeded."<<endl;
       }
       cout<<endl;
   }
    return 0;
}
