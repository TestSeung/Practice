#include<iostream>

using namespace std;


int main() {
    int a, b, c;

    cin >> a >> b >> c;



    if (a + b <= c) {
       cout << 2*a + 2*b - 1;
    }
    else if (a + c <= b) {
        cout << 2 * a + 2 * c - 1;
    }
    else if (b + c <= a) {
        cout << 2 * b + 2 * c - 1;
    }
    else {
        cout << a + b + c;
    }

   

}