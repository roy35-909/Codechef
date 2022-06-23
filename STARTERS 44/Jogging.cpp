#include<bits/stdc++.h>
using namespace std;
int main(){
long long int sum = 1;
for(int i=2;i<=12548;i++)
    sum +=sum;

    cout << sum <<endl;
}

