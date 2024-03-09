#include<iostream>
using namespace std;
void hollowSquare(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||j==1||i==n||j==n){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void HPyramid(int n){
    //Half pyramid
    for(int i=n;i>=1;i--){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void HIpyramid(int n){
    //Half inverted pyramid
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"* ";
        }cout<<endl;
    }
}

void HHIpyramid(int n){
    //Hollow Half inverted pyramid
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||j==n-i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }cout<<endl;
    }
}
int main(){
    int num;
   
    cin>>num;
   
   // HPyramid(num);
   // hollowSquare(num);
   HHIpyramid(num);
    return 0;
}