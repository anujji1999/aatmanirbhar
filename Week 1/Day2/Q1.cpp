// GeeksforGeeks Searching an element in a sorted array
// https://practice.geeksforgeeks.org/problems/who-will-win/0

#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    //code
        int n, k;
        cin>>n>>k;
        int arr[n];
        bool isPresent = false;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] == k){
                isPresent = true;
            }
        }

        if(isPresent){
            cout<<"1"<<endl;
        }else{
            cout<<"-1"<<endl;
        }
	}
	return 0;
}