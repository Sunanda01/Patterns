#include <iostream>

int main() {
    int i,j,n;
    cout<<"Enter The Limit = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" "<<i;
        }
        cout<<"\n";
    }

    return 0;
}