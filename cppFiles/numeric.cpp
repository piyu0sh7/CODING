#include<iostream>
using namespace std;
void NFP(int n){
    //Numeric full pyramid
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            int k=i+j+1;
            
            cout<<k<<"";
            
        }
        for(int j=i;j>0;j--){
            int k=i+j;
            cout<<k<<"";
        }
   cout<<endl; }
}

void  NHP(int number){
    //numeric hollow pattern
    int n=number+1;
    for(int i=0;i<n;i++){

         for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            if(j==0||j==i-1||i==n-1){
            cout<<j+1<<" ";
             }
             else{
                cout<<"  ";
             }
        }
       
   cout<<endl; }
}

int main(){
    int n;
    cin>>n;
   // NFP(n);
   NHP(n);
}