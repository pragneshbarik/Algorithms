#include<iostream>
#include<vector>
#include<string>

using namespace std;

void generate_bin_digits(string curr, int index, int n){
    if(index == n){
        cout<<curr<<endl;
        return;
    }
    generate_bin_digits(curr+'0', index+1, n);
    generate_bin_digits(curr+'1', index+1, n);

}

int main(int argc, char const *argv[])
{
    generate_bin_digits("", 0, 4);
       return 0;
}