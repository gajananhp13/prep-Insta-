#include <iostream>
#include<math.h>

using namespace std;

int lcm(int a,int b)
{
    int lcm;
  
    int g=max(a,b);
    int s=min(a,b);
    for( int i=g;i<=a*b;i+=g)
    {

        if(i%s==0)
      {  lcm=i;
        break;}
    }

    return lcm;
}
int main() {

    int n1,n2,d1,d2;
    cout<<"enter numerator then denominators";
    cin>>n1>>n2>>d1>>d2;
int sumnum=(n1*d2+n2*d1);
int sum_den=lcm(d1,d2);
cout<<sumnum<<" / "<<sum_den;
    return 0;
}