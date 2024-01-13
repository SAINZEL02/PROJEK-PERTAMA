#include<iostream>
using namespace std;

int main()
{
int a;
int b;
int pilihan;

cout << "masukan nilai pertama: ";
cin >> a;
cout << "masukan nilai kedua: ";
cin >> b;

cout << "silahkan pilih oprasi matematika" << endl;
cout << "1 = tambah" << endl;
cout << "2 = kurang" << endl;
cout << "3 = kali" << endl;
cout << "4 = bagi" << endl;
cout << "silahkan pilih oprasi yang di ingin kan = ";
cin >> pilihan;

if(pilihan == 1 ){
cout << "hasil nya " << a + b; 
}else if(pilihan == 2 ){
cout << "hasil nya " << a - b;
}else if(pilihan == 3 ){
cout << "hasil nya " << a * b;
}else if(pilihan == 4 ){
cout << "hasil nya " << a / b;
}else{
}cout << endl << endl << "maaf jika hasil nya salah";
}
