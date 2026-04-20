#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Number of Rows: ";
    cin >> n;

    // Upper half
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(char ch='A'; ch<='A'+(2*i - 2); ch++){
            cout << ch;
        }
        cout << endl;
    }

    // Lower half
    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(char ch='A'; ch<='A'+(2*i - 2); ch++) {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}

