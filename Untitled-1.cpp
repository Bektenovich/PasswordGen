#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

static const char alphnum[] = "0123456789!@#$%^&*ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
int strLen = sizeof(alphnum) - 1;

char GenRand() {
    return alphnum[rand() % strLen];
}

int main() {
    srand(time(0));

    int n;
    cout << "Enter the length of the password required: ";
    cin >> n;

    string password;
    bool hasDigit = false;

    for (int i = 0; i < n; ++i) {
        char c = GenRand();
        password += c;
        if (isdigit(c)) {
            hasDigit = true;
        }
    }

    cout << "Your Password is: " << password;

    if (n >= 10 && hasDigit) {
        cout << "\n\nThis is a strong password.";
    } else {
        cout << "\n\nThis is a weak password.";
    }

    cout << endl << "THANK YOU JENISHBEK AGAY";
    return 0;
}