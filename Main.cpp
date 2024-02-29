#include <iostream>
#include <string>
using namespace std;

int main() {
    // We will search for that in the input we'll get
    string x = " ";
    // Declaring the input
    string input;
    // Making it clear for the user
    cout << "Enter your text: ";
    // Getting the full line
    getline(cin, input);
    // If we didn't make this step the compiler won't give us the text after the last space
    input = input + " ";
    // Loop
    while (input.find(x) != string::npos) {
        int slice = input.find(x);
        cout << input.substr(0, slice) << endl;
        input = input.substr(slice + 1);
    }
}
