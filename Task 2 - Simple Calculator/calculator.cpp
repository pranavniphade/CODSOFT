#include <iostream>
using namespace std;

int main()
{
    double num1, num2, result;
    int operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    do
    {
        cout << "\n Enter 1 for Addition \n Enter 2 for Subtraction \n Enter 3 for Multiplication \n Enter 4 for Division \n Enter 5 for Exit" << endl;
        cout << "Choose an operation (1: +, 2: -, 3: *, 4: /, 5: Exit): ";
        cin >> operation;

        switch (operation)
        {
        case 1:
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
            else
            {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        case 5:
            exit(0);
        default:
            cout << "Error: Invalid operation." << endl;
        }

    } while (true);
    return 0;
}
