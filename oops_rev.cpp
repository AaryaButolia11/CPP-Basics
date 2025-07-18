#include <iostream>
#include <string>
#include <cstdlib> // for exit()

using namespace std;

class binary {
    string s;
public:
    void read(void);
    void chk_bin(void);
    void display(void);
};

void binary::read(void) {
    cout << "Enter a binary number: ";
    cin >> s;
    chk_bin(); // ✅ nesting: chk_bin is called inside read()
}

void binary::chk_bin(void) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '0' && s[i] != '1') {
            cout << "Incorrect binary format." << endl;
            exit(0);
        }
    }
}

void binary::display(void) {
    cout << "The binary number is: " << s << endl;
}

int main() {
    binary b;
    b.read();     // read() calls chk_bin() internally (nested)
    b.display();  // only display is called separately
    return 0;
}

/*
Nesting of member functions means one member function of a class calls another member function of the same class directly.

*/