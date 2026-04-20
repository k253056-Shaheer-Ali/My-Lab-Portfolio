#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the amount (in Rs.): ";
    cin >> x;

    int notes[9]  = {5000, 1000, 500, 100, 20, 10, 5, 2, 1};
    int counts[9] = {0};

    for(int i=0; i<9; i++){
    	
        while(x >= notes[i]){
            x = x - notes[i];
            counts[i]++;
        }
    }

    cout << "Minimum notes required are:\n";
    for(int i=0; i<9; i++){
        if(counts[i] > 0){
            cout << notes[i] << " x " << counts[i] << endl;
        }
    }
    return 0;
}


/* Alternative
// Process each denomination
    for(int i = 0; i < 9; i++) {
        if(remaining >= notes[i]) {
            // Calculate how many notes of this denomination
            counts[i] = remaining / notes[i];
            
            // Update remaining amount
            remaining = remaining % notes[i];
            
            // Alternative way without using division/modulo:
            // while(remaining >= notes[i]) {
            //     counts[i]++;
            //     remaining -= notes[i];
            // }
        }
        
        // If remaining becomes 0, we can break early
        if(remaining == 0) {
            break;
        }
    }
    */
