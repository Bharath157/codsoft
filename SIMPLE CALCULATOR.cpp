#include <iostream>
using namespace std;

float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    if (y == 0) {
        cout << "Error: Division by zero is not allowed" << endl;
        return 0.0;
    } else {
        return x / y;
    }
}

int main() {
    char choice;
    float num1, num2, result;
    bool continue_calculation = true;
    
    cout << "WELCOME TO SIMPLE CALCULATOR\n" << endl;
    
    while (continue_calculation) {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        cout << "\nSelect operation:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;

        cout << endl << "Enter choice (1, 2, 3, or 4): ";
        cin >> choice;

        switch (choice) {
            case '1':
                result = add(num1, num2);
                cout << num1 << " + " << num2 << " = " << result << endl;
                break;
            case '2':
                result = subtract(num1, num2);
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;
            case '3':
                result = multiply(num1, num2);
                cout << num1 << " * " << num2 << " = " << result << endl;
                break;
            case '4':
                result = divide(num1, num2);
                cout << num1 << " / " << num2 << " = " << result << endl;
                break;
            default:
                cout << "Invalid input. Please enter a valid choice." << endl;
                break;
        }

        char continue_choice;
        cout << "\nDo you want to continue? (y/n): ";
        cin >> continue_choice;
        if (continue_choice != 'y' && continue_choice != 'Y')
            continue_calculation = false;
    }
	
    return 0;
}


