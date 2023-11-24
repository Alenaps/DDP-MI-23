#include <iostream>
using namespace std;

int main(){
    int angka[5] = {10,5,15,0,12};
    int temp = 0;
    
    cout<<"Array sebelum disorting : ";
    for(int i = 0; i<5 ; i++){
        cout<< angka[i]<<" ";
    }

    for (int i = 0 ; i < 5-1 ; i++){         //i=0; i<4 i mulai dari 0 sampai 3
        for (int j = 0 ; j < 5-i-1 ; j++ ){  //j=0; j<4 i mulai dari 0 sampai 3

        if (angka[j] > angka[j+1]) {
            temp = angka[j]; //10
            angka[j] = angka[j+1]; //5
            angka[j+1] = temp; //10
        }
    }
   }

   cout << endl;

   cout<< "Array sesudah disorting : ";
   for(int i = 0; i<5; i++){
    cout << angka[i] << " ";
   }

}