//#include <iostream>
//#include <string>
//using std::cin;
//using std::cout;
//using std::string;
//using std::endl;
//int main()
//{
//    string rsp;
//    
//    do {
//        cout << "please enter two strings:" << endl;
//        string str1, str2;
//        cin >> str1;
//        cin >> str2;
//        if (str1.size()<str2.size())
//        {
//            cout << "the shortest string is " << str1 << endl
//                << "More? Enter yes or no: ";
//            cin >> rsp;
//        }
//        else if (str1.size() == str2.size())
//        {
//            cout << "str1 and str2 have the same length" << endl
//                << "More? Enter yes or no: ";
//            cin >> rsp;
//        }
//        else
//        {
//            cout << "the shortest string is " << str2 << endl
//                << "More? Enter yes or no: ";
//            cin >> rsp;
//        }
//    } while (!rsp.empty() && rsp[0] == 'y');
//
//
//    system("pause");
//    return 0;
//}