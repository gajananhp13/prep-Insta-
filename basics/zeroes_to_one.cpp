
// method 2 
#include <iostream>
#include<string>
using namespace std;

int main()
{
int n;
cin>>n;

string str=to_string(n);
for(int i=0;i<str.length();i++)
{
    if(str[i]=='0')
   { str[i]='1';
}
}
for(int i=0;i<str.length();i++)
{
   cout<<str[i];
}



    return 0;
}