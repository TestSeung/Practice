#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    if(0!=n&&n%2==0)
    {
        cout<<n<<" is"<<" even";
    }
    else
    {
        cout<<n<<" is"<<" odd";
    }
    return 0;
}