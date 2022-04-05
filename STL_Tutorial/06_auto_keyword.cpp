#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    /*'
    auto' keyword dynamically determines
    the datatype of variable.
    */

    auto p = "sad";
    cout<<p;

    vector<int> v = {2,3,5,6,7};
    /*
    vector<int> :: iterator it;
    this can be replaced with auto it=v.being()
    */

   for(auto it = v.begin(); it!=v.end(); it++){
       cout<<*it<<endl;
   }
   
   /*
    All codes produce same result.

1.  vector<int> :: iterator it;
    for(it=v.begin(); it!=v.end(); ++it)
       cout<<(*it)<<endl;
    
2.  for(auto it=v.begin(); it!=v.end(); ++it)
        cout<<*it<<endl;

3.   for(auto &x : v)
        cout<<x;
   */
  
   /*
    vector<pair<int, int>> :: iterator it_p;

    for(it_p = v_p.begin(); it_p!=v_p.end(); it_p++){
        cout<<it_p->first<<" "<<it_p->second<<endl;
    }

    The above code can be replaced with 
    for(auto &p : v_p)
    */
    vector<pair<int, int>> v_p = {{1,2},{2,3},{4,5}};

    for(auto &p : v_p)
        cout<<p.first<<" "<<p.second<<" "<<endl;
    return 0;
}
