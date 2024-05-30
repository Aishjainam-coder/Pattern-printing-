// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main(){
    int n, p;
    cin>> n>>p;
    for(int i=0;i<n;i++){
        
        for(int first=n -(i+2) ;first>=0;first--){
            cout<<" ";
        }
        for(int  sec=0;sec<2*i+1;sec++){
             if( sec>0&&sec<2*i&&i<n-1){
            cout<<" ";}
        //sec k alag se no of points hein like 0 , 01, 012, 
        //
            else{
            cout<<"*";}}
            
        for(int  th=0;th<=n-i-2  ;th++){
            cout<<" ";}
            cout<<endl;}}
        
        


    

     
