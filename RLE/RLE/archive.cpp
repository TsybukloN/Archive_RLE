#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int archive() {
    string g;
    signed char r = 0;

    cout << "Enter string: ";
    cin >> g;
    cout << endl;

    cout << "Archive string: " << endl;

    int n = g.size();

    for (int i = 0; i < n; i++) {
        if (g.substr(i, 1) == g.substr(i + 1, 1)) {
            r++;
        }
        if (r >= 5 && g.substr(i, 1) != g.substr(i + 1, 1)) {
            cout << g.substr(i, 1) << "~" << r + 1 << ")";
            r = 0;
        }
        else if (r < 5 && g.substr(i, 1) != g.substr(i + 1, 1)) {
            for (int y = i - r; y < i + 1; y++) {
                cout << g.substr(y, 1);
            }
            r = 0;
        }
    }
    return 0;
}

int disarchive() {
    string c;
    int r = 1;

    cout << "Enter archive string: ";
    cin >> c;

    cout << "Disarchive string: ";

    int n = c.size();

    for (int i = 0; i < n; i++) {
        if (c.substr(i, 1) == "~") {
            int re = atoi(&c[i + 1]);
            while ((re /= 10) > 0) r++;
            int a = atoi(&c[i + 1]);
            for (int t = 0; t < a; t++) cout << c.substr(i - 1, 1);
            i = i + r + 2;
        }
        else {
            cout << c.substr(i, 1);
        }
    }
    return 0;
}