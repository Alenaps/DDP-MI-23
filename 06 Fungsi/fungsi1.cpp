#include <iostream>
using namespace std;

void myFunction(){
    cout<< "I just got executed!" <<endl;
}

void myFunction2(string name = "Alena", int umur = 12){
    cout<< "Nama saya : "<< name << " umur saya : " << umur <<endl;
}

int myFunction3(int x){
    return 5 + x;
}

int main(){
    myFunction();
    myFunction();
    myFunction();

    myFunction2("Alena");
    myFunction2("Andi", 12);
    myFunction2("Budi", 13);
    myFunction2("Charlie", 14);

    cout << myFunction3(17) << endl; //22
    cout << myFunction3(25) << endl; //30
    cout << myFunction3(30) << endl; //35
    
    int value1 = myFunction3(18); //23
    cout << value1 << endl; 

    return 0;
}

