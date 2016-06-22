
#include<iostream>
#include<string>
using namespace std;
void hanoi(int n, string a, string b, string c)
{
    if (n == 1)
        cout << n << " " << a << " " << c << endl;
    else
    {
        hanoi(n - 1, a, c, b);
        cout << n << " " << a << " " << c << endl;
        hanoi(n - 1, b, a, c);
    }
}
int main()
{
    int n;
    cout << "输入正整数:" << endl;
    cin >> n;
    cout << "结果为" << endl;
    hanoi(n, "1号", "2号", "3号");
    system("pause");
    return 0;
}