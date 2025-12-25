#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int spaces = n - i - 1;
        int hashes = i + 1;

        for(int j = 0; j < spaces; j++)
            cout << " ";

        for(int j = 0; j < hashes; j++)
            cout << "#";

        cout << endl;
    }

    return 0;
}
