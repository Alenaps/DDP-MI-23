#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    getchar();
    
    string kalimat[n];
    for (int i = 0; i < n; i++){
        getline(cin, kalimat[i]);
    }
    
    for (int i = n-1; i>= 0; i--){
        cout << kalimat[i] << endl;
    }
    
    return 0;
}