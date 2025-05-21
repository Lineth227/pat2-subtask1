#include <iostream>
using namespace std;

const int NUM_EXPERIMENTS = 3;
const int NUM_READINGS = 3;

int main() {
    float readingValue;
    double total, average;

    for (int i = 1; i <= NUM_EXPERIMENTS; i++) {
        total = 0;
        cout << "EXPERIMENT " << i << endl;

        for (int j = 1; j <= NUM_READINGS; j++) {
            cout << "Enter reading " << j << " value: ";
            cin >> readingValue;
            total += readingValue;
        }

        average = total / NUM_READINGS;

        // Evaluation logic
        cout << "Experiment " << i << " average: " << average;
        if (average < 100) {
            cout << " are: Below acceptable range" << endl;
        } else if (average >= 100 && average <= 300) {
            cout << " are: Within acceptable range" << endl;
        } else {
            cout << " are: Above acceptable range" << endl;
        }

        cout << endl; // For spacing
    }

    return 0;
}
