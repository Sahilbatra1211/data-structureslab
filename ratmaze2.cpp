#include<iostream>
using namespace std;

bool ratmaze(int a[][5],int i,int j,int n){
    if(i==n-1 && j==n-1){
        a[i][j]=3;
        return true;
    }
    
    if(a[i][j]==3 || a[i][j]==1){
        return false;
    }
    
    a[i][j]=3;
    
    if(j+1<n){
        if(ratmaze(a,i,j+1,n)){
        return true;
    }
    }
    
        
    if(j-1>=0){
        if(ratmaze(a,i,j-1,n)){
        return true;
    }
    }
    
        
    if(i+1<n){
        if(ratmaze(a,i+1,j,n)){
        return true;
    }
    }
    
        
    if(i-1>=0){
        if(ratmaze(a,i-1,j,n)){
        return true;
    }
    
    }
    a[i][j]=0;
    
    return false;
    
    
}


int main(){
    int a[][5]={{0,0,0,1,0},
                {0,1,0,0,1},
                {1,0,0,1,1},
                {0,0,1,0,1},
                {0,0,0,0,0}};

    int n=5;
    if(ratmaze(a,0,0,n)){
        for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             cout<<a[i][j]<<" ";
         }
         cout<<endl;
        }
    }
    else{
        cout<<"galat";
    }
}
