#include<iostream>
using namespace std;

void HFpyramid(int n){
    //Hollow full pyramid
    for(int i=0;i<n;i++){
       { for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        for(int j=0 ;j<(2*i)+1;j++)
        {
           if(j==0||j==2*i||i==n-1){
            cout<<"*";
           }
           else{
            cout<<" ";
           }
        }
       }cout<<endl;
    }

}

void Fpyramid(int n){
    //Full pyramid
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
    
    cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    Fpyramid(n);
    return 0;
}