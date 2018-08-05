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
    if(userInput == "+")
    {
        cout << "Please enter second value and press enter: ";
        cin >> num2;

         result = num1 + num2;

        cout << num1 << " plus " << num2 << " is equal to : " << result << ".\n";
    }
    else
    {
        if(userInput == "/")
            {
                cout << "please enter second value and press enter: ";
                cin >> num2;

                result = num1 / num2;

                cout << num1 << " divided by " << num2 << " is equal to : " << result << ".\n";
            }
        if(userInput == "*")
            {
                cout << "please enter second value and press enter: ";
                cin >> num2;

                result = num1 * num2;

                cout << num1 << " multiplied by " << num2 << " is equal to : " << result << ".\n";
            }


        if(userInput == "-")
        {
            cout << "please enter second value and press enter: ";
            cin >> num2;

            result = num1 - num2;

            cout << num1 << " minus " << num2 << " is equal to : " << result << ".\n";
            }
        }
    }
