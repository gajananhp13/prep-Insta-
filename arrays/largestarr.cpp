#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main() {
    int n;
    cout<<"enter the size of array";
    cin>>n;
    vector<int> arr(n);
     int max = INT_MIN;
    cout<<"enter the elements of array"<<endl;
    for(int i = 0; i < n; i++) {
   cin>>arr[i];
        if(arr[i] > max) {
            max = arr[i];
    
    
    }
    cout<<"The largest element in the array is: "<<max<<endl;
    return 0;
}