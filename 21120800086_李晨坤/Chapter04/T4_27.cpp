/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 19,2022*/
//打印二进制数的十进制值
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   unsigned long i,n,sum=0,d;
   cout<<"请输入一个二进制数： ";
   cin>>n;
   for(i=0;n>0;++i)
   {
       d=d%10;
       sum=(d)*(pow(2,i))+sum;
       n=n/10;
   }
   cout<<"相应的十进制数为： "<<sum<<endl;
    return 0;
}
