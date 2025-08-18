#include <iostream>
using namespace std;
// Therefore the total number of handshake   =   ( N – 1 + N – 2 +….+ 1 + 0 )   =   ( (N-1) * N ) / 2.




int main() {
int n;
cout<<"enter the number of people";
cin>>n;

    cout << "total handshake!" <<(n*(n-1))/2;
    return 0;
}