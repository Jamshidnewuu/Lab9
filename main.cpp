#include <iostream>
using namespace std;

// Problem 1
int multiply(int a, int b) {
    if (b == 0) return 0;
    return b > 0 ? a + multiply(a, b - 1) : -multiply(a, -b);
}

// Problem 2
int factorial(int n) {
    return (n == 0) ? 1 : n * factorial(n - 1);
}

// Problem 3
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Problem 4
int sumNatural(int n) {
    return (n == 0) ? 0 : n + sumNatural(n - 1);
}

// Problem 5
void printDescending(int n) {
    if (n == 0) return;
    cout << n << " ";
    printDescending(n - 1);
}

// Problem 6
int countDigits(int n) {
    return (n == 0) ? 0 : 1 + countDigits(n / 10);
}

// Problem 7
int sumDigits(int n) {
    return (n == 0) ? 0 : (n % 10) + sumDigits(n / 10);
}

// Problem 8
int power(int x, int y) {
    return (y == 0) ? 1 : x * power(x, y - 1);
}

// Problem 9
int reverseNumber(int n, int rev = 0) {
    if (n == 0) return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

// Problem 10
bool isPalindrome(int n, int rev = 0, int temp = -1) {
    if (temp == -1) temp = n;
    if (n == 0) return temp == rev;
    return isPalindrome(n / 10, rev * 10 + n % 10, temp);
}

// Problem 11
bool isPrime(int n, int i = 2) {
    if (n <= 1) return false;
    if (i * i > n) return true;
    if (n % i == 0) return false;
    return isPrime(n, i + 1);
}

// Problem 12
void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }
    towerOfHanoi(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    towerOfHanoi(n - 1, aux, to, from);
}

int main() {
    int n, x, y;
    cout << "Enter two numbers for multiplication: ";
    cin >> x >> y;
    cout << "Product: " << multiply(x, y) << endl;

    cout << "Enter a number for factorial: ";
    cin >> n;
    cout << "Factorial: " << factorial(n) << endl;

    cout << "Enter a number for Fibonacci sequence: ";
    cin >> n;
    cout << "Fibonacci: " << fibonacci(n) << endl;

    cout << "Enter a number for sum of first N natural numbers: ";
    cin >> n;
    cout << "Sum of N: " << sumNatural(n) << endl;

    cout << "Enter a number to print in descending order: ";
    cin >> n;
    cout << "Descending order: "; printDescending(n); cout << endl;

    cout << "Enter a number to count its digits: ";
    cin >> n;
    cout << "Count digits: " << countDigits(n) << endl;

    cout << "Enter a number to sum its digits: ";
    cin >> n;
    cout << "Sum of digits: " << sumDigits(n) << endl;

    cout << "Enter base and exponent for power function: ";
    cin >> x >> y;
    cout << "Power: " << power(x, y) << endl;

    cout << "Enter a number to reverse: ";
    cin >> n;
    cout << "Reverse number: " << reverseNumber(n) << endl;

    cout << "Enter a number to check if it's palindrome: ";
    cin >> n;
    cout << "Palindrome check: " << (isPalindrome(n) ? "true" : "false") << endl;

    cout << "Enter a number to check if it's prime: ";
    cin >> n;
    cout << "Prime check: " << (isPrime(n) ? "true" : "false") << endl;

    cout << "Enter number of disks for Tower of Hanoi: ";
    cin >> n;
    cout << "Tower of Hanoi steps:\n";
    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}