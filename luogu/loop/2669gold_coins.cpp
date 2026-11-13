#include<iostream>
using namespace std;

int main(){
   int day,balance=0,n=1;
   cin>>day;
   do{
    day-=n;
    if(day<0){
        balance+=(n+day)*n;
    }
    else{
        balance+=n*n;
    }
    n++;
   }while(day>0);
   cout<<balance<<endl;
   return 0;
}