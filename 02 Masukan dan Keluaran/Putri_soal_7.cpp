#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string x[12];
    
    cin >> x[0] >> x[1] >> x[2];
    cin >> x[3] >> x[4] >> x[5];
    cin >> x[6] >> x[7] >> x[8];
    cin >> x[9] >> x[10] >> x[11];
    
    cout << x[0] << " " << x[3] << " " << x[6] << " " << x[9] << endl;
    cout << x[1] << " " << x[4] << " " << x[7] << " " << x[10] << endl;
    cout << x[2] << " " << x[5] << " " << x[8] << " " << x[11] << endl;
    
    return 0;
}
