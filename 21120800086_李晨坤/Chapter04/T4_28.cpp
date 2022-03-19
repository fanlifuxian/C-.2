/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 19,2022*/
//–«∫≈∆Â≈Ã ΩÕº∞∏
#include <iostream>

using namespace std;

int main()
{
   for(int i=1;i<=8;i++)
   {
     for(int j=1;j<=8;j++)
     {
         if(i%2!=0)
         {
            cout<<"*";
            cout<<' ';
         }
         else
         {
             cout<<' ';
             cout<<"*";
         }
     }
     cout<<endl;
   }
    return 0;
}
