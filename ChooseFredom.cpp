#include<bits/stdc++.h>
using namespace std;
int helper(vector<int> v, int k, int i){
    vector<int> iterator j = v.begin()+i;
    if(v.size()==1){
        return v[0];
    }
    i=((i+k -1)%v.size());
    cout<<j<<" ";
    v.erase(v.begin()+i);
    return helper(v,k,i);
}
int main(){
    int n, k,ans;
    cout<<"enter the value n :";
    cin>>n;
    cout<<"enter the value  k :";
    cin>>k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(i);
    }
    k--;
    ans = helper(v,k,0) ;
    cout<<endl<<ans;
    return ans;
}