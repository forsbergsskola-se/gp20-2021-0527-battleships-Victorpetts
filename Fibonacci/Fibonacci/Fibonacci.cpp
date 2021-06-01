#include <iostream>
using namespace std;

int FibRecursive(int);
void FibIteration(int);

int main(){
	const int series = 15;
    int i = 0;
	
    while (i < series) {
        cout << FibRecursive(i) << " ";
        i++;
    }
    cout << endl << endl;

    FibIteration(series);
    cout << endl;
	
    return 0;
}

int FibRecursive(int n){
    if (n == 0 || n == 1)
        return n;
    return (FibRecursive(n - 1) + FibRecursive(n - 2));
}

void FibIteration(int n){
    int x = 0, y = 1, z = 0;
	
    for (int i = 0; i < n; i++) {
        cout << x << " ";
        z = x + y;
        x = y;
        y = z;
    }
}