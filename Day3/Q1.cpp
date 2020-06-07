// GeeksforGeeks Two Repeated Elements
// https://practice.geeksforgeeks.org/problems/two-repeated-elements/0

#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n+2];
		int xor_res = 1;
		for(int i=2; i<=n; i++){
			xor_res ^= i;
		}
		for(int i = 0; i < n+2; i++){
			cin>>arr[i];
			xor_res ^= arr[i];
		}
		int mask;
		for(int i=0; i<32; i++){
			int tempMask = 1<<i;
			if((tempMask & xor_res) != 0){
				mask = tempMask;
				break;
			}
		}

		int num1 = 0, num2 = 0;

		for(int i=0; i<n+2; i++){
			if((arr[i] & mask) ==  0){
				num1 ^= arr[i];
			}else{
				num2 ^= arr[i];
			}
		}

		for(int i=1; i<=n; i++){
			if((i & mask) ==  0){
				num1 ^= i;
			}else{
				num2 ^= i;
			}
		}

		cout<<num1 <<" "<<num2<<endl;
	}
	return 0;
}