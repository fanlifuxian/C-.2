/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 19,2022*/
//��ӡ����������ʮ����ֵ
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   unsigned long i,n,sum=0,d;
   cout<<"������һ������������ ";
   cin>>n;
   for(i=0;n>0;++i)
   {
       d=d%10;
       sum=(d)*(pow(2,i))+sum;
       n=n/10;
   }
   cout<<"��Ӧ��ʮ������Ϊ�� "<<sum<<endl;
    return 0;
}
