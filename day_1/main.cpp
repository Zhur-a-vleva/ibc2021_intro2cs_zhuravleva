#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    cout << "Input a number: " << endl;
    int a;
    cin >> a;
    if (a < 2) {
        cout << "It's not a prime number" << endl;
    }
    else {
        for (int i = 2; i <= sqrt(a); ++i) {
            if (a % i == 0) {
                cout << "It's not a prime number" << endl;
                return 0;
            }
        }
        cout << "It's a prime number" << endl;
    }
    return 0;
}