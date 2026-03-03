#include <iostream>
using namespace std;
//deklarasi global
    float p, l;

//implemantasi prosedur & fungsi
void input()
{
    cout << "masukkan panjang : " ;
    cin >> p;
    cout << "masukkan lebar : " ;
    cin >> l;
}

float LuasPersegi()
{
    return p*l;
}

void output()
{
    cout << "hasilnya : " << LuasPersegi();
}

//program utama
int main()
{//start 
    input();
    output();
}//selesai