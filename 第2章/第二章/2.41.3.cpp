#include <iostream>
#include <string>
struct Sales_data
{
    std::string bookNo;
    double Total_price;
    unsigned units_sold;
    double price;
    //...
};  
int main()
{
    Sales_data total;
    if (std::cin >> total.bookNo && std::cin>> total.units_sold && std::cin >> total.Total_price)
    {
        
        Sales_data trans;
        while (std::cin>> trans.bookNo && std::cin>> trans.units_sold && std::cin>>trans.Total_price)
        {
            if (total.bookNo == trans.bookNo)
            {
                 
                 
                 total.Total_price += trans.Total_price;
                 total.units_sold += trans.units_sold;
                 
            }
            else
            {
                 std::cout <<total.bookNo <<" "<<total.units_sold <<" " <<total.Total_price<<std::endl;
                 total.bookNo=trans.bookNo;
                 total.Total_price=trans.Total_price;
                 total.units_sold=trans.units_sold;
            }
        }
        std::cout <<total.bookNo <<" "<<total.units_sold <<total.Total_price<<std::endl;
        system("pause");
        return 0;
    }
    else
    {
        std::cerr <<"NO DATA?!" << std::endl;
        system("pause");
        return -1;
        
    }
}
