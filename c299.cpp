#include <iostream>
using namespace std;
//大到小 
int main(){
	int fun, r;
	while( cin >> fun ){
		r = 1;
		int l[fun];
		//輸入 
		for( int t = 0 ; t < fun ; t ++ ){
			cin >> l[t];
		}
		//排序 
		for( int t = 0 ; t < fun - 1 ; t ++ ){
			for( int t2 = 0 ; t2 < fun - 1 ; t2 ++ ){
				if( l[t2] < l [t2 + 1] ){
					int c = l[t2];
					l[t2] = l[t2 + 1];
					l[t2 + 1] = c;
				}
			}
		}
		//判斷 
		for( int t = 0 ; t < fun - 1 ; t ++ ){
			if( l[t] - 1 != l[t + 1] ){
				r = 0;
			}
		}
		//輸出最大和最小 
		cout << l[fun - 1] << " " << l[0];
		//對嗎? 
		if( r == 1 ){
			cout << " yes";
		} else {
			cout << " no";
		}
	}
}
