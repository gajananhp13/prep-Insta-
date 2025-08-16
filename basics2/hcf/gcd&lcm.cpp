#include<iostream>
#include<algorithm>
using namespace std;

int hcf(int a, int b)
{

    int hcf=1;
    for(int i=1; i<=min(a,b); i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    return hcf;

}

int lcm (int a,int b)

{
    int max = (a > b) ? a : b;  // find the maximum of a and b
    int lcm;
    for (int i =max;i<=a*b;i+=max)
    {
        if (i % a == 0 && i % b == 0)
        {
             lcm=i;
             break; // return the first multiple of max that is divisible by both a and b
        }
  
    }
    return lcm;
}

// second method to find LCM using HCF
// int lcm(int a, int b)
// {
//     return (a*b)/hcf(a,b);
// }
int main()

{
    int a,b;
    cout<<"enter the two numbers: ";
    cin>>a>>b;
    cout<<"HCF of "<<a<<" and "<<b<<" is: "<<hcf(a,b)<<endl;
    cout<<"LCM of "<<a<<" and "<<b<<" is: "<<lcm(a,b)<<endl;
return 0;
}