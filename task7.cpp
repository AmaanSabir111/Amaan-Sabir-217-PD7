#include <iostream>
using namespace std;
void day(int days);
main(){
    int days,day1,day2,day3,day4;
    cout<<"Enter number of days you visited hospital:";
    cin>>days;
    day(days);
}
void day(int days){
    int dayNo;
    int r;
    int un=0;
    for(int i=1;i<=days;i++){
        cout<<"Number of pateints who visited hospital on Day "<<i<<":"<<endl;
        cin>>dayNo;
        if(i%3==0){
        if(un>r){
            r++;
            un--;
            if(i>3){
                r++;
                un--;
            }
        }}
        if(dayNo<=7){
            r+=dayNo;
            
        }
        else if(dayNo>7){
            r+=7;
            un+=(dayNo-7);
            
        }
    }
        cout<<"Treated Patients:"<<r<<endl;
        cout<<"Untreated Patients:"<<un;
}