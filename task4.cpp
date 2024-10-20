#include <iostream>
using namespace std;
int dots(int num);
main()
{
    int num;
    cout << "Enter the number of triangle:";
    cin >> num;
    int result = dots(num);
    cout << result;
}
int dots(int num)
{
    int r;
    r = (num * (num + 1)) / 2;
    return r;
}