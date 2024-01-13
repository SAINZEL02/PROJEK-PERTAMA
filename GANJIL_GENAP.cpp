#include<iostream>

using namespace std;

int main()
{

int a;

cout << "MENENTUKAN GANJIL ATAU GENAP" <<endl <<endl;

cout << "MASUKAN ANGKA : ";
cin >> a;

if (a % 2 == 1){
cout << a << " ADALAH BILANGAN GANJIL";
}
else if (a % 2 == 0){
cout << a << " ADALAH BILANGAN GENAP";
}
else {
cout << "ANGKA TIDAK VALID";
}
}