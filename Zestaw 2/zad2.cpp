#include<iostream>
#include<random>
using namespace std;

void quick_sort(vector<int> &numbers, int left, int right){
    if(left >= right) return;
    int i = left - 1;
    int j = right + 1;
    int pivot = numbers[(left+right) / 2];
    while(true){
        while(pivot > numbers[++i]);
        while(pivot < numbers[--j]);
        if(i <= j){
            swap(numbers[i],numbers[j]);
        }else break;
    }
    if(j > left){
        quick_sort(numbers, left, j);
    }
    if(i < right){
        quick_sort(numbers, i, right);
    }
}

int main(){
    vector<int> numbers;
    uniform_int_distribution<int> random(1, 10000);
    default_random_engine gen;
    for(int i = 0; i < 10000; i++){
        numbers.push_back(random(gen));
    }
    quick_sort(numbers, 0, 9999);
    for(int i = 0; i < 10000; i++){
        cout << numbers[i] << endl;
    }
    return 0;
}