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
//        cout << "�κε��ʶ�û���������ֹ�" << endl;
//    }
//    else
//    {
//        cout << "����" << MaxCnt_str << "�������" << '\n'
//            << "����" << MaxCnt+1 << "��" << endl;
//    }
//    system("pause");
//    return 0;
//}