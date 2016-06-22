////形参:比如你定义一个函数void add（int a, int b），这里的a和b就是形参, 形参是局部变量
////局部变量:形参和函数体内部定义的变量,仅在函数的作用域内可见,局部变量还会隐藏在外层作用域中同名的其他所有声明中
////局部静态变量:某些时候,有必要令局部变量的生命周期贯穿函数调用及之后的时间,可以将局部变量定义成stasic类型.
////            此变量在程序的执行路径第一次经过对象定义语句时初始化,并且直到程序终止才被销毁,在此期间即使
////            对象所有的函数结束也不会对它有影响
//size_t count_add(int n)       // n is a parameter.
//{
//    static size_t ctr = 0;    // ctr is a static variable.
//    ctr += n;
//    return ctr;
//}
//
//int main()
//{
//    for (size_t i = 0; i != 10; ++i)  // i is a local variable.
//        cout << count_add(i) << endl;
//
//    return 0;
//}