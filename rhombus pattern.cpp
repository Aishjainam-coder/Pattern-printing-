// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main(){
    int n, p;
    cin>> n>>p;
       for(int i =0;i<n;i++){
        for(int one=n-(i+1);one>=0;one--){
            cout<<" ";}
        for(int sec=0;sec<=p-n-1;sec++){
            cout<<"*";
        }
        for(int th=0;th<=n-(i+1);th++){
            cout<<" ";
        }cout<<endl;
    }
    
}
