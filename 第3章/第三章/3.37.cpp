//#include <iostream>
//using std::cout;
//using std::endl;
//int main()
//{
//    //错误,应该在最后加上空字符结束,否则指针会沿着cp在内存中位置一直寻找 直至遇到空字符才停止.
//    const char ca[] = { 'h','e','l','l','o' };
//    const char *cp = ca;
//    while (*cp)
//    {
//        cout << *cp << endl;
//        ++cp;
//    }
//    system("pause");
//}
