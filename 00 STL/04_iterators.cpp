#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    /*Iterators are like pointers like structures 
    that point to containers.
    
    let vector v = {1,2,4,5,6}
    v.begin() points to 1.
    v.end() points next/after to 6, generally points to dummy value.
    */
    
    vector<int> v = {2,3,5,6,7};
    vector<int> :: iterator it;
    for(it=v.begin(); it!=v.end(); ++it){
        cout<<(*it)<<endl;
    }
    /* In case of vectors it++ and it = it+1 are same
       as vectors are continous. 
       it = it+1 will not work in case of unordered containers.
    */   

    vector<pair<int, int>> v_p = {{1,2},{2,3},{4,5}};
    vector<pair<int, int>> :: iterator it_p;

    for(it_p = v_p.begin(); it_p!=v_p.end(); it_p++){
        cout<<it_p->first<<" "<<it_p->second<<endl;
    }


    return 0;
}
