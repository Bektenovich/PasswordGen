// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

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
    bool has_upper = false;
    bool has_digit = false;

    for (int i = 0; i < n; ++i) {
        char c = GenRand();
        password += c;
        if (isupper(c)) {
            has_upper = true;
        } else if (isdigit(c)) {
            has_digit = true;
        }
    }

    cout << "Your Password is: " << password
         << "\n\nThis is a " << (n >= 5 && has_upper && has_digit ? "strong" : "weak") << " password.";

    cout << endl << "THANK YOU JENISHBEK AGAY";
    return 0;
}
