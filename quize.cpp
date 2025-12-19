#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char answer;

    cout << "===== WELCOME TO QUIZ =====\n\n";

    cout << "Q1. Which data structure uses FIFO?\n";
    cout << "a) Stack\nb) Queue\nc) Tree\nd) Graph\n";
    cin >> answer;
    if (answer == 'b' || answer == 'B') score++;

    cout << "\nQ2. Which keyword is used to create object in C++?\n";
    cout << "a) class\nb) object\nc) new\nd) create\n";
    cin >> answer;
    if (answer == 'c' || answer == 'C') score++;

    cout << "\nQ3. Time complexity of binary search?\n";
    cout << "a) O(n)\nb) O(log n)\nc) O(n^2)\nd) O(1)\n";
    cin >> answer;
    if (answer == 'b' || answer == 'B') score++;

    cout << "\n===== QUIZ FINISHED =====\n";
    cout << "Your Score: " << score << "/3\n";

    return 0;
}
