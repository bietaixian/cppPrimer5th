////example.h
//#include <iostream>
//#include <vector>
//using std::vector;s
//class Example {
//public:
//    static double rate = 6.5;  
//    static const int vecSize = 20;
//    static vector<double> vec(vecSize);
//};
////example.C
//#include "example.h"
//double Example::rate;
//vector<double> Example::vec;
//
//Right:wg 
////example.h
//class Example {
//public:
//    static constexpr double rate=6.5;
//    static const int vecSize = 20;
//    static vector<double> vec;
//};
////example.Cpp
//#include "example.h"
//constexpr double Example::rate;
//vector<double> Example::vec(vecSize);
//
