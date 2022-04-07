#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    //Below code can be executed using range based loops
    
    vector<int> v = {2,3,5,6,7};
    vector<int> :: iterator it;
    for(it=v.begin(); it!=v.end(); ++it){
        cout<<(*it)<<endl;
    }

    //Range based loops
    for(int value : v){
        cout<<value<<endl;
    }
/*  Pass by reference, any change is value will
    reflect in actual container */
    for(int &value : v){
        cout<<value<<endl;
    }
    

    return 0;
}
