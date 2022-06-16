#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    string s;
    cin>>n;
    while(n--)
    {
        cin >> l;
        cin >> s;
    int i=0;
        while((l/2)--){


             if(s[i]=='0'&&s[i+1]=='0'){
                cout << 'A';
             }
             else if(s[i]=='0'&&s[i+1]=='1'){
                cout << 'T';
             }
              else if(s[i]=='1'&&s[i+1]=='0'){
                cout << 'C';
             }
              else if(s[i]=='1'&&s[i+1]=='1'){
                cout << 'G';
             }
             i+=2
        }
        cout<<endl;

    }
    return 0;
}
