#include <iostream>
#include "archive.h"
#include "RLE.h"

using namespace std;

int main() {
    int enter_var;

    do {
        cout << "Enter 1 to archive, 2 to disarchive string or 3 to exit... " << endl;
        cin >> enter_var;
        cout << endl;
        switch (enter_var) {
        case 1:
            archive();
            break;
        case 2:
            disarchive();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Error\n";
        }
        cout << endl;
        enter_var = 0;
    } while (1);
    return 0;
}