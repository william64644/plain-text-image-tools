#pragma once

#include <vector>

#include "write_file.h"

using namespace std;

void write_pgm(vector<vector<int>> data, string output_file)
{
    vector<string> output(data.size());
    for (unsigned int row = 0; row < data.size(); row++)
    {
        for (unsigned int column = 0; column < data[row].size(); column++)
        {
            output[row] = output[row] + to_string(data[row][column]) + ' ';
        }
    }

    string header = "P2\n" + to_string(data.size()) + " " + to_string(data[0].size()) + "\n255";

    output.insert(output.begin(), header);

    write_file(output, output_file);
}