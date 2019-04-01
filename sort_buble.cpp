#include <iostream>
using namespace std;

void bubble(int data[], int n);

int main(){
	int data[10] = {3,0,1,8,7,2,5,4,9,6};
	int n = 10;
	
	cout << "Data sebelum di urut : ";
	for (int i = 0; i<10; i++){
		cout << data[i] << " ";
	} 
	cout << endl;
	
	bubble(data, n);
	
	cout << "Data sesudah di urut : ";
	for (int i = 0; i<10; i++){
		cout << data[i] << " ";
	} 
	
}

void bubble(int data[], int n){
	// Bubble sort
	int temp;
	for (int i=0; i<n; i++){
		for (int j=1; j<=n; j++){
			if (data[j]<data[j-1]){
				temp = data[j];
				data[j] = data[j-1];
				data[j-1] = temp;
			}
		}
	}
}
