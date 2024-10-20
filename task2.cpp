#include <iostream>
using namespace std;
void upper1(int rows);
void upper2(int rows);
main()
{
    int rows;
    cout << "Enter desired number of rows:";
    cin >> rows;
    upper1(rows);
    upper2(rows);
}
void upper1(int rows)
{
    for (int i = 1; i <= rows / 2; i++)
    {
        for (int j = rows / 2; j >= i; j--)
        {
            
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    
}
void upper2(int rows)
{
    for (int i = 1; i <= rows / 2; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
       for(int j=rows/2;j>=i;j--){
        cout<<"*";

       }
       cout<<endl;
    }
    
}