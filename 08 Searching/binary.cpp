#include <iostream>
using namespace std;

int main(){
    int arr[100], st, mid, end, i, num,tgt;

    //Menentukan panjang array
    cout << "Tentukan ukuran array: ";
    cin >> num;
    cout << endl;

    cout << "Nilai pertama harus berupa angka terkecil dalam array ... "<< endl 
    << "Masukkan nilai dalam array  yang diurutkan baik dalam urutan menaik atau menurun: "<< endl;

    //Masukkan nilai ke dalam array
    for (int i = 0; i < num ; i++){
        cout << " arr [" << i << "] = ";
        cin >> arr[i];
    }
    st = 0;
    end = num - 1;

    //Menentukan nilai yang ingin dicari
    cout << "Tentukan nilai yang akan dicari dari array yang diurutkan: ";
    cin >> tgt;

    //Mencari dengan binary search
    while(st <= end){
        mid = (st + end) /2;
        if (arr[mid] == tgt){
            cout << "Elemen ditemukan pada index " << (mid);
            exit(0);
        }
        else if(tgt > arr[mid]){
        st = mid + 1;
         }

        else if(tgt < arr[mid]){
        end = mid - 1;
        }

    }
     
    cout << "Nomor tidak ditemukan";
    
}


