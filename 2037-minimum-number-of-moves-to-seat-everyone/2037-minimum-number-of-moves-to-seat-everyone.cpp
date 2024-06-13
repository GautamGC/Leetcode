#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());
    int totalMoves = 0;
    for (int i = 0; i < seats.size(); ++i) {
        totalMoves += abs(seats[i] - students[i]);
    }
    return totalMoves;
}
int main() {
    int n;
    cout << "Enter the number of seats/students: ";
    cin >> n;
    vector<int> seats(n), students(n);
    cout << "Enter the positions of the seats: ";
    for (int i = 0; i < n; ++i) {
        cin >> seats[i];
    }
    cout << "Enter the positions of the students: ";
    for (int i = 0; i < n; ++i) {
        cin >> students[i];
    }
    int movesRequired = minMovesToSeat(seats, students);
    cout << "The minimum number of moves required is " << movesRequired << endl;
    return 0;
}
};