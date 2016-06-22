//当然是方便理解了。
//vector<int>vec = 10;
////上面的VECTOR你可能理解成vec[0]=10，也可能理解成vec有个10个元素，每个元素初始值是0。这是非常模糊的！
////而将vector定义成explicit显然有助于理解 例如：vector<int>vec(10,0) 你一看便知vec有10个元素，每个元素的值为0
////至于为什么没有将string定义成explicit 看下面例子
//string str = "aaa";//我们当然知道他是什么意思了，一看便知
//
