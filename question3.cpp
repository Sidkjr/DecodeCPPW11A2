#include <iostream>
using namespace std;
int numberOfSteps(int n) {
    if (n == 0) return 0; 
    if (n % 2 == 0) return 1 + numberOfSteps(n / 2); 
    else return 1 + numberOfSteps(n - 1);
}
int main() {
    int num = 14;
    cout << "Number of steps to reduce " << num << " to zero is " << numberOfSteps(num) << endl;
}
