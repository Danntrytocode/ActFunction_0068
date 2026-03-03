#include<iostream>
using namespace std;

    float p,l;

void Input (){
    cout << "Masukkan Panjang : " ;
    cin >> p;
    cout << "Masukkan Lebar : " ;
    cin >> l;
}

float LuasPersegi(float x, float y){
    return x*y;
}

int Jumlah(int a, int b, int c){
    return a+b+c;
}

void Output (){
    cout << "Hasilnya = : " << LuasPersegi(p,l) << "cm^2" << endl;
}

int main(){
    Input ();
    Output ();
}
// done