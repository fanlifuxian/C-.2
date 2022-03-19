/*Athor:Chenkun Li
E-mail；2622857898@qq.com
Time:Mar 19,2022*/
//三角形的边
#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    while(a<=0||b<=0||c<=0)
    {
      cin>>a>>b>>c;
    }
    if((a+b>c)&&(a+c>b)&&(b+c>a))
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;

    return 0;
}
