//#include <iostream>
//#include <string>
//using std::cin;
//using std::string;
//using std::cout;
//using std::endl;
//using std::cerr;
//struct Sales_data
//{
//    std::string bookNo;
//    double Total_price;
//    unsigned units_sold;
//    double price;
//    Sales_data &combine(const Sales_data &rhs)
//    {
//        Total_price += rhs.Total_price;
//        units_sold += rhs.units_sold;
//        return *this;
//    }
//     string isbn() const
//    {
//        return bookNo;
//    }
//};  
//int main()
//{
//    Sales_data total;
//    if (cin >> total.bookNo  >> total.units_sold  >> total.price)
//    {
//        Sales_data trans;
//        while (cin >> trans.bookNo  >> trans.units_sold >> trans.price)
//        {
//            if (total.isbn() == trans.isbn())
//            {
//                total.combine(trans);
//            }
//            else
//            {
//                cout << total.bookNo << " " << total.units_sold << " " << total.price << endl;
//                total = trans;
//            }
//        }
//        cout << total.bookNo << " " << total.units_sold << " " << total.price << endl;
//    }
//    else
//    {
//        cerr << "No Data?!" << endl;
//    }
//    system("pause");
//    return 0;
//}