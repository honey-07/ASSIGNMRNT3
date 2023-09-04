/* Write a C++ Program to perform following-
 • compare two strings
 • concate two strings
 • copy the string 
 */

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1,str2;
    char str3[100];

    cout<<"Enter string 1 : ";
    getline(cin,str1);

    cout<<"Enter string 2 : ";
    getline(cin,str2);

    if(str1==str2)
    {
        cout<<"Both the strings are equal."<<endl;
    }
    else
    {
        cout<<"Both the strings are not equal."<<endl;
    }

    cout << "CONCATINATION OF TWO STRINGS : "<< str1.append(str2)<<endl;

    str1.copy(str3, 3, 1);
    
    cout << "COPYING STRING 1 IN STRING 3 : STRING 3 IS = " << str3  << endl;
    
return 0;
}
