#include<iostream>
#include<vector>    
#include<bits/stdc++.h>
using namespace std;

int smallest(int n,vector<int> arr)
{ 
int min=INT_MAX;
for(int i=0;i<n;i++)

    cin>>arr[i];

for(int i =0;i<n;i++)
{
    if(arr[i]<min) min=arr[i];
}
return min;
}
int main()
{
    int n;
    vector<int> arr(n);
    cout<<"enter the size of array: ";
    cin>>n;
cout<<smallest(n,arr);

    return 0;
}