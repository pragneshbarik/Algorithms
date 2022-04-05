#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int min_index(vector<int> &v, int l){
    int min_i, min = INT_MAX;
    for(int i=l; i<v.size(); i++){
        if(v[i]<min){
            min = v[i];
            min_i = i;
        }
    }
    return min_i;
}
/*
int main(int argc, char const *argv[])
{
    int t, n;
    cin>>t;
    while(t--){
        int temp;
        int flag;
        vector<int> v(0);
        v.push_back(0);
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>temp;
            v.push_back(temp);
        }
        

        for(int i=1; i<v.size(); i++){
            cout<<v[i]<<" ";
            int m_index = min_index(v, i+1);
            swap(v[i], v[m_index]);
        }

        for(int i=1; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

        // if(flag==1){
        //     cout<<"Yes"<<endl;
        // }
        // else{
        //     cout<<"No"<<endl;
        // }


    }
    return 0;
}
*/

int check_pair(vector<pair<int, int>> &p){
    for(auto &x:p){
        if((x.first & x.second) == 0){
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{   int t;
    cin>>t;
    while(t--){
        vector<pair<int, int>> pairs;
        vector<int> v1, v2;
        int n, temp;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>temp;
            v1.push_back(temp);
        }
        v2=v1;
        sort(v1.begin(), v1.end());
        for(int i=0; i<n; i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(v1[i]==v2[j]){
                    pairs.push_back({i+1, j+1});
                }
            }            
        }
        vector<pair<int, int>> valid_pairs;
        for(int i=0; i<pairs.size(); i++){
            if(v2[pairs[i].first-1] & v2[pairs[i].second-1]){
                valid_pairs.push_back(pairs[i]);
            }
        }
        for(int i=0; i<valid_pairs.size(); i++){
            cout<<valid_pairs[i].first<<" "<<valid_pairs[i].second<<endl;
        }


    //     pairs.pop_back();
    //     if(check_pair(pairs))
    //         cout<<"Yes"<<endl;
    //     else
    //         cout<<"No"<<endl;
     }
    return 0;
}

/*
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int> v1, v2;
        vector<pair<int, int>> pairs;
        int temp;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>temp;
            v1.push_back(temp);
        }
        v2 = v1;
        sort(v1.begin(), v1.end());
        pair<int, int> p;
        for(int i=0; i<v1.size(); i++){
            for(int j=0; i<v2.size(); j++)
            if(v1[i]==v2[j]){
                p = {i+1, j+1};
                cout<<p.first<<" "<<p.second<<endl;
                pairs.push_back(p);
            }   
        }
        for(int i=0; i<pairs.size(); i++){
            cout<<pairs[i].first<<" "<<pairs[i].second<<endl;
        }
        vector<pair<int, int>> valid_pairs;
        for(int i=0; i<pairs.size(); i++){
            if((pairs[i].first & pairs[i].second)!=0){
                valid_pairs.push_back(pairs[i]);
            }
        }


    }
    return 0;
}
*/
