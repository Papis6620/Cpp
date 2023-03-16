#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int bok_z;
    int bok_w;

    cout << "Podaj rozmiar zewnętrzny: " << endl;
    cin >> bok_z;
    cout << "Podaj rozmiar wewnętrzny: " << endl;
    cin >> bok_w;


    for(int i = 0; i < bok_z + 2; i++){
        if(i == 0 || i == 1 || i == bok_z +1 || i == bok_z){
            cout << std::setfill('*') << std::setw(bok_w + 5) << endl;
        }else{
            cout << std::setfill('*') << std::setw(2) << "" << std::setfill(' ') << std::setw(bok_w) << "" << std::setfill('*') << std::setw(3) << endl;
        }    
    }


    return 0;

}