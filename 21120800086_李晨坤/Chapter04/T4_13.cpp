/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 19,2022*/
//汽油哩数
#include <iostream>

using namespace std;

int main()
{
  double mile=0,gallon=0,MPG=0,t=0,sum1=0,sum2=0;
  while(mile!=-1)
  {
      cout<<"Enter the miles driven (-1 to quit): ";
      cin>>mile;
      if(mile!=-1)
      {
      cout<<"Enter gallons used: ";
      cin>>gallon;
      sum1+=mile;
      sum2+=gallon;
      MPG=mile/gallon;
      t=sum1/sum2;
      cout<<"MPG this trip: "<<MPG<<endl;
      cout<<"Total MPG is: "<<t<<endl;
      }
      cout<<endl;

  }
    return 0;
}
