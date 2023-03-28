#include<iostream>
#include<initializer_list>

using namespace std;

auto fun(const auto& arg){
    auto suma = 0;
    for(auto iterator = arg.begin(); iterator != arg.end(); iterator++){
        suma += *iterator;
    }
    return suma;
}

int main(){
    auto arg = {1,7,12};
    auto wynik = fun(arg);
    cout << "Suma = " << wynik << endl;
    return 0;
}