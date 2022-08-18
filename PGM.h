#include <vector>
#include <string>

struct PPM
{
    std::vector<std::vector<unsigned int>> matrix;
    std::string header;
    int resolution[2] = {1920, 1080};

    PPM(std::vector<std::vector<unsigned int>> matrix)
    {
        this->matrix = matrix;
    }
};