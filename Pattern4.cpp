// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    int i,j,n;
    cout<<"Enter The Limit = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
    }
    return 0;
}