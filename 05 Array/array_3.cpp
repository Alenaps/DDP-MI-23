#include <iostream>
using namespace std;

int main(){
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

//ukuran array dalam byte
    int size = sizeof(array);

//banyaknya isi array 'array'
    int lenght = sizeof(array) / sizeof(array[0]);

    cout<< "Panjang array: " <<lenght<<endl;
    
    return 0;
}