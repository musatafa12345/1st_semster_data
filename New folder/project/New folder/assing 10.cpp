#include<iostream>
using namespace std;
 
int main()
{
	cout<<" programe no 10 \n\n";
    int st,end,sum, remainder;
     sum=0;
    cout << "Enter the number where strat = ";
    cin >> st;
    cout<<"Enter the number where end = ";
    cin>>end;
    for(int i=st;i<end;i++)
    {
	
    remainder = i % 2;
    if (remainder == 0)
    {
        cout << i << " is an even integer " << endl;
        sum+=i;
    }
        
 }
      cout<<"total sum of even = "<<sum;
    return 0;
}
