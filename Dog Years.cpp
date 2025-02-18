
#include <iostream>
using namespace std;
int main()
{
     int humanYear;
    cout<<"Enter your age in human years :"<<endl;
    cin>>humanYear;
    int dogYear=7*humanYear;
    //cout<<"Your age in dog years is:"<<dogYear<<endl;
    if(humanYear<=0){
        cout<<"invalid number"<<endl;
        cout<<"Enter an integer number again";
    }
    else{
        cout<<"Your age in dog years is:"<<dogYear<<endl;
    }

}