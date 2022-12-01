#include<iostream>
using namespace std;

int main()
{

    int a,b;
    cin>>a>>b;
    char button;
    cout<<"press the operator";
    cin>>button;
    if (button='a')
    {
        cout<<(a+b);
    }
    else
    {
        cout<<(a-b);
    }


return 0;
}