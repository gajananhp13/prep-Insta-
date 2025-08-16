#include<iostream>
#include<vector>    
#include<bits/stdc++.h>
using namespace std;

void smallarge(int n,vector<int> arr)
{

int min=INT_MAX;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int i =0;i<n;i++)
{
    if(arr[i]<min)
{
min=arr[i];
}
}
int max=INT_MIN;
for(int i=0;i<n;i++)
{
    if(arr[i]>max) max=arr[i];
}

cout<<min<<" is smallest and -> is largest in array "<<max;
}
int main()
{
    int n;
    vector<int> arr(n);
    cout<<"enter the size of array: ";
    cin>>n;
smallarge(n,arr);

    return 0;
}


// __________________________________________________ method 2 using recursiosn
// #include<bits/stdc++.h>
// using namespace std;
// int min_element(int arr[], int n)
// {

//    if (n == 1)
//      return arr[0];

//    return min(arr[n-1], min_element(arr, n-1));
// }

// int max_element(int arr[], int n){

//    if(n==1)
//     return arr[0];

//    return max(arr[n-1], max_element(arr, n-1));
// }

// int main(){

//   int arr[] = {10, 67, 89, 78, 34, 2, 95};
//   int n = sizeof(arr)/sizeof(arr[0]);

//   cout<<min_element(arr, n)<<endl<<max_element(arr, n);
// } 