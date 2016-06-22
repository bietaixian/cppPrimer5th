//#include <string>
//typedef std::string Type;
//Type initVal(); // use `string`
//class Exercise {
//public:
//    typedef double Type;
//    Type setVal(Type); // use `double`
//    Type initVal(); // use `double`
//private:
//    int val;
//};
//
////下面的错误.
//Type Exercise::setVal(Type parm) {  // first is `string`, second is `double`
//    val = parm + initVal();     // Exercise::initVal()
//    return val;
//}
////改为
//Exercise::Type Exercise::setVal(Type parm) {  // first is `string`, second is `double`
//    val = parm + initVal();     // Exercise::initVal()
//    return val;
//}