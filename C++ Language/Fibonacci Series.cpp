#include <iostream>
using namespace std;

void fibonacciLoop(int n) {
    int a = 0, b = 1, temp;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        temp = a + b;
        cout << temp << " ";
        a = b;
        b = temp;
    }
}

int fibonacciRec(int n) {
    return (n <= 1) ? n : fibonacciRec(n - 1) + fibonacciRec(n - 2);
}

int main() {
    int num;
    cout << "Enter number of terms: ";
    cin >> num;
    cout << "Fibonacci using loop: ";
    fibonacciLoop(num);
    cout << "\nFibonacci using recursion: ";
    for (int i = 0; i < num; i++)
        cout << fibonacciRec(i) << " ";
    return 0;
}