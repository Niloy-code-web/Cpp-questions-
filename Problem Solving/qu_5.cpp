// Write a program to reverse a string
#include<iostream>
#include<string.h>
using namespace std;
void reverseText(char *str , int index , int n)
{
    // return if we reached at last index or at the end of the string 
    if (index == n)
    {
        return;
    }
    // storing each character starting from index 0 in function call stack; 
    char temp = str[index];
    // calling recursive function by increasing index every time 
    reverseText(str , index + 1, n);
    // printing each stored character while recurring back 
    cout << temp;
}
int main()
{
    char text[100]; // assuming the input string will not exceed 100 characters
    cout << "Enter a string: ";
    cin.getline(text, 100); // using getline to read the entire line including spaces
    int n = strlen(text); // getting the length of the string
   
    cout << "Reverse text : ";
    reverseText(text ,0, n );
    return 0;
}