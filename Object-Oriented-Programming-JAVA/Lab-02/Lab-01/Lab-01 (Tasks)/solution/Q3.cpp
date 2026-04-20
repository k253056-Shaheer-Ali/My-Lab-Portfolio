#include<iostream>
using namespace std;

void findPrimesInRange(int start, int end){
	cout << "Prime numbers between " << start << " and " << end << "are:" << endl;
	
	for(int i=start+1; i<end; i++){
	    if(i <= 1) continue;
	    bool isPrime = true;
	    
	    for(int j=2; j<i; j++){
	    	if(i%j == 0){
	    		isPrime = false;
	    		break;
			}
		}
		if(isPrime){
			cout << i << " ";
		}
	}
}

int main(){
	int start, end;
	cout << "Enter the start number: ";
	cin >> start;
	cout << "Enter the end number: ";
	cin >> end;
	
	findPrimesInRange(start, end);
	return 0;
}
