#include <iostream>
using namespace std;

class BaseProject{
  public:
    void input();
    void proses();
    void output();
  private:
    string nimA[5], namaA[5], nimB[5], namaB[5], nimC[5], namaC[5], dataA[5][2], dataB[5][2], dataC[5][2];
};


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


void BaseProject::proses(){
  //Kelas A
  int k = 0;
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 2; j++){
      if (j == 0){
        dataA[i][j] = nimA[k];
      }
      else{
        dataA[i][j] = namaA[k];
      }
    }
    k++;
  }
  //Kelas B
  k = 0;
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 2; j++){
      if (j == 0){
        dataB[i][j] = nimB[k];
      }
      else{
        dataB[i][j] = namaB[k];
      }
    }
    k++;
  }
  //Kelas C
  k = 0;
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 2; j++){
      if (j == 0){
        dataC[i][j] = nimC[k];
      }
      else{
        dataC[i][j] = namaC[k];
      }
    }
    k++;
  }
}

void BaseProject::output(){
  cout << "Tampilan tabel menggunakan array 1d : " << endl << endl;
  cout << "Kelas\t" << "NIM\t\t\t" << "NAMA\t" << endl;
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
  cout << "Kelas\t" << "NIM\t\t\t" << "NAMA\t" << endl;
  //kelas A
  cout << " A\t";
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 2; j++){
      if (i == 0){
        cout << "\t" << dataA[i][j];
      } 
      if(i >= 1){
        if(j == 0){
          cout << "\t\t" << dataA[i][j];
        }
        else{
          cout << "\t" << dataA[i][j];
        }
      }
    }
    cout << endl;
  }
  //kelas B
  cout << " B\t";
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 2; j++){
      if (i == 0){
        cout << "\t" << dataB[i][j];
      } 
      if(i >= 1){
        if(j == 0){
          cout << "\t\t" << dataB[i][j];
        }
        else{
          cout << "\t" << dataB[i][j];
        }
      }
    }
    cout << endl;
  }
  //kelas C
  cout << " C\t";
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 2; j++){
      if (i == 0){
        cout << "\t" << dataC[i][j];
      } 
      if(i >= 1){
        if(j == 0){
          cout << "\t\t" << dataC[i][j];
        }
        else{
          cout << "\t" << dataC[i][j];
        }
      }
    }
    cout << endl;
  }
}