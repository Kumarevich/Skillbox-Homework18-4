#include <iostream>

void calculate(long long n, int& ans) {
    if (n > 0) {
        int s = n % 2;
        if (s % 2 == 0) ++ans;
        calculate(n / 10, ans);
    }
}

int main() {
    long long n;
    std::cout << "Input the long number: ";
    std::cin >> n;
    int ans = 0;

    calculate(n, ans);
    std::cout << ans;
    return 0;
}
