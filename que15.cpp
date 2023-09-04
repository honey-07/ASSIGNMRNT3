//Write a C++ Program to count the number of words and characters in a sentence.
#include<iostream>
#include<string>
using namespace std;
int main()
{
        string sentence;
        int word=0,character=0;

        cout << "Enter string : ";
        getline(cin, sentence);
                
            for(char c : sentence)
                {
                    if(c==' ')
                    {
                        word++;
                    }
                    else
                    {
                        character++;
                    }
                }
             word++;
        cout << "TOTAL WORDS : " << word << endl;
        cout << "TOTAL CHARACTERS : " << character << endl;
return 0;
}
