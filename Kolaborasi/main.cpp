#include <iostream>
#include <fstream>
#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"

int main() {
  Input input;
  input.cetak();
  input.perulangan();
  input.toFile();
  
  Proses proses;
  proses.getFile();
  proses.Hitung();
  proses.cetak();
  proses.toFile();

  Output output;
  output.getData();
  output.cetak();
  output.struk();
  return 0;
}