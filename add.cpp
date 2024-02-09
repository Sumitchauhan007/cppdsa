#include<iostream>
using namespace std;

int main(){

    int x,y;

    cin>>x>>y;//taking input x and y

    int *ptrx = &x;//it fetches address of y and then store it in ptrx:
    int *ptry = &y;//it fetches address of y and then store it in ptry:

    int result; //declare result so it has garbage value

    int *ptr_result  = &result;

    *ptr_result  =*ptrx + *ptry;

    cout<<result<<" "<<*ptr_result<<"\n";
    

    return 0;
}