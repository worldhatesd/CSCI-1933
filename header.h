#include <iostream>
using namespace std;

void header()
{
    string name = "Deonte Palmer";
    string city = "Baton Rouge";
    string state = "Louisiana";
    string semester_year = "Fall 2021";
    string major = "Computer Science";
    string job = "a Software Developer";

    cout << "Hello," << endl << endl << "My name is " << name << ". I am from " << city << ", " << state << ". I enrolled at \nBRCC in " << semester_year << ". " << major << " is my major.\nI plan to work as " << job << " once I have completed my studies!";
}