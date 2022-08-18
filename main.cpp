#include <iostream>
#include <vector>

#include "write_pgm.h"
#include "write_ppm.h"
#include "read_file.h"
#include "PGM.h"
#include "matrix_randomizer.h"
#include "print_vector.h"
#include "print_matrix.h"
#include "dpkg.h"
#include "get_int_matrix_from_double_matrix.h"
#include "repack_pgm.h"

using namespace std;



int main(){

/*
    vector<vector<int>> img(1920, vector<int>(1080));

    matrix_randomizer(img);
    
    write_pgm(img, "img.pgm");
*/

	vector<vector<double>> weights = dpkg("networks/untrained_Input_weights.txt");
	
	repack_pgm(weights, "file.pgm");
	
    return 0;
}
//sssssssssssssssssssssssssssssssssssss
