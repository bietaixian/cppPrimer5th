//#include <iostream>
//#include <string>
//using std::cout;
//using std::cin;
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
//    Sales_data total;
//    if (cin >> total.bookNo && cin>> total.units_sold && cin >> total.Total_price)
//    {
//        
//        Sales_data trans;
//        while (cin>> trans.bookNo && cin>> trans.units_sold && cin>>trans.Total_price)
//        {
//            if (total.bookNo == trans.bookNo)
//            {
//                 
//                 
//                 total.Total_price += trans.Total_price;
//                 total.units_sold += trans.units_sold;
//                 
//            }
//            else
//            {
//                 cout <<total.bookNo <<" "<<total.units_sold <<" " <<total.Total_price<<endl;
//                 total.bookNo=trans.bookNo;
//                 total.Total_price=trans.Total_price;
//                 total.units_sold=trans.units_sold;
//            }
//        }
//        cout <<total.bookNo <<" "<<total.units_sold <<total.Total_price<<endl;
//        system("pause");
//        return 0;
//    }
//    else
//    {
//        cerr <<"NO DATA?!" << endl;
//        system("pause");
//        return -1;
//        
//    }
//}
