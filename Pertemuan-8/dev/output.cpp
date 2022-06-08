#include "../base.h"
void BaseProject::output(){
  cout<<"------------------------------------------------------------------"<<endl;
  cout<<"|      Jenis buku     ||      Judul buku     ||      Penulis     ||"<<endl;
  cout<<"------------------------------------------------------------------"<<endl;
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 3; j++){
      cout << "|\t" << buku[i][j] << "\t|";
    }
    cout<<endl<<"------------------------------------------------------------------"<<endl;
  }
  input();
  proses();
  cout << "Jenis buku : " << jenis << endl;
  cout << "Judul buku : " << judul << endl;
  cout << "Penulis    : " << penulis << endl;
  cout << "=======================================================";
}

int main(){
  BaseProject base;
  base.output();
  return 0;
  }