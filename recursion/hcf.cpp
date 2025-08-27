#include <bits/stdc++.h>
using namespace std;


int getHCF(int a, int b)
{
  return b == 0 ? a : getHCF(b, a % b);
}
int main()
{
int n,m;
cin>>n>>m;
cout<<getHCF(n,m);

return 0;
}