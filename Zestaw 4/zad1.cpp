#include <iostream>
#include <compare>
using namespace std;

class TKlasa{
    public:
        TKlasa(const char* C): str(C) {} //definicja z inicjalizacją

        const char* operator[](const char* s) const{  // operator []
            size_t ptr = str.find(s);
            if(ptr == string::npos){
                return nullptr;
            }
            return str.c_str() + ptr;
        }
        strong_ordering operator<=>(const TKlasa& other){ // operator <=>
            return str<=> other.str;
        }
    private:
        string str;
};

int main(){

    TKlasa text("abcde");
    TKlasa text2("abc");
    const char* ptr = text["f"];
    const char* ptr2= text["cd"];
    if(ptr == nullptr){
        cout << "Nie znaleziono szukanego ciągu" << endl;
    }else{
        cout << "Znaleziony ciąg: " << ptr << endl; 
    }
    if(ptr2 == nullptr){
        cout << "Nie znaleziono szukanego ciągu" << endl;
    }else{
        cout << "Znaleziony ciąg: " << ptr2 << endl; 
    }
    if(text <= text2){
        cout << "text jest mniejszy lub równy od text2" << endl;
    }else{
        cout << "text jest większy od text2" << endl;
    }
    return 0;
}