#include <iostream>

using namespace std;

//function declaration
double luas_lingkaran(double jari);
double luas_segitiga(double alas, double tinggi);

int main() {
    double r;

    r = 10;
    cout<< 3.14*r*r << endl;

    r = 20;
    cout<< 3.14*r*r << endl;

    r = 30;
    cout<< 3.14*r*r << endl;

    cout << luas_lingkaran(10) << endl;
    cout << luas_lingkaran(20) << endl;
    cout << luas_lingkaran(30) << endl;

    cout << luas_segitiga(10, 20) << endl;
    cout << luas_segitiga(20, 30) << endl;
    cout << luas_segitiga(30, 40) << endl;
}

 //function definition
 double luas_lingkaran(double jari){
    return 3.14*jari*jari;
}

 //function definition
double luas_segitiga(double alas, double tinggi){
    return alas*tinggi/2;
}