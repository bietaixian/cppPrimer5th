
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
    cout << "����������:" << endl;
    cin >> n;
    cout << "���Ϊ" << endl;
    hanoi(n, "1��", "2��", "3��");
    system("pause");
    return 0;
}