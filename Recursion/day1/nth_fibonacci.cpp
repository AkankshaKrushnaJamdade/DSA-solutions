#include <iostream>
//#include <cmath>
using namespace std;

int getNthfib(int num){
    int t1=0,t2=1,nextTerm;

    for(int i=0;i<num;i++){
        //cout<<t1<<endl;

        nextTerm = t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return t1; 

}

int main(){

    int n;
    cout<<"n = \t";
    cin>>n;

    int res = getNthfib(n);
    
    cout<<res;
  
    return 0;
}
