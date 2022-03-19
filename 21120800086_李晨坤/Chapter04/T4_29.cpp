/*Athor:Chenkun Li
E-mail；2622857898@qq.com
Time:Mar 19,2022*/
//无限循环2的倍数
#include <iostream>
using namespace std;

int main()
{
    int result=1;
    while(true)
    {
        result=result*2;
        cout<<result<<endl;
    }
    return 0;
}
//可以发现，当result的值超出int所能表示的范围时，程序将无限的输出0
