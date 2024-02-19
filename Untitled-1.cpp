// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib>
#include <ctime>

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

    for (int i = 0; i < n; ++i) {
        password += GenRand();
    }

    cout << "Your Password is: " << password
         << "\n\nThis is a " << (n >= 10 ? "strong" : "weak") << " password.";

    cout << endl << "THANK YOU JENISHBEK AGAY";
    return 0;
}
