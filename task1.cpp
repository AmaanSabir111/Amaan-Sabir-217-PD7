#include<iostream>
using namespace std;
void diamond(int rows);
main(){
    int rows;
    cout<<"Enter the desired number of rows:";
    cin>>rows;
    diamond(rows);

}
void diamond(int rows){
    for(int i=1;i<=rows;i++){
        for(int j=rows;j>=i;j--){
            cout<<"*";
            
        }
        cout<<endl;
        
    }
}