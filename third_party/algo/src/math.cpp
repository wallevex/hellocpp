//
// Created by huhaolong on 2025/4/8.
//

long long fibo(int n) {
    if (n < 0) {
        return -1;
    }
    if (n < 2) {
        return 1;
    }
    long long a = 1;
    long long b = 1;
    for (int i = 2; i <= n; i++) {
        long long c = a + b;
        a = b;
        b = c;
    }
    return b;
}