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

using namespace std;

vector<vector<int>> get_int_matrix_from_double_matrix(vector<vector<double>> double_matrix)
{

	vector<vector<int>> int_matrix(double_matrix.size(), vector<int>(double_matrix[0].size()));
	
	for (int y = 0; y < double_matrix.size(); y ++)
	{
		for (int x = 0; x < double_matrix[y].size(); x ++)
		{
			double_matrix[x][y] = double_matrix[x][y] * 1000; // scale up matrix data
			int_matrix[x][y] = static_cast<int> (double_matrix[x][y]);
		}
	}
	
	return int_matrix;
}

int main(){

/*
    vector<vector<int>> img(1920, vector<int>(1080));

    matrix_randomizer(img);
    
    write_pgm(img, "img.pgm");
*/

	vector<vector<double>> weights = dpkg("networks/untrained_Input_weights.txt");
	vector<vector<int>> pgm_matrix = get_int_matrix_from_double_matrix(weights);
	
	print_matrix(pgm_matrix);

    return 0;
}
//ssssssssssssssssssssssssssssssssss
