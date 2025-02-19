  #include <iostream>
using namespace std;

int main(){
  int AddedValue,choice;
    int NewBalance=0;
    cout<<"the current balance :";
    cin>>NewBalance;
     cout << "Piggy Bank Menu:" << endl;
        cout << "1. Add money" << endl;
        cout << "2. Remove money" << endl;
        cout << "3. Check balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice==1){
    cout<<"Added"<<endl;
    cin>>AddedValue;
    NewBalance+=AddedValue;
    cout<<"NewBalance: "<<NewBalance<<endl;
        }
    //int NewBalance2= NewBalance;
    else if(choice==2){
    int Removed;
    cout<<"Removed :";
    cin>>Removed;
    if(Removed>NewBalance){
     cout<<"ERROR: Insufficient funds\n";
     cout<<"Current balance:"<<NewBalance;
    }
    else {NewBalance-=Removed;
    //cin>>Removed;
    cout<<"FinalBalance: "<<NewBalance<<endl;
    }}
    else if(choice==3) {
      cout<<"Check the present value :"<<NewBalance;
    }
    else if(choice==4) {
        cout<<"Exit from the game"<<endl;
    }
    else {
        cout<<"invalid choice";
    }}
