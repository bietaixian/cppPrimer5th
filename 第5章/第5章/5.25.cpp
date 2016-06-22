//#include <iostream>
//#include <stdexcept>
//using std::runtime_error;
//using std::cout;
//using std::cin;
//using std::endl;
//int main()
//{
//    int i1, i2;
//    cout << "please input two numbers" << endl;
//    while (cin>>i1>>i2)
//    {
//        try
//        {
//            if (i2 == 0)
//            {
//                throw runtime_error("除数不能为0!");
//            }
//            cout << i1 / i2 << endl;
//            cout << "please input two numbers" << endl;
//        }
//        catch (runtime_error err)
//        {
//            cout << err.what()
//                << "\nTry Again?Enter y or n" << endl;
//            char c;
//            cin >> c;
//            if (!cin || c == 'n')
//            {
//                break;
//            }
//        }
//    }
//
//
//
//    system("pause");
//    return 0;
//}
