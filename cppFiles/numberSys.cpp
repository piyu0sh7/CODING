#include<iostream>
#include<math.h>
using namespace std;
int BinaryConversion(int n){
//Division Method: for 4 ,5 ,6 result is differnt
    int num=n;
    int ans=0;
    int i=0;
    while(num>0){
        
        int rem=num%2;
       // cout<<rem<<endl;
        
        ans=((pow(10,i)*rem)+ans);
        i++;
       
        num=num/2;
        
    }
    return ans;
}

int Bin2con(int n){
    //bitwise 
    int ans=0;
    int i=0;
    while(n>0){
       int bit=(n&1);
       n=(n>>1);

        ans=(pow(10,i++)*bit)+ans;
    }
    return ans;
}

int dec2Bin(int n){
    int dec=0;
    int i=0;
    while(n){
        int bit =n%10;
        dec=(pow(2,i++)*bit)+dec;
        n=n/10;


    }
    return dec;
}
/*int dec2bin(int n){
    int dec=0;
    while(n){
        dec=(dec|n);
        dec=dec<<1;
        n/=10;
        cout<<dec<<endl;
    }
    return dec;
    //unSolved 
}*/
int main(){
    int n;
    cin>>n;
    int bin=BinaryConversion(n);
   // cout<<bin<<endl;
  // cout<< Bin2con(n);
    //cout<<(pow(10,2)*1)+0;
    //cout<<dec2bin(n);
    return 0;
}