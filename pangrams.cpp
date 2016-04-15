#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. 

Print output to STDOUT */
    int a,b,flag=0;
int arr[]= 

{65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81

,82,83,84,85,86,87,88,89,90,97,98,99,100,101,102,
           

103,104,105,106,107,108,109,110,111,112,113,114,115

,116,117,118,119,120,121,122};
    string s2;
    getline(cin,s2);
    for(int i=0;i<s2.length();i++){
        a=int(s2[i]);
        
        if(a>=65 && a<=90){
            b=a+32;
        }
        else{
            if(a>=97 && a<=122){
                b=a-32;
            }
        }
        
        for(int j=0;j<s2.length();j++){
            if(a==arr[j] || b==arr[j]){
                arr[j]=0;
                arr[j+26]=0;
            }
        }
    }
    for(int k=0;k<52;k++){
        if(arr[k]!=0){
            flag=1;
        }
    }
    if(flag){
        cout<<"not pangram";
    }
    else{
        cout<<"pangram";
    }
    //cout<<int(s2[0]);
    return 0;
}
