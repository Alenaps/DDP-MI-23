#include <iostream>
using namespace std;

int main()
{
    char ulangi = 'y';
    int counter = 0;

    while(ulangi == 'y'){
        cout<<"Apakah kamu sayang aku?"<<endl;
        cout<<"Jawab (y/t): ";
        cin >> ulangi;

        counter++;
    }

    cout<<"\n\n----------\n";
    cout<<"Anda kurang beruntung!"<<endl;
    cout<<"Kamu berusaha sebanyak "<<counter<<" kali."<<endl;;

    return 0;

}