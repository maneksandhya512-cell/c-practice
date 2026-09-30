#include <iostream>
using namespace std;

int main() {
    double s1, s2, s3, s4, s5;
    cout << "Enter marks of 5 subjects (out of 100 each):\n";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    double total = s1 + s2 + s3 + s4 + s5;
    double average = total / 5.0;
    double percentage = (total / 500.0) * 100;

    cout << "Total Marks: " << total << " / 500" << endl;
    cout << "Average Marks: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}