#include <bits/stdc++.h>
using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    vector<int> updatedGrades;

    for (int grade : grades) {
        if (grade < 38) {
            updatedGrades.push_back(grade);
        } else {
            int remainder = grade % 5;
            if (remainder >= 3)
                updatedGrades.push_back(grade + (5 - remainder));
            else
                updatedGrades.push_back(grade);
        }
    }
    return updatedGrades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);

    for (int i = 0; i < n; i++)
        cin >> grades[i];

    vector<int> result = gradingStudents(grades);

    for (int g : result)
        cout << g << endl;

    return 0;
}
