#include <iostream>
using namespace std;


int main() {
    string kalimat;
    getline(cin, kalimat);
    
    int length=kalimat.length();
    for(int i=1; i<= length; i++){
        cout<<kalimat[length-i];
    }
    
    return 0;
}
