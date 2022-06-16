#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,p;
        cin >> n>>k;
        if (n%5!=0)
        {


        int c = (n/5)+1;
        if(k%5!=0){
         p = (k/5)+1;
        }
        else{
          p = (k/5);
        }
        cout << c-p <<endl;
        }
        else{
        int c = (n/5);
        if(k%5!=0){
         p = (k/5)+1;
        }
        else{
         p = (k/5);
        }
        cout << c-p <<endl;
        }
    }
return 0;
}
