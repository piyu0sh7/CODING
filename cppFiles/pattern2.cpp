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


void HD(int n){
    //Hollow Diamond
    for(int i=0;i<n;i++){
        //1st phase
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            if(j==0||j==(2*i)){
            cout<<"*";}
            else{
                cout<<" ";
            }
        }
    cout<<endl;}

   for(int i=0;i<n;i++){
    //2nd part
    for(int j=0;j<=i;j++){
        cout<<" ";
    }
    for(int j=0;j<2*n-(2*i)-1;j++){
        if(j==0||j==(2*n)-(2*i)-2){ cout<<"*";}
       else{
        cout<<" ";
       }
   }
cout<<endl;
}
}

void FSD(int n){
    //Flipped solid Diamond

    for(int i=0;i<n;i++){
        //1st part
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
    cout<<endl;}

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*n-2*i-2;j++){
            cout<<" ";

        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
    cout<<endl;}
}


void FP(int n){
    //fancy pattern

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
            if(i!=j){
                cout<<"*";
            }
        }
    cout<<endl;}

    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<i;
            if(i!=j){
                cout<<"*";
            }
        }cout<<endl;
    }
}


void APP(int n){
    //alphabet palindrome pyramid
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<=i;j++){
            char ans=j+'A';
            cout<<ans;
        }
        for( ;j>1;j--){
            char ans=j+'A'-2;
            cout<<ans;
        }
        
        
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
   // Fpyramid(n);
   //FSD(n);
   // HD(n);
   APP(n);
   //FP(n);
    return 0;
}