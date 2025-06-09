#include<iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a + b <= c) {
        while (1) {
            c--;
            if (a + b > c)break;
        }
    }
    else if (a + c <= b) {
        while (1) {
            b--;
            if (a + c > b)break;
        }
    }
    else if (b + c <= a) {
        while (1) {
            a--;
            if (b + c > a)break;
        }
    }

    cout << a + b + c;

}