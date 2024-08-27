#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
void pattern(int n){
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<i;j++){
            
            printf("%c",ch);
            ch++;
        }
        ch=ch-1;
        for(int j=i;j>1;j--){
           ch= ch-1;
            cout<<char(ch);
            
        }

    printf("\n");}
}

int main()
{
int num;
scanf("%d",&num);
pattern(num);
return 0;
}