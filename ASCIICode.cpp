
/*
int main()//Ascii character
{
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    cout<<int(ch);
    return 0;
}*/
/*
int main()//Factorial
{
    int n,fact=1;
    cin>>n;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    cout<<fact;
    return 0;
}
*/
/*
int main()//All factors of a number
{
    int n,k=2,count=2;
    cout<<"Enter the number : ";
    cin>>n;
    while(k<=n/2)
    {
        if(n%k==0) count+=1;
        k++;
    }
    cout<<"Total number of factors are : "<<count;
    return 0;
}*/
// { Driver Code Starts
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Position this line where user code will be pasted.

int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        //calling equilibriumPoint() function
        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


// Function to find equilibrium point
// a: input array
// n: size of array
int equilibriumPoint(long long a[], int n) {
	int flag=0,i;
        long long sum1=0,sum2=0;
		for(int j=0;j<n;j++)
		{
			sum2+=a[j];
		}
        for(i=0;i<n;i++)
        {
			sum2-=a[i];
			if(sum1==sum2) 
			{
			flag=1;
			break;
			}
			sum1+=a[i];
        }
	if(flag==1) return i+1;
	else return -1;
}