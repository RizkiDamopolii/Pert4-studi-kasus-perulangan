#include <iostream>
#include <fstream>
#include "../library/proses.h"
int main (){
  Proses proses;
  proses.getFile();
  proses.Hitung();
  proses.cetak();
  proses.toFile();
}