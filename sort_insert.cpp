#include <iostream>
using namespace std;

int main(){
	int data[10] = {3,0,1,8,7,2,5,4,9,6};
	int n = 10;
	
	cout << "Data sebelum di urut : ";
	for (int i = 0; i<10; i++){
		cout << data[i] << " ";
	} 
	cout << endl;
	
	// Insertion sort
	int temp, j;
	for (int i=1; i<n; i++){
		temp = data[i];
		j = i;
		while (data[j]<data[j-1] && j>0){
			data[j] = data[j-1];
			data[j-1] = temp;
			j--;
		}
	}
	
	cout << "Data sesudah di urut : ";
	for (int i = 0; i<10; i++){
		cout << data[i] << " ";
	} 
	
}
