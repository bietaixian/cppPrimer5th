//#include <iostream>
//#include <string>
//using std::string;
//using std::cout;
//using std::endl;
//bool str_subrange(const string &str1, const string &str2)
//{
//    if (str1.size() == str2.size())
//    {
//        return str1 == str2;
//    }
//    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
//    for (decltype(size) i = 0;i != size;++i)
//    {
//        if (str1[i] != str2[i])
//        {
//            return;  //1>g:\cpp projects\c++ primer 5th\第六章\第六章\6.30.cpp(17): error C2561: “str_subrange”: 函数必须返回值
//        }
//    }
//}
//int main()
//{
//    string str1 = "str";
//    string str2 = "str1";
//    bool ret;
//    ret = str_subrange(str1, str2);
//    cout << ret << endl;
//    system("pause");
//    return 0;
//}