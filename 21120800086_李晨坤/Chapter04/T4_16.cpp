/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 19,2022*/
//Ð½½ð¼ÆËãÆ÷
#include <iostream>

using namespace std;

int main()
{
   int x=0,y,z,sum=0;

   while(x!=-1)
   {
       cout<<"Enter hours worked(-1 to end): ";
       cin>>x;
       if(x==-1)
        break;
       cout<<"Enter hourly rate of the employee($00.00): ";
       cin>>y;
       if(x<=40)
       {
           z=x*y;
           cout<<"Salary is $: "<<z<<endl;
       }
       else
       {
          z=40*y+60*(x-40);
          cout<<"Salary is($00.00): "<<z<<endl;
       }
       cout<<endl;
       sum+=z;
   }
   cout<<endl;
   cout<<"Total salary is $: "<<sum<<endl;
    return 0;
}
