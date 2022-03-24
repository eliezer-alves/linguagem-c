#include <iostream>
using namespace std;

int get_array_size(int arr[]){
    return sizeof arr/sizeof arr[0];
}

int main() {
	int vet[] = {3,5,1,9,7,2,8,6}, sizeVet = 7;
	
	for (int i=1; i<sizeVet; i++) {
		int valorOrdenar = vet[i];
		int j=i-1;
		while (valorOrdenar < vet[j]) {
			int temp = vet[j];
			vet[j] = valorOrdenar;
			vet[j+1] = temp;
			j--;
		}
	}
	
	for (int i=0; i<sizeVet; i++) {
		printf("%d ", vet[i]);
	}
	// your code goes here
	return 0;
}
