#include<bits/stdc++.h>
using namespace std;
void odd(int x)
{
    string s="";
    int a = 0;
    while(x--)
    {
       s = s+to_string(a);
       a = !a ;
    }
    cout<< s<<endl;
}
void even(int x)
{
    string s = "1001";
    x = x-4;
    int a = 0;
    while(x--){
        s = s+to_string(a);
        a = !a;
    }
    cout <<s<<endl;
}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin >>a;
        if(a%2==0){
            even(a);
        }
        else{
            odd(a);
        }
    }

}
