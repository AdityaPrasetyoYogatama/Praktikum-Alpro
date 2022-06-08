#include "../base.h"

void BaseProject::input(){
  cout << endl << "=======================================================" << endl;
  cout << "Masukkan judul buku yang ingin dicari : "; getline(cin, cari);
  cout << "=======================================================" << endl;
}

int main(){
  BaseProject base;
  base.input();
  return 0;
  }