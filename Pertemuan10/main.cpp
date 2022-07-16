#include <iostream>
using namespace std;

class Mhs{
  public:
    void rantai();
    char Nama[30];
    char Nim[10];
    Mhs *berikut;
};

void Mhs::rantai(){
  //input & proses
  cout << "-------------- Input data mahasiswa --------------" << endl;
  Mhs *Ptr_Akhir = NULL;
  Mhs *Ptr_Baru;
  char lagi;
  do{
    Ptr_Baru = new Mhs;
    cout << "\nNama Mahasiswa : ";
    cin >> Ptr_Baru->Nama;
    cout << "Nim Mhs : ";
    cin >> Ptr_Baru->Nim;
    Ptr_Baru->berikut = Ptr_Akhir;
    Ptr_Akhir = Ptr_Baru;
    cout << "Tambah (y/t) : "; cin >> lagi;
  }while (lagi != 't');
  cout << endl << "-------------- Daftar Finalis Lomba --------------" << endl;
  Mhs *cetak = Ptr_Akhir;
  //output
  while (cetak != NULL) {
  cout << "\nNama Mahasiswa : " << cetak->Nama;
  cout << "\tNIM Mahasiswa : " << cetak->Nim;
  cetak = cetak->berikut;
  }
  cout << endl << endl << "---------------------------------------------------" << endl;
}

int main(){
  Mhs *simpul;
  simpul->rantai();
  cout << endl;
}