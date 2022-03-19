/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 19,2022*/
//ÐÇºÅÕý·½ÐÎ
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
