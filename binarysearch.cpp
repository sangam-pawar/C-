#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){

    int start =0;
    int end = size -1;

    int mid = start + (end-start)/2;

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }

        //shift array part
        if(key> arr[mid]){
            start = mid +1;
        }

        else{
            end = mid -1;
        }

        mid = start + (end-start)/2;
    }
    return -1;
}
    



int main(){

    int even[6] ={ 2,4,6,8,5,7};

    int odd[5] ={2,7,9,4,78};

    int evenIndex =binarySearch( even,6,5);

    cout<<"Index of 5 is "<<evenIndex<<endl;

    int oddIndex = binarySearch(odd,5,78);
    cout<<"Index of 78 is "<<oddIndex<<endl;

    return 0;
}