#include <iostream>
using namespace std;

void dectohex(int n)
{
    char str[100];
    int temp = n;
    int i = 0;
    
    // Handle case when input is 0
    if (n == 0) {
        cout << "0";
        return;
    }
    
    // Convert decimal to hex
    while (temp > 0)
    {
        int digit = temp % 16;
        if (digit >= 0 && digit <= 9)
            str[i] = digit + '0';
        else
            str[i] = (digit - 10) + 65;  // Convert 10-15 to A-F
        i++;
        temp /= 16;
    }
    str[i] = '\0';  // Null terminate the string
    
    // Print in reverse order
    for (int j = i - 1; j >= 0; j--)
    {
        cout << str[j];
    }
}

int main() {
    int n;
    cout << "Enter the decimal number: ";
    cin >> n;
    dectohex(n);
    return 0;
}