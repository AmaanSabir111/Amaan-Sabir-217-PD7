#include <iostream>
using namespace std;
bool prime(int num);
int i;
main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    bool result=prime(num);
    cout<<result;
    

}
bool prime(int num){
    for( i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
        

    }
    return 1;
}