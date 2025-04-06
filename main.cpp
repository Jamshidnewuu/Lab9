#include <iostream>
using namespace std;

// Problem 1
/*int doMath(int a, int b) {
        return -doMath(a, -b);  
    }
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    int result = doMath(x, y);
    cout << "Product: " << result << endl;
    return 0;
}*/

// Problem 2
/*int factorial (int a) {
    if (a == 0) {
        return 1;
    }
    return a * factorial(a - 1);
}
int main () {
    cout << factorial(4);
}*/

// Problem 3
/*int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
    int n;
    cout << "Enter how many terms: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}*/

// Problem 4
/*int doMath (int a) {
    int j = 0;
    for (int i = 1; i <= a; i++) {
          j += i;
    }
    return j;
}
int main () {
    cout << doMath(3);
}*/

// Problem 5
/*void Print(int n) {
    if (n == 0) {
        return; 
    }
    cout << n << " ";
    Print(n - 1);  
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Print(n);
    return 0;
}*/

// Problem 6
/*void Print (int j) {
    int count = 0;
    while (j != 0) {
        j /= 10;
        count++;
    }
    cout << count;
}
int main () {
    Print(90);
}*/

// Problem 7
/*void doMath (int j) {
    int sum = 0;
    while (j != 0) {
        sum += j % 10;
        j /= 10;
    }
    cout << sum;
}
int main () {
    doMath(90);
}*/

// Problem 8
/*void doMath (int j) {
    while (j != 0 ) {
        cout << j % 10;
        j /= 10;
    }
}
int main () {
    doMath(765);
}*/

// Problem 9
/*void doMath(int n) {
    cout << n % 10;       
    doMath(n / 10);    
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reversed: ";
    if (num == 0) {
        cout << 0;
    } else {
        doMath(num);
    }
    cout << endl;
    return 0;
}*/

// Problem 10
/*void doMath (int j) {
    int a = j % 10;
    int b = j / 100;
    if (a == b) {
        cout << "Palindrome";
    } else {
        cout << "no";
    }
}
int main () {
    doMath(767);
}*/

// Problem 11
/*bool doMath(int n, int i) {
    if (n <= 2) {
        return (n == 2); 
    }
    if (n % i == 0) {
        return false;     
    }
    if (i > sqrt(n)) {
        return true;     
    }
    return doMath(n, i + 1);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (doMath(n, 2)) {
        cout << "The number is prime";
    } else {
        cout << "The number is not prime";
    }
    return 0;
}*/
