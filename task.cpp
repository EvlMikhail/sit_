#include <iostream>

int lib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return lib(n-1) + lib(n-2);
}

int main() {
    std::cout << lib(10) << std::endl; // Выведет 34
    return 0;
}