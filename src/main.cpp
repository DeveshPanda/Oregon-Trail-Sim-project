#include "../header/Player.h"

int main() {
    string name = "";
    int major = 0;
    cout << "Please enter your name: ";
    getline (cin, name);

    while (major > 3 || major < 1) {
        cout << "Please choose your major (1 - BCOE, 2 - CNAS, 3 - CHASS): ";
        cin >> major;
    }

    return 0;
}
