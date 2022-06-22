#include "../base.h"

void BaseProject::input(){
  cout << "------------- Input Data -------------" << endl;
  //Kelas A
  cout << "Masukkan data untuk kelas A!" << endl << endl;
  for (int i = 0; i < 5; i++){
    cout << "Masukkan data NIM ke-" << i+1 << " : "; cin >> nimA[i];
    cout << "Masukkan data nama ke-" << i+1 << " : "; cin >> namaA[i];
  }
  cout << "--------------------------------------" << endl;
  //Kelas B
  cout << "Masukkan data untuk kelas B!" << endl << endl;
  for (int i = 0; i < 5; i++){
    cout << "Masukkan data NIM ke-" << i+1 << " : "; cin >> nimB[i];
    cout << "Masukkan data nama ke-" << i+1 << " : "; cin >> namaB[i];
  }
  cout << "--------------------------------------" << endl;
  //Kelas C
  cout << "Masukkan data untuk kelas C!" << endl << endl;
  for (int i = 0; i < 5; i++){
    cout << "Masukkan data NIM ke-" << i+1 << " : "; cin >> nimC[i];
    cout << "Masukkan data nama ke-" << i+1 << " : "; cin >> namaC[i];
  }
  cout << "--------------------------------------" << endl;
}

int main(){
  BaseProject base;
  base.input();
  return 0;
}