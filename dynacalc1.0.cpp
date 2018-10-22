#include<iostream>
#include<string>

using namespace std;
void newCalc();
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

    if(userInput!= "+" && userInput!= "-" && userInput!= "*" && userInput!= "/")
        {
        cerr << "invalid input" <<endl;
	newCalc();
        }

    else
        {
        cout << num1 << userInput << num2 << " equals: " << result << endl;
	newCalc();
        }

    return 0;
    }
void newCalc()
{
    char newOption;
    cout << "Do you to make a new calculation? (y/n) " <<endl;
    cin >> newOption;
    if(newOption == 'y' || newOption == 'Y')
	main();
    else
	return;
}
