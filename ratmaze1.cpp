#include<iostream>
using namespace std;

bool ratmaze(int a[][4],int i,int j,int n){
    if(i==n-1 && j==n-1){
        return true;
    }
    if(j==n){
        return false;
    }
    
    if(i==n){
        return false;
    }
    
    if(a[i][j]==0){
        a[i][j]=3;
        if(ratmaze(a,i,j+1,n)){
            return true;
        }
        
        if(ratmaze(a,i+1,j,n)){
            return true;
        }
        
        a[i][j]=0;
        
    }
    else{
        return false;
    }
    return false;
}


int main(){
    int a[][4]={{0,0,1,1},
                {0,1,0,0},
                {0,1,0,1},
                {0,0,0,0}};
    int n=4;
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
