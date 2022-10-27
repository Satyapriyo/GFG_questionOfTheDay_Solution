#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        void rearrang(int arr[] , int n){
            vector<int> pos;
            vector<int> neg;
            for (int i = 0; i < n; i++)
            {
                if(arr[i]>=0){
                    pos.push_back(arr[i]);
                }
                else{
                    neg.push_back(arr[i]);
                }
            }
            int count =0 ,j=0;
            while (count<n && j<pos.size() && j<neg.size())
            {
                arr[count++] = pos[j];
                arr[count++] = neg[j];
                j++;
            }
            while (j<pos.size())
            {
                arr[count++] = pos[j++];
            }
            while (j<neg.size())
            {
                arr[count++] = neg[j++];
            }
            for (int i = 0; i < pos.size(); i++)
            {
                cout<<pos[i]<<" ";
            }
            cout<<endl;
            for(int j = 0; j < neg.size(); j++)
            {
                cout<<neg[j]<<" ";
            }
            cout<<endl;
        }
};
int main(){
    int n;
    cout<<"enter the number of elements in arr"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    solution ob;
    ob.rearrang(arr,n);
    cout<<"answar is"<<endl;
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}