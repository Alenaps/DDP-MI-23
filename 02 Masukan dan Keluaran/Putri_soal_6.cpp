#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int a, b;
    cin >> a >> b;
    
    int pembagian = a / b;
    int sisa_bagi = a % b;
    
    cout << "masing-masing " <<pembagian<< endl;
    cout << "bersisa "<<sisa_bagi<< endl;

    return 0;
}
