#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int main () {
    int n;
    cout << "Enter number of passwords: ";
    cin >> n;

    string password;
    string longestPassword;

    int strongCount = 0;
    int longestLength =0;
    int found = 0;

    for (int i = 0; i < n; i++)
    {
        int upper = 0;
        int lower = 0;
        int digits = 0;
        int other = 0;

        cout << "Enter password " << i + 1 << " : ";
        cin >> password;

        for (int j = 0; j < password.length (); j++)
        {
            if(password[j] >= 'A' && password [j] <= 'Z')
            {
                upper++;
            }
            else if (password[j] >= 'a' && password [j] <= 'z')
            {
                lower++;
            }
            else if (password[j] >= '0' && password [j] <= '9')
            {
                digits++;
            }
            else
            {
                other++;
            }
        }
        if (upper > 0 && lower > 0 && digits > 0)
        {
            cout << "Password" << i + 1
                << ":Length=" << password.length()
                << ", Upper=" << upper
                << ", Lower=" << lower
                << ", Digits=" << digits
                << ", Other=" << other
                << "-> STRONG"<< endl;

                strongCount++;

                if (found == 0)
                {
                    longestPassword = password;
                    longestLength = password.length();
                    found = 1;
                }
                else if (password.length() > longestLength)
                {
                    longestPassword = password;
                    longestLength = password.length();
                }
                else
                {
                    cout << "Password" << i + 1
                    << ": Length+" << password.length()
                    << ", Upper=" << upper
                    << ", Lower=" << lower
                    << ", Digits=" << digits
                    << ", Other=" << other
                    << "-> WEAK" << endl;
                }
        }
        cout <<"\nTotal Strong Passwords: " << strongCount << endl;

        if (found == 1)
        {
            cout << "Longest Strong Password: " << longestPassword
            << "(Length " << longestLength << ")" << endl;
        }
        else
        {
        cout << "No strong passwords found." << endl;
        }
        return 0;
        
    }
}