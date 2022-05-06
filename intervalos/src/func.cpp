#include "func.hpp"
#include <iostream>
#include <vector>
#include <iomanip>

using std::setprecision;
using namespace std;

float *func(vector<float> intervalos, vector<float> valores, float cont_num)
{

    float resp1, resp2, resp3, resp4, resp5;
    float cont_fora = 0, cont_1 = 0, cont_2 = 0, cont_3 = 0, cont_4 = 0;
    auto t = intervalos.size();
    auto o = valores.size();

    for (int u = 0; u < (int)t; u++)
    {
        for (int i = 0; i < (int)o; ++i)
        {

            if ((valores[i] >= intervalos[0]) && (valores[0] < intervalos[1]))
            {
                cont_1++;
            }
            else if ((valores[i] >= intervalos[1]) && (valores[0] < intervalos[2]))
            {
                cont_2++;
            }
            else if ((valores[i] >= intervalos[2]) && (valores[0] < intervalos[3]))
            {
                cont_3++;
            }
            else if ((valores[i] >= intervalos[3]) && (valores[0] < intervalos[4]))
            {
                cont_4++;
            }
            else
            {
                cont_fora++;
            }
        }
    }
    resp1 = (cont_1 * 100) / cont_num;
    resp2 = (cont_2 * 100) / cont_num;
    resp3 = (cont_3 * 100) / cont_num;
    resp4 = (cont_4 * 100) / cont_num;
    resp5 = (cont_fora * 100) / cont_num;

    std::cout << "[" << intervalos[0] << "," << (int)intervalos[1] << "[ =" << std::fixed << std::setprecision(4) << resp1 << "\n"
              << "[" << intervalos[1] << "," << (int)intervalos[2] << "[ =" << std::fixed << std::setprecision(4) << resp2 << "\n"
              << "[" << intervalos[2] << "," << (int)intervalos[3] << "[ =" << std::fixed << std::setprecision(4) << resp3 << "\n"
              << "[" << intervalos[3] << "," << (int)intervalos[4] << "[ =" << std::fixed << std::setprecision(4) << resp4 << "\n"
              << "outros=" << resp5
              << endl;
    return 0;
}