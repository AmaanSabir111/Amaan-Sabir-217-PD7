#include <iostream>
using namespace std;
void CountCargo(int cargo);
main()
{
    int cargo;
    cout << "Enter the count of cargo for transportation:";
    cin >> cargo;
    CountCargo(cargo);
}
void CountCargo(int cargo)
{
    float count,tT=0;
    float mini=0,truck=0,train=0;
    for (int i = 1; i <= cargo; i++)
    {
        cout << "Enter the tonnage of cargo" << i <<":"<< endl;
        cin >> count;
        if (count <= 3)
        {
            mini += count;
        }
        if (count >3&&count<=11)
        {
            truck += count;
        }
        if (count >11)
        {
            train += count;
        }
        tT=mini+train+truck;
    }
    cout<<((mini*200)+(truck*175)+(train*120))/tT<<endl;
    cout<<(mini/tT)*100<<"%"<<endl;
    cout<<(truck/tT)*100<<"%"<<endl;
    cout<<(train/tT)*100<<"%"<<endl;

}