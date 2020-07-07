/*50 3
7.071
*/

#include<bits/stdc++.h>
using namespace std;

float search_root_val(int n,int mantissa){
	int s = 0;
	int e = n;
	float ans = -1;
	while(s<=e){
		int mid = (s+e) >> 1;
		if(mid*mid == n){
			return mid;
		}
		else if(mid*mid < n){
			ans = mid;
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
	}
	float inc = 0.1;
	for(int  i = 1; i <= mantissa; i++){
		while(ans*ans <= n){
			ans = ans + inc;
		}
		ans = ans - inc;
		inc = inc /10;
	}
	return ans;





}
int main(){
	int n; cin >> n;
	int mantissa; cin >> mantissa;
	cout << search_root_val(n,mantissa);
}