#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int angka;
    cin>>angka;
    
    if(angka%2==0){
        cout<<"Genap\n";
    }else if(angka%2==1){
        cout<<"Ganjil"<<endl;
    }
    
    return 0;
}
