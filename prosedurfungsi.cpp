#include<iostream>
using namespace std;

    float p,l;

void Input(){
    cout << "Masukkan Panjang : " ;
    cin >> p;
    cout << "Masukkan Lebar : " ;
    cin >> l;
}

float Luas_Persegi(){
    return p*l;
}

void Output (){
    cout << "Hasilnya = " << Luas_Persegi() << "cm^2" << endl;
}

int main(){
    Input();
    Output();
}
