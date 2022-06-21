#include<bits/stdc++.h>
using namespace std;
int flor(int x)
{
    if(x%10!=0){
        int y = x + (10-(x%10));
        y = y/10;
        return y;
    }
    else{
        return x/10;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin >>a>>b;
        cout<<abs(flor(a)-flor(b))<<endl;

    }
}
