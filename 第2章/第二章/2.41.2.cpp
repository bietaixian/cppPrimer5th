//#include <iostream>
//#include <string>
//
//struct Sales_data
//{
//    std::string bookNo;
//    double Total_price;
//    unsigned units_sold;
//    double price;
//    //...
//};  
//int main()
//{
//    Sales_data book1,book2;
//    std::cin>> book1.bookNo >> book1.price >> book1.units_sold;
//    std::cin>> book2.bookNo >> book2.price >> book2.units_sold;
//    book1.Total_price=book1.price * book1.units_sold;
//    book2.Total_price=book2.price * book2.units_sold;
//    if (book1.bookNo==book2.bookNo)
//    {
//        double Totalprice=book1.Total_price+book2.Total_price;
//        unsigned totalCnt=book1.units_sold+book2.units_sold;
//        std::cout << Totalprice <<" "<< totalCnt <<std::endl;
//        if (totalCnt != 0)
//        {
//            std::cout << Totalprice/totalCnt <<std::endl;
//        }
//        else
//        {
//            std::cout <<"no sales" <<std::endl;
//        }
//            system("pause");
//            return 0;
//    }
//    else
//    {
//        std::cerr << "Data must refer to same ISBN" << std::endl;
//        system("pause");
//        return -1;
//    }
//}
