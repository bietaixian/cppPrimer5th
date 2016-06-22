//#include <iostream>
//#include <string>
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//using std::cerr;
//struct Sales_data
//{
//    std::string bookNo;
//    double Total_price;
//    unsigned units_sold;
//    unsigned sales;
//};  
//int main()
//{
//    Sales_data total;
//    if (cin >> total.bookNo >> total.units_sold >> total.sales)
//    {
//        Sales_data trans;
//        while (cin>>trans.bookNo>>trans.units_sold>>trans.sales)
//        {
//            if (total.bookNo == trans.bookNo)
//            {
//                total.sales += trans.sales;
//            }
//            else
//            {
//                cout << total.bookNo << " " << total.units_sold << " " << total.sales << endl;
//                total = trans;
//            }
//            cout << total.bookNo <<" "<< total.units_sold <<" "<< total.sales << endl;
//        }
//    }
//    else
//    {
//        cerr << "NO data?!" << endl;
//        return -1;
//    }
//    return 0;
//}