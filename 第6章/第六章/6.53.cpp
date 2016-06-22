//(a)
//int calc(int&, int&); // calls calc(int&,int&)
//int calc(const int&, const int&); // calls calc(const int&,const int&)
//
//(b)
//int calc(char*, char*); // calls calc(char*,char*)
//int calc(const char*, const char*); //calls calc(const char *,const char*)
//
//(c)不合法,都调用calc(char*,char*)