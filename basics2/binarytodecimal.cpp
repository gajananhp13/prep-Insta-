//  (11011)2 = 1 * 24 + 1 * 23 + 0 * 22 + 1 * 21 + 2 * 20

#include <iostream>
#include<cmath> 
#include<vector> 
using namespace std;

int btd(int n)
{
    int decimal=0,temp=n,i=0;
    while(temp>0)
    {
        decimal=decimal+temp%10+pow(2,i);
        i++;
        temp/=10;
    }
return decimal;
}

int dectobin(int n)
{
   int temp=n;
 long long binary=0,i=0;
 while(temp>0)
 {
    int digit=temp%2;
     binary+=digit*pow(10,i);
    temp/=2;
    i++;
 }
 return binary;
}

int octodec(int n)
{
    int decimal=0,temp=n;
    int i=0;
    while (temp>0)

    {
        decimal+=temp%10*pow(8,i);
        i++;
        temp/=10;  
    }
    return decimal;
}


int main() {
    int n;
    cout<<"enter the number=>";
    cin>>n;

    // cout << btd(n)<< endl;
//   cout<< dectobin(n);
//    cout<< octodec(n);
    return 0;
}