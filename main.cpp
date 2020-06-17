#include<iostream>
using namespace std;
int main()
{
    void swap(int,int);
    int a,b;
    a=7,b=4;
    cout<<"Original values: "<<endl;
    cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    swap(a,b);
    cout<<"The values after swap() are "<<endl;
    cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    return 0;
}
void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"swap values are: "<<endl;
    cout<<"a = "<<x<<" "<<"b = "<<y<<endl;
}