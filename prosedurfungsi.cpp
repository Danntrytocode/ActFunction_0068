//Library
#include<iostream>
using namespace std;
//Deklarasi Global
    float p,l;

//implementasi Prosedur & Fungsi
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

//program utama
int main(){
    Input();
    Output();
}
