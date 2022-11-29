#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a ;
    cin>>a;
    vector<int>vct;
    for(int i =0;i<a;i++){
        int k;
        cin>>k;
        vct.emplace_back(k);
    }
    
    sort(vct.begin(), vct.end());
    for(auto it:vct){
        cout<<it<<" ";
    }
}