// Write a C++ program to append the string.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name,surname;

    cout<<"Enter your name : ";
    getline(cin,name);

    cout<<"Enter your Surname : ";
    getline(cin,surname);

   cout << "Concatination of strings is : "<<name.append(surname)<< endl;

return 0;
}

