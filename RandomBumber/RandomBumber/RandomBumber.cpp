#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	const int iterations = 100;
	int number;
	srand(time(0));

	for(int i = 0; i < iterations; i++){
		number = rand() & 20 + 1;
		cout << number << " ";
	}
}