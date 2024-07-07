#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int len = s.length();
    cout<<"length is "<<len<<endl;

    
    string ans = "";

    if(len>10)
    {
         int mid = len-2;

        ans += s[0];
        
        ans += to_string(mid);

        ans += s[len-1];
    }

    else
    {
        ans = s;
    }

    cout<<ans<<endl;

return 0;
}