#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int pertama, kedua, ketiga;
    cin>>pertama>>kedua>>ketiga;
    
    for(int angka= pertama; kedua >= angka ;  angka += ketiga){
        cout<<angka<<" ";
    }
    return 0;
}
