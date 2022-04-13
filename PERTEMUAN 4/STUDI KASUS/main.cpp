#include <iostream>
#include <fstream>
//#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"

int main(){

	Proses proses;
	proses.cetak();
	proses.toFile();

	Output output;
	output.cetak();
  output.getData();

	return 0;
}
