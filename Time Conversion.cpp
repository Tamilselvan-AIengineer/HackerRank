#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {
    string hh = s.substr(0, 2);
    string ampm = s.substr(8, 2);

    int hour = stoi(hh);

    if (ampm == "PM" && hour != 12)
        hour += 12;
    if (ampm == "AM" && hour == 12)
        hour = 0;

    string result = (hour < 10 ? "0" + to_string(hour) : to_string(hour));
    result += s.substr(2, 6);

    return result;
}

int main() {
    string s;
    getline(cin, s);

    cout << timeConversion(s) << endl;
    return 0;
}
