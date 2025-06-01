#include <iostream>

int lib(int n) {
    if (n == 0 || n == 1) return 1;
    return lib(n-1) + lib(n-2);
}

int main() {
    std::cout << lib(10) << std::endl; // Выведет 55
    return 0;
}