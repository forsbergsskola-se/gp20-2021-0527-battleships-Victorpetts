#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	const int iterations = 100000;
	int number;
	int maxNumber = 20;
	int appearances[20] = {0};
	
	srand(time(0));

	for(int i = 0; i < iterations; i++){
		number = rand() % maxNumber;
		appearances[number] += 1;
		//cout << number + 1 << " ";
	}

	for(int i = 0; i < maxNumber; i++){
		float percentage = (float(appearances[i]) / iterations) * 100;
		cout << "Number " << i + 1 << ": " << appearances[i] << " times " << percentage << "%" << endl;
	}
	
	float averageAmount = iterations / 20;
	float averagePercentage = (averageAmount / iterations) * 100;
	cout << "Ideal distribution: " << averageAmount << " times " << averagePercentage << "%" << endl;
}