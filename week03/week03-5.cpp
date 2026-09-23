///week03-5.cpp
#include <iostream>
#include <vector>///本周教c++陣列
using namespace std;

int main()
{
    vector<int> a;///宣告伸縮自如的陣列
    a.push_back(99);
    a.push_back(88);
    a.push_back(77);
    for(int i=0; i<a.size(); i++) cout << a[i] <<" ";
    cout << "\n";

    a.push_back(88);
    a.push_back(77);
    for(int i=0; i<a.size(); i++) cout << a[i] <<" ";
    cout << "\n";
}
