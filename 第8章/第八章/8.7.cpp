//#include <fstream>
//#include <iostream>
//#include "CP5_7_26.h"
//using std::ifstream;
//using std::cout;
//using std::endl;
//using std::cerr;
//using std::ofstream;
//int main(int argc, char **argv)
//{
//    ifstream input(argv[1]);
//    ofstream out(argv[2]);
//    Sales_data total;
//    if (read(input, total)) {
//        Sales_data trans;
//        while (read(input, trans)) {
//            if (total.isbn() == trans.isbn())
//                total.combine(trans);
//            else {
//                print(out, total) << endl;
//                total = trans;
//            }
//        }
//        print(out, total) << endl;
//    }
//    else {
//        cerr << "No data?!" << endl;
//    }
//
//    return 0;
//}