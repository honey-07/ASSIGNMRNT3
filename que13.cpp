//Write a C++ program to resize the string.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;

    cout<<"Enter your name : ";
    getline(cin,name);

    cout << "Original string is : "<< name <<endl;
        name.resize(3); 
    cout << "string after resize is : "<<name << endl;

return 0;
}
