# include <iostream>
using namespace std;

int main () {
    int choice;
    double a,b;

    do {
        cout << "\n=== MENU===\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Answer = " << a + b << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Answer = " << a - b << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Answer = " << a * b << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            if (b != 0)
                cout << "Answer = " << a / b << endl;
            else
                cout << "Cannot divide by zero!\n";
            break;
        case 5:
            cout << "Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while ( choice != 5);
    return 0;                    

 }
    
