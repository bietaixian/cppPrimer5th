//第一个参数是一个作为查找范围的一个string对象,并且并不需要通过函数来改变string对象的值,所以定义为const string &

//第二个参数是一个要找的字符,并且将c定义为char而并非char&是因为并不需要通过形参值来改变实参的值 实参的值在调用函数时就已经
//规定好了(可以是任何字符,比如这次要找的是s字符,下次也可以是o字符)

//第三个参数是用于计算字符出现的次数,需要不停的计算(即不停的改变形参值),所以定义为普通引用.

//在此例中令s为普通引用的结果与令s为常量引用的结果是一样的,但如果将occurs定义为常量引用将发生错误,const string::size_type& 无法转换成
//string::size_type&