#include <iostream>
using namespace std;
int main() {
    int x,y;

    cout << "enter the coordinates";
cin>>x>>y;
if(x>0 && y>0)
cout<<"first quadrant";
if(x<0 && y>0)
cout<<"second quadrant";

if(x<0 && y<0)
cout<<"third quadrant";

if(x>0 && y<0)
cout<<"fourth quadrant";
if(x==0 && y!=0)
cout<<"Y axis";

if(y==0 && x!=0)
cout<<"X axis";
if(x==0 && y==0)
cout<<"Origin";

    return 0;
}