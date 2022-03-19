/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 19,2022*/
//找最大数
#include <iostream>

using namespace std;

int main()
{
    int counter=1,number,largest=0;
    while(counter<11)
    {
        cin>>number;
        if(largest<number)
            largest=number;
        ++counter;
    }
    cout<<"largest=: "<<largest<<endl;
    return 0;
}
