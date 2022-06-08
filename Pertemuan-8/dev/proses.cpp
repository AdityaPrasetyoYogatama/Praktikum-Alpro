#include "../base.h"

void BaseProject::proses(){
  for (int i = 0; i < 9; i++){
    for (int j = 0; j < 3; j++){
      if (cari == buku[i][j]){
        jenis = buku[i][j-1];
        judul = buku[i][j];
        penulis = buku[i][j+1];
      }
    }
  }
}

int main(){
  BaseProject base;
  base.proses();
  return 0; 
  }