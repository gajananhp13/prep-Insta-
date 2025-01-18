
#include <iostream>
using namespace std;


//using recursion and normal function


void reverse(int n, int rev = 0) {
    if (n == 0) {
        std::cout << "Reversed: " << rev << std::endl;
    } else {
        int rem = n % 10;
        rev = rev * 10 + rem;
        reverse(n / 10, rev);
    }
}

 
// void reverse(int n) {
// 	int rev=0;
	
// 	while(n!=0)
// 	{
// 		int rem=n%10;
// 		rev=rev*10+rem;
// 		n/=10;
// 	}

// 	cout<<rev;
// }

int main()
{

	reverse(123);
	return 0;
}