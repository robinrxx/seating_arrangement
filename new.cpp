#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
int t;
int long long n;
int long long k;
int a[1000000];
cin>>t;
for(int i=0;i<t;i++)
{
cin>>n>>k;
for(int i=0;i<n;i++)
{
cin>>a[i];
}

if(k>n)
k=k%n;
for(int i=0;i<n;i++)
{
cout<<a[(i+n-k)%n]<<" ";
}
cout<<"\n";

}
return 0;
}
