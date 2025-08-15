#include<iostream>
using namespace std;

bool cabu(int n)
{
    int sum=0;
    for (int i= 1; i <n; i++)
    {
        if(n%i==0)
        sum+= i;
    }
    return sum>n;
}
int main()
{
int n;
cout<<"enter a number: ";
cin>>n;
if(cabu(n))
{cout<<"yes its abundant number";}
else {cout<<"not abundant number ";}
return 0;
}