#include<iostream>
#include<climits>
using namespace std;

int main(){
	int size;
    cout << "Enter size of arrays: ";
    cin >> size;
	
	int array1[size], array2[size];
		
	cout << "First array values: ";
	for(int i=0; i<size; i++){
		cin >> array1[i];
	}
	cout << "Second array values: ";
	for(int i=0; i<size; i++){
		cin >> array2[i];
	}
	
	//2. Swapping arrays
	for(int i=0; i<size; i++){
		int temp = array1[i];
		array1[i] = array2[i];
		array2[i] = temp;
	}
	
	cout << "Arrays after swapping:" << endl; 
	cout << "First array: ";
	for(int i=0; i<size; i++){
		cout << array1[i] << " ";
	}
	cout << "\nSecond array: ";
	for(int i=0; i<size; i++){
		cout << array2[i] << " ";
	}
	
	//3. The largest element
	int max = array1[0];
	int index = 0;
	
	for(int i=1; i<size; i++){
		if(max < array1[i]){
			max = array1[i];
		}
	}
	
	cout << "\nLargest element in first array (after swapping): " << max << endl;
	
	//4. Second largest element
	int largest = INT_MIN, second_max = INT_MIN;
	for(int i=0; i<size; i++){
		
    	if(array2[i] > largest){
        	second_max = largest;
        	largest = array2[i];
    	} 
		else if(array2[i] > second_max && array2[i] != largest){
        	second_max = array2[i];
   		}
	}
	cout << "Second largest element in second array (after swapping): " << second_max << endl;

	
	//5. Unique element
	int unique = array1[0];
	
	for(int i=0; i<size; i++){
		bool isUnique = true;
		
		for(int j=0; j<size; j++){
			if(i!=j && array1[i] == array1[j]){
				isUnique = false;
				break;
			}
			if(isUnique){
				cout << "Unique element in first array (after swapping): " << array1[i] << endl;
				break;
			}
		}	
	}
	
	return 0;
}
