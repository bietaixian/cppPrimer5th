#include <iostream>
using namespace std;
int main()
{
    double  i1, j1, k1, l1;
    for (size_t i = 0; i != 371; i++)
    {
        i1 = i + 10;
        for (size_t j = 0; i != 371; j++) {
            j1 = j - 20;
            for (size_t k = 0;i != 371;k++) {
                k1 = k * 2;
                for (size_t l = 0;i != 371 ;l++) {
                    l1 = l / 2;
                }
            }
        }
        if (i1 + j1 + k1 + l1 == 370)
        {
            cout << "i1";
        }
        system("pause");
    }
}