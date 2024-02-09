#include<iostream>
using namespace std;
int main(){
    int x = 18;
    float y = 7.9;

    //int y = 0;
    
    //cout << &x <<" "<< &y;
    int*ptr = &x;
    cout<<ptr<<"\n";
    

    float *ptrf = &y;
    cout<<ptrf<<"\n";
                                            
    return 0;
}   