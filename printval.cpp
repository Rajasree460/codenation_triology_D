    //print the value of the key(map isn't user defined) 

#include<bits/stdc++.h>
using namespace std;
int main() {
	map<int,int>mp;   //decleration of an ordered map
	mp[1]=2;
    mp[4]=6;
    mp[9]=7;
    mp[3]=8;
    int l=mp.size();
    cout<<l<<endl; //size or length of map
    cout<<mp[1]<<endl;
    cout<<mp[0]<<endl;
}
//as m[0] ,i.e 0 key has no value so the o/p of m[0]=0

//this is a new feature of c++20
