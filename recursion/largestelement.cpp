#include <bits/stdc++.h>
using namespace std;

int largest(int n,vector <int> ans)
{
    if(n==1)
    return ans[0];

    return max(ans[n-1],largest(n-1,ans));
}


int main()
{
    int n;
    cout<<"enter the size of vector";
    cin>>n;
    vector<int> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
   cout<<arr[i]<<"  ";
}
cout<< "the largest via recursive approach is "<<largest(n,arr);
    return 0;
}