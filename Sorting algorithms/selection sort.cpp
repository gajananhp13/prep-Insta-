// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout<<"enter the size of array ";
    cin>>n;
  vector<int> arr(n);
for(int i=0;i<n;i++)
    {cout<<"enter the" << i<<" element of array ";
        cin>>arr[i];
    }   


    for(int i=0;i<n;i++)
    {
        int min=i;
        
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp; // swap  for selection sort also use swap(arr[i], arr[min]);
        
        
    }
cout <<"this is the sorted array ";
for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
            }

    return 0;
}
