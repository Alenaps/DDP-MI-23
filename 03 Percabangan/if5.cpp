#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    char nilai_IPK;
    cin>>nilai_IPK;
    
    switch(nilai_IPK){
        case 'A':
            cout<<"Nilai kamu 100\n";
            break;
        case 'B':
            cout<<"Nilai kamu 76 - 99\n";
            break;
        case 'C':
            cout<<"Nilai kamu dibawah 76 :(\n";
            break;
        default :
            cout<<"Nilai Invalid\n";
        
    }
    return 0;
}
