#include <iostream>

using namespace std;

int FibRecursive(int);

int main(){
	const int series = 15;
    int i = 0;
	
    while (i < series) {
        cout << FibRecursive(i) << " ";
        i++;
    }
    cout << endl;
	
    return 0;
}

int FibRecursive(int n){
    if (n == 0 || n == 1)
        return n;
    return (FibRecursive(n - 1) + FibRecursive(n - 2));
}