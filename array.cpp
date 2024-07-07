#include <iostream>
using namespace std;
// using function
void printArray(int arr[] , int size){
    cout<<"Printing the array " <<endl;
     //Printing the array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" " ;
        
    }
    cout<<"Printing done" <<endl;
}




int main(){

    //array
    int arr[10] = {1,2,4,6,4,7,8,6,3,2};

    cout<<"Array at index 7 is "<<arr[7]<<endl;

    int second[] = {1,5,35,5};

    cout<<"Array is "<<second[2]<<endl;

    int third[15] = {2,4};
    int n=15;
    printArray(third , 15);
    // cout<<"Printing the array " <<endl;
    //  //Printing the array
    // for(int i=0; i<n; i++){
    //     cout<<third[i]<<" " ;
        
    // }
      


     int fourth[10] ={0};
     n=10;
     printArray(fourth,10);
    //  cout<<"Printing the array "<<endl;
    // //Printing the array
    // for(int i=0; i<n; i++){
    //     cout<<fourth[i]<<" " ;
    // }

   int fourthsize = sizeof(fourth)/sizeof(int);
   cout<<"Size of fourth is "<< fourthsize<<endl;


}