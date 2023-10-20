#include <iostream>
using namespace std;


int main() {
    int x;
    cin>>x;
    
    if(x<0){
        cout<<"Negatif ";
    }
    else if(x%2==0){
        cout<<"Positif Genap";
    }
    else if(x%2==1){
        cout<<"Positif Ganjil";
    }
    return 0;
}
