#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item total;
    if (std::cin>>total)
    {
        Sales_item trans;
        int cnt=1;
        while (std::cin>>trans)
        {
            if (total.isbn() == trans.isbn())
            {
                total += trans;
                ++cnt;
            }else
            {
                std::cout<<total<<std::endl;
                std::cout<<cnt<<std::endl;
                total=trans;
                cnt=1;
            }
                std::cout<<total<<std::endl;
                std::cout<<cnt<<std::endl;
        }
    }
    else
    {
        std::cerr <<"NO DATA?!"<<std::endl;
        system("pause");
        return -1;
    }
}
