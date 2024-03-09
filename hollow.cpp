#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int k=5;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1||j==1||i==5||j==5){
                cout<<"*_____*";
            }
            else{
                cout<<"Piyush ";
            }

        }
        cout<<endl<<endl<<endl<<endl;
    }
cout<<"_____________________________________________________________________________________________________"<<endl;
    cout<<endl<<endl<<endl;

     for(int i=5;i>=1;i--){
        for(int j=1;j<=5;j++){
            if(i==1||j==1||i==5||j==5){
                cout<<"*_____*";
            }
            else{
                cout<<a<<" ";
            }

        }
        cout<<endl<<endl<<endl<<endl;
    }
    getch();
    return 0;
}