
#include <iostream>
using namespace std;
int main()
{
      
    float a,b,c;
    /*int x=(b*b)-4*a*c;
    int y=-b-sqrt(x);
    int z=y/(2*a);*/
    cout<<"Enter coefficient a:";
    cin>>a;
    cout<<"Enter coefficient b:";
    cin>>b;
    cout<<"Enter coefficient c:";
    cin>>c;
      float x=(b*b)-4*a*c;
    float y=-b-sqrt(x);
    float y2=-b+sqrt(x);
    float z=y/(2*a);
    float z2=y2/(2*a);
    if(x<0){
        cout<<"The equation has no real roots.";
     }
    else if(((b*b)-4*a*c)==0){
        cout<<"the only root is "<<z;
    }
     else{cout<<"1st root is:"<<z<<endl<<"2nd root is:"<<z2;}


}