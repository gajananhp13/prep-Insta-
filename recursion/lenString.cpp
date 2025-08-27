#include<bits/stdc++.h>
using namespace std;


int strl(char* st)
{
    if (*st == '\0')
    return 0;
    return 1+strl(st+1);
}

int main()

{
   char s[]="hello   ";
   cout<<strl(s);

    return 0;
}

//  char str[12];
//     cin.getline(str,12,'$');   
    
//     for (char i : str){
// cout<<i;
//     }
// \0 every string is explicity ended wiht this | is a null string  
// char str ="fa" sring literal