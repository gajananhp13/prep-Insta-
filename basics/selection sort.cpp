// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int arr[6]={4,3,7,1,2,8};
    for(int i=0;i<5;i++)
    {
        int min=i;
        
        for(int j=i+1;j<6;j++)
        {
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        
        
    }

for(int i=0;i<6;i++)
        {
            cout<<arr[i]<<" ";
            }

    return 0;
}
