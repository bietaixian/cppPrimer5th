//unsigned buf_size = 1024;合法
//int ia[buf_size]; 不合法 buf_size不是常量表达式
//int ia[4 * 7 - 14];合法
//int ia[txt_size()];不合法,txt_size()必须是常量表达式
//char st[11] = "fundamental";不合法 字符串有结束空字符.维度应该是12.