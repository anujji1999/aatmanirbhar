// GeefsforGeeks Missing number
// https://practice.geeksforgeeks.org/problems/missing-number/0

#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    //code
        int n;
        cin>>n;

        int arr[n-1];
        int currSum = 0;
        for(int i=0; i<n-1; i++){
            cin>>arr[i];
            currSum += arr[i];
        }

        int actualSum = (n*(n+1))/2;
        int ans = actualSum - currSum;
        cout<<ans<<endl;
	}
	return 0;
}