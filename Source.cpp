#include <iostream>
using namespace std;
//Home work #19_Shumilin
int nod(int a, int b);
int resurveNumber(int num);

int main() {
    setlocale(LC_ALL, "ru");
    int m, v;
    cout << "Task 1.\nEnter two numbers: ";
    cin >> m >> v;
    cout << "\nGreatest common divisor: " << nod(m, v);

    cout << "\n\nTask2.\nEnter numbers: ";
    const int n = 4;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cout << resurveNumber(a[i]) << endl;
    }

    return 0;
}
//Task 1.
int nod(int a, int b) {
    if (a == b) {
        return a;
    }
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    return nod(a, b - a);
}
//Task 2.
int resurveNumber(int num) {
    int n = 0;
    while (num) {
        n = 10 * n + num % 10;
        num /= 10;
    }
    return n;
}