#include <iostream>
using namespace std;

int main(){
    int a= 10;
    int b= 5;

    int temp = a; // temp/temporary gunanya untuk variabel sementara
    a = b; // a = 5, 
    b = temp; // b = 10, a= 5

    //a = b; // a = 5, b = 5
    //b = a ; // b = 5, b = 5

    cout << a << endl;
    cout << b << endl;
}