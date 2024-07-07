#include<iostream>
using namespace std;

//Function apterm
int APterm(int n){
    int ans = 3*n +7;
    return ans;
}

int main(){
     
     int n;
     cout<<"Enter the number : "<<endl;
     cin>>n;

     int answer = APterm(n);
     cout<<"AP of n is :"<< answer<<endl;;
}