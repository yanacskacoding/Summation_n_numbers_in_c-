#include <iostream>

using namespace std;

int main()
{
    int n, i, s;
    float a[100];
    
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Total number of array is: \n";
    
    for(i = 1; i <= n; i++)
        cin >> a[i];
    s = 0;
    cout<<"The array is: ";
    
    for(i = 1; i <= n; i++)
        cout<<"\n"<<a[i];
        
    for(i = 1; i <= n; i++)
        s = s + a[i];
    cout<<"\nSummation of 'n' number is: "<<s;

    return 0;
}
