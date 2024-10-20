#include <iostream>
using namespace std;
void Amplify(int num);
main(){
    int num;
    cout<<"Enter the number to Amplify:";
    cin>>num;
    Amplify(num);
}
void Amplify(int num){
    for(int i=1;i<=num;i++){
         cout<<(i%4==0?i*10:i)<<",";
       
       
    }

}