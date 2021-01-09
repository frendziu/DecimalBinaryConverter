#include <iostream>

using namespace std;

int convertDecimalToBinary(int n)
{
    int result = 0;
    int remainder = 0;
    int i = 1;
    while (n != 0)
    {
        remainder = n % 2;
        n /= 2;
        result += remainder * i;
        i *= 10;
    }
    return result;
}

int convertBinaryToDecimal(int n)
{
    int result = 0;
    int remainder = 0;
    int i = 0;
    while (n != 0)
    {
        remainder = n%10;
        n /= 10;
        result += remainder*pow(2, i);
        ++i;
    }

    return result;
}

int main()
{
    bool isContinue = true;

    while (isContinue)
    {
        cout << "Binary - Decimal Converter" << endl;
        cout << "1 - Convert decimal to binary" <<endl;
        cout << "2 - Convert binary to decimal" <<endl;
        cout << "0 - Exit " << endl;

        int result = 0;
        int number = 0;
        int choice = 0;
        cout << "Choose option" << endl;
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Enter decimal number" << endl;
                cin >> number;
                result = convertDecimalToBinary(number);
                cout << "Decimal number " << number << " binary is " << result << endl;                                
                break;
            case 2:
                cout << "Enter binary number" << endl;
                cin >> number;
                result = convertBinaryToDecimal(number);
                cout << "Binary number " << number << " decimal is " << result << endl;
                break;
            case 0:
                cout << "Exit" << endl;
                isContinue = false;
                break;
            default:
                cout << "Wrong option" << endl;
                break;
        }

       

    }

    system("pause");
    return 0;
}
