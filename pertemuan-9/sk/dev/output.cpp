#include "../base.h"

void BaseProject::output(){
  cout << "Tampilan tabel menggunakan array 1d : " << endl << endl;
  cout << "Kelas\t" << "NIM\t" << "NAMA\t" << endl;
  //kelas A
  cout << " A\t";
  for (int i = 0; i < 5; i++){
    if (i == 0){
      cout << "\t" << nimA[i] << "\t" << namaA[i] << endl;
    } 
    if(i >= 1){
      cout << "\t\t" << nimA[i] << "\t" << namaA[i] << endl;
    }
}
  //kelas B
  cout << " B\t";
  for (int i = 0; i < 5; i++){
    if (i == 0){
      cout << "\t" << nimB[i] << "\t" << namaB[i] << endl;
    } 
    if(i >= 1){
      cout << "\t\t" << nimB[i] << "\t" << namaB[i] << endl;
    }
}
  //kelas C
  cout << " C\t";
  for (int i = 0; i < 5; i++){
    if (i == 0){
      cout << "\t" << nimC[i] << "\t" << namaC[i] << endl;
    } 
    if(i >= 1){
      cout << "\t\t" << nimC[i] << "\t" << namaC[i] << endl;
    }
  }
  cout << endl << "--------------------------------------" << endl;
  cout << "Tampilan tabel menggunakan array 2d : " << endl << endl;
  //kelas A
  cout << " A\t";
  int k = 0;
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 2; j++){
      if (i == 0){
        cout << "\t" << dataA[i][j] << "\t" << endl;
      } 
      if(i >= 1){
        cout << "\t\t" << dataA[i][j] << "\t" << endl;
      }
    }
    cout << endl;
  }
}

int main(){
  BaseProject base;
  base.output();
  return 0;
}