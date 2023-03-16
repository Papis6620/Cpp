#include <iostream>

using namespace std;

unsigned long long fib_r(int k){
    if(k == 0) return 0;
    if(k == 1) return 1;
    if(k > 1) return fib_r(k-1) + fib_r(k-2);
    return 0;
}
unsigned long long fib(int k){
    if(k == 0) return 0;
    if(k == 1) return 1;
    if(k > 1){
        unsigned long long fib1 = 0;
        unsigned long long fib2 = 1;
        unsigned long long temp;
        for(int i = 2; i <= k; i++){
            temp = fib2;
            fib2 = fib1 + fib2;
            fib1 = temp;
        }
    return fib2;
    }
    return 0;
}

int main(){
    unsigned long long k = 80;
    // for(unsigned long long i = 0; i<=k ; i++){
    //     cout << i << " element ciągu = " << fib_r(i) << endl;
    // }
    for(unsigned long long i = 0; i<=k ; i++){
        cout << i << " element ciągu = " << fib(i) << endl;
}
}   