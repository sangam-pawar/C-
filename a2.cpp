#include<iostream>
#include<limits.h>
#include<vector>


using namespace std;


int main()
{
     int n = 3;
     

     vector<int> arr(n);

     for (int i = 0; i < n; i++)
     {
          cin>>arr[i];
     }


     int ans = INT_MIN;

     for (int i = 0; i < n; i++)
     {
          if(arr[i] > ans)
          {
               ans = arr[i];
          }
     
     }
     cout<<"The largest number is:"<< ans<<endl;
     


     return 0;
     
     
}