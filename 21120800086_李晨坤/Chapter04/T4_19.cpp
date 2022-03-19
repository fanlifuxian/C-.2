/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 19,2022*/
//找最大的两个数
#include <iostream>

using namespace std;

int main()
{
  int counter=0,number[10],largest=0,largest1=0;
  while(counter<=9)//求最大值
  {
      cin>>number[counter];
      if(number[counter]>largest)
        largest=counter[number];
      ++counter;
  }

  counter=0;
  while(counter<=9)//求次大值
  {
     if(number[counter]!=largest)//去除最大值
    {
      if(number[counter]>largest1)
        largest1=number[counter];
    }
    ++counter;
  }
  cout<<largest<<" "<<largest1<<endl;
    return 0;
}
