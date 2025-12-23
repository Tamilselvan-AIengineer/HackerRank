#include <bits/stdc++.h>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int d1 = 0, d2 = 0;

    for (int i = 0; i < n; i++) {
        d1 += arr[i][i];
        d2 += arr[i][n - i - 1];
    }

    return abs(d1 - d2);
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    cout << diagonalDifference(arr);
    return 0;
}
