//int *ptr;
//vector<int> vec;
//int ival;
//1.prt != 0 && *ptr++;//检查ptr是否为空指针以及*ptr的值
//2.ival++ && ival;//检查左边ival是否为0以及ival+1是否为0
//3.vec[ival++] <= vec[ival]//错误,未定义的行为
////正确方式
//vec[ival] <= vec[ival + 1];
