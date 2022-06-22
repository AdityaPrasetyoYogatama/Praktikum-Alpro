#include "../base.h"

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


int main(){
  BaseProject base;
  base.proses();
  return 0; 
}