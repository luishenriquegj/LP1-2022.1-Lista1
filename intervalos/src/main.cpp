

#include <iostream>
#include <vector>
#include "func.hpp"

#include <iomanip>
using std::setprecision;
using namespace std;
int main(void)
{

    int x, z = 0;
    float input = 0;
    float cont_num = 0;

    vector<float> intervalos;
    vector<float> valores;

    for (int i = 0; i < 5; i++)
    {
        std::cin >> input;
        intervalos[i] = input;
    }

    while (std::cin >> std::ws >> x)
    {
        z++;
        valores[z] = x;
        cont_num++;
        std::cout << valores[z] << std::endl;
    }
    func(intervalos, valores, cont_num);

    return 0;
}