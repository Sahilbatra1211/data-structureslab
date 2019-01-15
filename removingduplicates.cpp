//remove duplicate
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int a[10];
    int n;
    
    cin>>n;
    int b[10]={0,0,0,0,0,0,0,0,0,0};
    
  int k=0;
    
    for (int i=0;i<n;i++){
        cin>>a[i];
        int d=a[i];
        b[d-1]++;
        if(b[a[i]-1]>1){
         i--;
         k++;
        
        }
    }
    
    for(int j=0;j<n-k;j++){
        cout<<a[j];
    }
}
