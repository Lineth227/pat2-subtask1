#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

int main() {
    char letters[] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
        'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
        'U', 'V', 'W', 'X', 'Y', 'Z'
    };

    string morse[] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
        "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
        "..-", "...-", ".--", "-..-", "-.--", "--.."
    };

    string message;
    cout << "Enter a short message in English: ";
    getline(cin, message);

    string fullMorse = "";

    for (char ch : message) {
        if (isalpha(ch)) {
            char upperCh = toupper(ch);

            for (int i = 0; i < 26; i++) {
                if (letters[i] == upperCh) {
                    cout << upperCh << ": " << morse[i] << endl;
                    fullMorse += morse[i] + "   "; 
                    break;
                }
            }
        }
    }

    cout << "\nFull Morse code:\n" << fullMorse << endl;

    return 0;
}
