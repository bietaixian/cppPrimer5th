//#include <iostream>
//#include <string>
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;
//void have_upper(const string&s)
//{
//    for (auto a : s)
//    {
//        if (a == toupper(a))
//        {
//            cout << s << " have upper case letter" << endl;
//            break;
//        }
//    }
//}
//void to_upper(string &s)
//{
//    for (auto &a : s)
//    {
//        a = tolower(a);
//        cout << a;
//    }
//}
//int main()
//{
//    string s("STRING");
//    have_upper(s);
//    to_upper(s);
//    system("pause");
//    return 0;
//}
////不同,第一个用的是const string&,因为不需要通过函数来改变实参的值,而第二个则需要通过函数将string对象全部改成小写