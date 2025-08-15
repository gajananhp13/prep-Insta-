#include<iostream>
using namespace std;    
int sumOfFactors(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n, m;
    cout << "Enter two numbers: ";
    cin >> n >> m;
    
    int sum1 = sumOfFactors(n);
    int sum2 = sumOfFactors(m);
    
    if(sum1/n == sum2/m){
        cout << n << " and " << m << " are friendly pairs";
    } else {
        cout << n << " and " << m << " are not friendly pairs";
    }

    return 0;
}