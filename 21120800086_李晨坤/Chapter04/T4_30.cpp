/*Athor:Chenkun Li
E-mail；2622857898@qq.com
Time:Mar 19,2022*/
//计算圆的直径，周长和面积
#include <iostream>

using namespace std;

int main()
{

   double r,pi;
   pi=3.14159;
   cout<<"请输入圆的半径：";
   cin>>r;
   cout<<"圆的直径为： "<<2*r<<endl;
   cout<<"圆的周长为： "<<2*pi*r<<endl;
   cout<<"圆的面积为： "<<pi*r*r<<endl;
    return 0;
}
