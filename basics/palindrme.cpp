#include <iostream>
using namespace std;

bool


// bool palindrome(int n)
// {
//     int temp=n;
//     int rev=0;
//     while(temp!=0)
//     {
//         rev=rev*10+temp%10;
//         temp/=10;
//     }
//         return n==rev;
// }


int main()
{
cout<<"enter the number"<<endl;
int n;
cin>>n;

if (palindrome(n))
{
    cout<< "yes it plaindremo";
}
else{
    cout<<"not palindorme";
}

    return 0;
}