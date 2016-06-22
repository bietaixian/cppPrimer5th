//#include <iostream>
//#include <string>
//#include <vector>
//using std::cout;
//using std::cin;
//using std::endl;
//using std::vector;
//using std::string;
//int main()
//{
//    string str,MaxCnt_str;
//    vector<string> s;
//    int Cnt = 0, MaxCnt = 0;
//    while (cin>>str)
//    {
//        s.push_back(str);
//    }
//    for (int i = 0; i < s.size()-1; i++)
//    {
//        
//        if (s[i] == s[i+1])
//        {
//                    ++Cnt;
//                    if (MaxCnt<Cnt)
//                    {
//                        MaxCnt = Cnt;
//                        MaxCnt_str = s[i];
//                    }
//        }
//        else
//        {
//            Cnt = 0;
//        }
//    }
//
//    if (MaxCnt == 1)
//    {
//        cout << "任何单词都没有连续出现过" << endl;
//    }
//    else
//    {
//        cout << "单词" << MaxCnt_str << "出现最多" << '\n'
//            << "出现" << MaxCnt+1 << "次" << endl;
//    }
//    system("pause");
//    return 0;
//}