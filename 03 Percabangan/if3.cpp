#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int a;
    cin>>a;
    
    if(a>=0&&a<=9){
        cout<<"Satuan";
    }
    else if(a>=10&&a<=99){
        cout<<"Puluhan";
    }
    else if(a>=100&&a<=999){
        cout<<"Ratusan";
    }
    else if(a<0||a>=999){
        cout<<"Tidak Tahu";
    }
            
    return 0;
}
