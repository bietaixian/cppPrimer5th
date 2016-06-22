//#include <iostream>
//#include <vector>
//using std::vector;
//using std::cin;
//using std::cout;
//using std::endl;
//int main()
//{
//    vector<int> v1{ 0,1,1,2 };
//    vector<int> v2{ 0,1,1};
//    if (v1.size() < v2.size())
//    {
//        for (decltype(v1.size()) i = 0; i != v1.size(); ++i)
//        {
//            if (v1[i] != v2[i])
//            {
//                cout << "v1不是v2的前缀!" << endl;
//                break;
//            }
//            if (i == v1.size() - 1) cout << "v1是v2的前缀!" << endl;
//        }
//
//    }
//    else
//    {
//        for (size_t ii = 0; ii != v2.size(); ++ii)
//        {
//            if (v1[ii] != v2[ii])
//            {
//                cout << "v2不是v1的前缀!" << endl;
//                break;
//            }
//            if (ii == v2.size() - 1) cout << "v2是v1的前缀!" << endl;
//        }
//
//    }
//
//
//    system("pause");
//    return 0;
//}