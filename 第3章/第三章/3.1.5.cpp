//#include <iostream>
//#include <string>
//using std::cout;
//using std::cin;
//using std::endl;
//using std::cerr;
//using std::string;
//struct Sales_data
//{
//    string bookNo;
//    double Total_price;
//    unsigned units_sold;
//    double price;
//    //...
//};  
//int main()
//{
//    Sales_data book1,book2;
//    cin>> book1.bookNo >> book1.price >> book1.units_sold;
//    cin>> book2.bookNo >> book2.price >> book2.units_sold;
//    book1.Total_price=book1.price * book1.units_sold;
//    book2.Total_price=book2.price * book2.units_sold;
//    if (book1.bookNo==book2.bookNo)
//    {
//        double Totalprice=book1.Total_price+book2.Total_price;
//        unsigned totalCnt=book1.units_sold+book2.units_sold;
//        cout << Totalprice <<" "<< totalCnt <<endl;
//        if (totalCnt != 0)
//        {
//            cout << Totalprice/totalCnt <<endl;
//        }
//        else
//        {
//            cout <<"no sales" <<endl;
//        }
//            system("pause");
//            return 0;
//    }
//    else
//    {
//        cerr << "Data must refer to same ISBN" << endl;
//        system("pause");
//        return -1;
//    }
//}
