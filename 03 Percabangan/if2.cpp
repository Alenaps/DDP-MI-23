//Library untuk input dan output//
#include <iostream>

// untuk memudahkan agar tidak perlu std:://
using namespace std;


int main(){
    //Deklarasi variabel
    int a;

    //input/masukkan nilai variabel a dari keyboard//
    cin>>a;

    //jika a sama dengan 100 maka// 
    if(a==100){
        //output "SEMPURNA"//
        cout<<"SEMPURNA\n";
    }
    //jika a selain 100 maka//
    else{
        //output "BELUM SEMPURNA"//
        cout<<"BELUM SEMPURNA\n";
    }
}