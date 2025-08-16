// //  (11011)2 = 1 * 24 + 1 * 23 + 0 * 22 + 1 * 21 + 2 * 20

// #include <iostream>
// #include<math.h> 
// #include<vector> 
// using namespace std;

// int btd(int n)
// {
//     int decimal=0,temp=n,i=0;
//     while(temp>0)
//     {
//         decimal=decimal+temp%10+pow(2,i);
//         i++;
//         temp/=10;
//     }
// return decimal;
// }

// int dectobin(int n)
// {
//    int temp=n;
//  long long binary=0,i=0;
//  while(temp>0)
//  {
//     int digit=temp%2;
//      binary+=digit*pow(10,i);
//     temp/=2;
//     i++;
//  }
//  return binary;
// }

// int octodec(int n)
// {
//     int decimal=0,temp=n;
//     int i=0;
//     while (temp>0)

//     {
//         decimal+=temp%10*pow(8,i);
//         i++;
//         temp/=10;  
//     }
//     return decimal;
// }

// int hextodecimal(string s)
// {
//     int len=s.size(),index=0;
//     int decimal=0;
//     for(int i=len-1;i>=0;i--) 
//     {
//         if(s[i]>='0' && s[i]<='9')
//         {
//             int digit=int(s[i])-48;
//             decimal+=digit*pow(16,index);
//             index++;
//         }
//         else if(s[i]>='A' && s[i]<='F')
//         {
//              int digit=int(s[i])-55;
//             decimal+=digit*pow(16,index);
//             index++;
//         }
//     }   
//  return decimal;

// }

// int main() {
//     // int n;
//     // cout<<"enter the number=>";
//     // cin>>n;

//     // cout << btd(n)<< endl;
// //   cout<< dectobin(n);
// //    cout<< octodec(n);
// string str;
// cout<<"enter th hexdecimal no.";
// cin>>str;
// cout<<hextodecimal(str);

//     return 0;
// }


#include<iostream>

#include<math.h>


using namespace std;

int convert(string num)
{
    int len = num.size();
    int dec = 0, index = 0;
    
    for(int i = len - 1; i >= 0; i--)
    {
        // Here we check if current array char is between (0-9)
        if (num[i] >= '0' && num[i] <= '9') 
        {
            // whenever current num[i] is in range '0' - '9' 
            // ascii int value can be fetched 
            // by subtracting 48 (Refer Ascii table) as ASCII val 0 : 48 
            int digit = int(num[i]) - 48; 
            dec += digit * pow(16, index); 
            index++; 
        } 

        // Here we check if current array char is between (A-F) 
        else if (num[i] >= 'A' && num[i] <= 'F') 
        { 
            // whenever current num[i] is in range 'A' - 'F' 
            // ascii int value can be fetched 
            // by subtracting 55 (Refer Ascii table) as 
            // ASCII val A : 65 and A must result 10 as value 
            int digit = int(num[i]) - 55; 
            dec += digit * pow(16, index); 
            index++; 
        } 
    } 
    return dec; 
} 

int main() 
{ 
    string num; 
    cin >> num;
 
    cout << (convert(num));
 
    return 0;
}
