#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int FibRecursion(int);
void FibIteration(int);

int main(){
	const int series = 20;
    int i = 0;

    cout << "Recursive 'nacci: ";
    auto timeStart = high_resolution_clock::now();
    while (i < series) {
        cout << FibRecursion(i) << " ";
        i++;
    }
    cout << endl;
    auto timeStop = high_resolution_clock::now();
    auto elapsedTime = duration_cast<microseconds>(timeStop - timeStart);
    cout << "That took : " << elapsedTime.count() << " microseconds" << endl << endl;

    cout << "Iterative 'nacci: ";
    timeStart = high_resolution_clock::now();
    FibIteration(series);
    cout << endl;
    timeStop = high_resolution_clock::now();
    elapsedTime = duration_cast<microseconds>(timeStop - timeStart);
    cout << "That took : " << elapsedTime.count() << " microseconds" << endl;
	
    return 0;
}

int FibRecursion(int n){
    if (n == 0 || n == 1)
        return n;
    return (FibRecursion(n - 1) + FibRecursion(n - 2));
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