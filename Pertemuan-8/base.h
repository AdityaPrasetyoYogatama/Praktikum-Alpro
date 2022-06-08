#include <iostream>
using namespace std;

class BaseProject{
  public:
    void input(); 
    void proses();
    void output();
  private:
    string buku[9][3], cari;
};

void BaseProject::input(){
  cout << "========================== Input Buku ============================" << endl;
  for (int i = 0; i < 9; i++){
    for (int j = 0; j < 3; j++){
      if (j == 0){
        cout << "Masukkan jenis buku ke-" << i + 1 << " : "; cin >> buku[i][j];
      }
      else if(j == 1){
        cout << "Masukkan judul buku ke-" << i + 1 << " : "; cin >> buku[i][j];
      } 
      else if(j == 2){
        cout << "Masukkan penulis buku ke-" << i + 1 << " : "; cin >> buku[i][j];
      }
    }
    cout <<"------------------------------------------------------------------"<<endl;
  }
}

void BaseProject::proses(){
  for (int i = 0; i < 9; i++){
    for (int j = 0; j < 3; j++){
      if (cari == buku[i][j]){
        cout << "Jenis buku : " << buku[i][j-1] << endl;
        cout << "Judul buku : " << buku[i][j] << endl;
        cout << "Penulis    : " << buku[i][j+1] << endl;
        cout <<"------------------------------------------------------------------"<<endl;
      }
    }
  }
}

void BaseProject::output(){
  cout<<"------------------------------------------------------------------"<<endl;
  cout<<"|      Jenis buku     ||      Judul buku     ||      Penulis      |"<<endl;
  cout<<"------------------------------------------------------------------"<<endl;
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 3; j++){
      cout << "|\t" << buku[i][j] << "\t|";
    }
    cout<<endl<<"------------------------------------------------------------------"<<endl;
  }
  cout << "Masukkan judul buku yang ingin dicari : "; cin >> cari;
  cout <<"------------------------------------------------------------------"<<endl;
  proses();
}