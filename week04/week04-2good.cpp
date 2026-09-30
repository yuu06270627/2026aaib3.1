///week04-2這程式是對的 用進階c++迴圈
///但在codeblocks出錯
///2011年之後 只有在 -std=c++11或 -std=gun++11才能用
///所以需要改一下設定:settings-comiler
///選第二個打勾

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> a;
	int now;
	for (int i=0; i<20; i++){
		cin>>now;
		if(now==0) break;
		a.push_back(now);
	}
	cin >> now;
	int ans =0;
	for(int num : a){
		if(num==now) ans++;
	}
	cout<<ans<<"\n";
}

