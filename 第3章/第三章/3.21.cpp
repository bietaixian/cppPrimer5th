//#include <iostream>
//#include <vector>
//#include <string>
//using std::vector;
//using std::cout;
//using std::endl;
//using std::string;
//int main()
//{
//    vector<int> v1;
//    cout << "v1=";
//    for (auto it1 = v1.cbegin();it1 != v1.cend();++it1) {
//            cout << *it1 << ",";
//    }
//    cout  << endl;
//    vector<int> v3(10,42);  
//    cout << "v3=";
//    for (auto it3 = v3.cbegin();it3 != v3.cend();++it3) {
//        cout << *it3 << ",";
//        
//    }
//    cout << "\b " << endl;
//    vector<int> v5{10,42}; 
//    cout << "v5=";
//    for (auto it5 = v5.cbegin();it5 != v5.cend();++it5) {
//        cout << *it5 << ",";
//
//    }
//    cout << "\b " << endl;
//    vector<string> v7(10,"hi"); 
//    cout << "v7=";
//    for (auto it7 = v7.cbegin();it7 != v7.cend();++it7) {
//        cout << *it7 << ",";
//
//    }
//    cout << "\b " << endl;
//    vector<int> v2(10);   
//    cout << "v2=";
//    for (auto it2 = v2.cbegin();it2 != v2.cend();++it2) {
//        cout << *it2 << ",";
//
//    }
//    cout << "\b " << endl;
//    vector<int> v4{10};  
//    cout << "v4=";
//    for (auto it4 = v4.cbegin();it4 != v4.cend();++it4) {
//        cout << *it4 << ",";
//
//    }
//    cout << "\b " << endl;
//    vector<string> v6{10};  
//    cout << "v6=";
//    for (auto it6 = v6.cbegin();it6 != v6.cend();++it6) {
//        if (it6 -> empty())
//        {
//            cout << "null" << ",";
//        }
//        else
//        {
//            cout << *it6 << ",";
//        }
//
//    }
//    cout << "\b " << endl;
//    system("pause");
//}