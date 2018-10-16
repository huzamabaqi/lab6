#include <iostream> 
using namespace std;
int main()
{
int grade; 
cout <<"Enter your grade";
cin>>grade;
if(grade>=86){
    cout<<"A";


}else 
if(grade>=72) {
    cout<<"B";

}else 
if(grade>=60) {
    cout<<"C";
}else 
if(grade>=50) {
    cout<<"D";    
}else
cout<<"F";
    return 0;
}