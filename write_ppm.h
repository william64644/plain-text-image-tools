#pragma once

#include <vector>

#include "write_file.h"

using namespace std;

// The most outer layer of the data 3D vector will always have exactly 3 matrices,
// each one containing a map for RGB the values

void write_ppm(vector<vector<vector<int>>> data, string output_file)
{
    vector<string> output(data[0].size());
    for (unsigned int row = 0; row < data[0].size(); row++)
    {
        for (unsigned int column = 0; column < data[0][row].size(); column++)
        {
            for (unsigned int color_index = 0; color_index < 3; color_index ++)
            {
                output[row] = output[row] + to_string(data[color_index][row][column]) + ' ';
            }
            
        }
    }

    string header = "P3\n" + to_string(data[0][0].size()) + " " + to_string(data[0].size()) + "\n255";

    output.insert(output.begin(), header);
    
    write_file(output, output_file);
}