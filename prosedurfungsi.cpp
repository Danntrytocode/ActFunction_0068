#include<iostream>
using namespace std;

    float p,l;

void Input(){
    cout << "masukkan panjang : " ;
    cin >> p;
    cout << "masukkan lebar : " ;
    cin >> l;
}

float LuasPersegi(){
    return p*l;
}

void Output (){
    cout << "hasilnya = " << LuasPersegi();
}

int main(){
    Input();
    Output();
}
