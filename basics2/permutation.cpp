#include<iostream>
using namespace std;

int fact(int n)
{
int fact=1;
    for(int i=n ; i>=1 ;i--)
       { fact*=i;}
    return fact;
}

int permutation(int n,int r)
{int p=fact(n)/fact(n-r);
    return  p ;
}
int main()
{
    int n,r;
    cout<<"enter the total and no of arrangements possible";
    cin>>n>>r ;

    cout<<"the total perumtations are "<<permutation(n,r);



    return 0;
}