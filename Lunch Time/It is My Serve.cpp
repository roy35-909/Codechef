#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        int a,b;
        cin >>a>>b;

        if(((a+b)/2)%2==0)
        {
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
}
