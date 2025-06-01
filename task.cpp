#include <iostream>
#include <vector>

using namespace std;

vector<int> lib(int n) {
    vector<int> sequence;
    if (n >= 0) sequence.push_back(0);
    if (n >= 1) sequence.push_back(1);
    
    for (int i = 2; i <= n; ++i) {
        sequence.push_back(sequence[i-1] + sequence[i-2]);
    }
    
    return sequence;
}

int main() {
    int n = 10;
    vector<int> result = lib(n);
    
    cout << "Первые " << n << " чисел Фибоначчи:" << endl;
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}