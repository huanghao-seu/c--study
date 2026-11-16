#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double dis(double a,double b,double c, double d){
    double distance;
    distance=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    return distance;
}

int main(){
    double a,b,c,d,e,f;
    double con=0;
    cin>>a>>b>>c>>d>>e>>f;
    double num1,num2,num3;
    num1=dis(a,b,c,d);
    num2=dis(a,b,e,f);
    num3=dis(c,d,e,f);
    con=num1+num2+num3;
    cout<<fixed<<setprecision(2)<<con<<endl;
    return 0;
}