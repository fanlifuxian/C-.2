/*Athor:Chenkun Li
E-mail��2622857898@qq.com
Time:Mar 19,2022*/
//ֱ�������εı�
#include <iostream>

using namespace std;

int main()
{
  double a,b,c;
  cout<<"�������������� ";
  cin>>a>>b>>c;
  if((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==a*a+b*b))
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;

    return 0;
}
