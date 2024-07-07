#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter size of array"<<" ";
    cin>>n;

  //input
    int arr[n];
    cout<<"Enter elements"<<" ";
    for(int i=0; i<n;i++) {
        cin>>arr[i];
        
    }
    
    int sum =0;
    for(int j=0; j<n;j++){
        sum = sum + arr[j];
         
    }
    for(int i=0; i<n-1;i++){
        
        cout<<arr[i];
    }
    
    
    cout<<endl;
    
}