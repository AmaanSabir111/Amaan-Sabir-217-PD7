#include <iostream>
using namespace std;
bool primeNumber(int num);
int primorial(int num);
main()
{
    int num;
    cout << "Enter Number:";
    cin >> num;
    int result=primorial(num);
    cout<<result;
}
bool primeNumber(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int primorial(int num)
{
    int r = 1;
    int c = 0;
    int n = 2;
    while(c<num){
        if(primeNumber(n)){
            r*=n;
            c++;
        }
        n++;
    }
    return r;
}