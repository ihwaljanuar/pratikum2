
#include <iostream>
using namespace std;
int main ()
{

    int a,n,bil,max=0;
    cout<<"masukan jumlah bilangan = ";cin>>n;
    for (a=1; a<=n; ++a)
{
    cout<<"masukan bilangan ke " << a << " =" ;cin>>bil;
    if (bil>max)
{
    max=bil;
}
}
    cout<<endl;
    cout<<"bilangan terbesar ="<<max;
    }
