//week10-1.cpp
#include <iostream>
using namespace std;
int isPrime(int N){
	for(int i=2; i<N;i++){
		if(N%i==0)return 0;
	}
	return 1;
}
int main()
{
	int a, b;
	cin >> a >> b;//把q...b的每個數字都試一遍
	int ans = 0;
	for(int i=a;i<=b;i++){
		//質數2 3 5 7...
		if(isPrime(i)) ans++;
	}
	cout << ans << "\n";
}
