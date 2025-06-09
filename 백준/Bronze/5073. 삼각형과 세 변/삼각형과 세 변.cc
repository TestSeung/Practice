#include<iostream>

using namespace std;

int main() {
    int a, b, c;
    while (1) {
        cin >> a >> b >> c;

        if (a + b + c == 0) {
            break;
        }

        int max = a;

        max <= b ? b <=c? max= c : max =b:max<=c?max=c:max;


        if (a == b&&b == c) {
            cout << "Equilateral" << '\n';
        }
        else if (a + b + c - max * 2 <= 0) {
            cout << "Invalid" << '\n';
        }
        else if (a == b || a == c || b == c) {
            cout << "Isosceles" << '\n';
        }    
        else {
            cout << "Scalene" << '\n';
        }
    }

}