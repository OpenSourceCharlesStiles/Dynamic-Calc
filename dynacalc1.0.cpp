#include<iostream>
#include<string>

using namespace std;

float num1, num2, result;

string userInput;

int main()
{
    cout << "Please enter the first value and press enter: ";
    cin >> num1;
    cout << "Please enter a function (like +, /, etc) and press enter: ";
    cin >> userInput;
    cout << "please enter a second value and press enter: ";
    cin >> num2;

    if(userInput == "+")
        {
        result = num1 + num2;
        }
    if(userInput == "/")
        {
        result = num1 / num2;
        }
    if(userInput == "*")
        {
        result = num1 * num2;
        }

    if(userInput == "-")
        {
        result = num1 - num2;
        }

    cout << num1 << userInput << num2 << " equals: " << result << ".\n";

    if(userInput!= "+" && userInput!= "-" && userInput!= "*" && userInput!= "/")
        {
        cerr << "invalid input";
        }

    return 0;
    }
