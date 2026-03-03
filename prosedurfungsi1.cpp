#include<iostream>
using namespace std;

    float p,l;

void Input (){
    cout << "masukkan panjang : " ;
    cin >> p;
    cout << "masukkan lebar : " ;
    cin >> l;
}

float LuasPersegi(float x, float y){
    return x*y;
}

int jumlah(int a, int b, int c){
    return a+b+c;
}

void Output (){
    cout << "hasilnya = : " << LuasPersegi(p,l) << endl;
}

int main(){
    Input ();
    Output ();
}
// done