/*Athor:Chenkun Li
E-mail；2622857898@qq.com
Time:Mar 19,20228*/

//阶乘
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
/*  int n,result=1;
   cout<<"请输入一个非负整数： ";
   cin>>n;
   for(int i=n;i>0;i--)
   {
       result*=i;

   }
   cout<<"该数的阶乘为： "<<result<<endl;
  */

  /*
  double n,result1=1,result=1;
  cout<<"请输入项数： ";
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=i;j++)
      {
          result1*=j;
      }
      result+=1/result1;
  }
  cout<<"e的估计值为： "<<result<<endl;
*/
double n,x,result=1,result1=1,result2=1;
cout<<"请输入x的值： ";
cin>>x;
cout<<"请输入项数： ";
cin>>n;
for(int i=1;i<=n;i++)
{

    for(int j=1;j<=i;j++)
    {
        result2=pow(x,i);
        result1*=i;

    }
    result+=result2/result1;
}
cout<<"e^x的估计值为： "<<result<<endl;














    return 0;
}
