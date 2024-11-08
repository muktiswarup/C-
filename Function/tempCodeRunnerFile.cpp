int ncr(int n, int r) {
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}
