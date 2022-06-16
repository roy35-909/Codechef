#include<bits/stdc++.h>
using namespace std;
int lrg(int a,int b, int c)
{
   if(a>b&&a>c){
    return a;

   }
   if(b>c&&b>a){
    return b;
   }
   if(c>b&&c>a){
    return c;
   }
   if(a==b&&b==c){
    return a;
   }
}
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int a,b,c;
        cin >>a>>b>>c;
        cout << lrg(a,b,c);

    }

}
