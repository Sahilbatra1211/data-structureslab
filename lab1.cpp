#include<iostream>
using namespace std;


void insertion(int a[],int &n){
   cout<<"enter no and pos";
    int no;
    cin>>no;
    
    int pos;
    cin>>pos;
    int i=0;
    for( i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[i+1]=no;
    n++;
}
void print(int a[],int n){
for(int i=0;i<n;i++){
   cout<<a[i]; 
}

}
int main(){

    int a[]={1,2,6,4};
    int n=4;
    while(1){
        
        
        cout<<"insertion1"<<endl;
        cout<<"deletion2"<<endl;
        cout<<"search3"<<endl;
        cout<<"print4"<<endl;
        cout<<"EXIT0"<<endl;
        int c;
        cin>>c;
        
        switch(c){
            case 1:insertion(a,n);
            break;
            //case 2:deletion();
            //break;
            //case 3:search();
            //break;
            case 0:exit(0);
            break;
            case 4:print(a,n);
            break;
        }
    }
    
}
