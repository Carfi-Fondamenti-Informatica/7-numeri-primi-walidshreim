#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int n;
    int check;
    cout << ("ENTER A NUMBER : ");
    cin >> n;
    check = primecheck(n, n / 2);
    if (check == 0) {
        cout << ("numero non primo\n");
    } else {
        cout << ("numero primo\n");
    }
}
