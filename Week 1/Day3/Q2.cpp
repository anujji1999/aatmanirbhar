// GeeksforGeeks Make a Distinct Digit Array
// https://practice.geeksforgeeks.org/problems/make-a-distinct-digit-array/0

#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int freqMap[10];
        for(int i=0; i<10; i++){
            freqMap[i] = 0;
        }
        for(int i=0; i<n; i++){
            int num = arr[i];
            while(num != 0){
                int digit = num%10;
                freqMap[digit]++;
                num /= 10;
            }
        }

        for(int i=0; i<10; i++){
            if(freqMap[i] != 0){
                cout<<i<<" ";
            }
        }
        cout<<endl;
	}
	return 0;
}