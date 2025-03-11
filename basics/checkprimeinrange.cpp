#include<iostream>
using namespace std;

int main()
{
   int count = 0;
    int n = 17;
    
    // checking the number of divisors b/w 1 and the number n
    for(int i=2;i < n+1; i++) { if(n % i == 0) count += 1; } //if the number of divisors are > 2 then its not prime else its prime 
// 0 and 1 are not prime numbers 
if (n == 0 || n == 1) {
cout << "The given is number " << n <<" is not prime";} else if(count > 2)
    { cout<<"The given number " << n <<" is not prime";} 
else 
    {cout<<"The given number " << n <<" is prime";}
return 0;
 } 


// SECOND APPROACH
// #########################################################################################
// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int n)
    {
        int count=0;
        if(n<=1)
        return false;
        for(int i =2;i<=sqrt(n);i++)
        {
           if(n%i==0)
        return false ;
        }
       return true;
    }
    // this function checks that if the i encountered was prime then it will print that number which is prime  
    void print(int n)
    {int cont=0;
        for(int i=2;i<=n;i++)
        {
            if(isprime(i))
          {  cout<<i<<endl;
            cont++;}
        }
        cout<<"there are "<<cont<<" prime num in the range";
    }
    
    
int main() {
    cout << "enter the number:  ";
int n;
cin>>n;
cout<<bool(isprime(n));
print(n);
    return 0;
}
