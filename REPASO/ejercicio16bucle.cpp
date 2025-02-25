#include <iostream>

using namespace std;

int main() {
    int n;
    
    cout << "Digite un numero: "; 
    cin >> n;

    cout << n << " = ";

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i;
            n /= i;
            if (n > 1) {
                cout << "*";
            }
        }
    }
    
    cout << endl;
    
    return 0;
}
