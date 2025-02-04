#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
    map<string, string> m;
    m["purple"] = "Power";
    m["green"] = "Time";
    m["blue"] = "Space";
    m["orange"] = "Soul";
    m["red"] = "Reality";
    m["yellow"] = "Mind";

    map<string, string> m2;
    m2["purple"] = "Power";
    m2["green"] = "Time";
    m2["blue"] = "Space";
    m2["orange"] = "Soul";
    m2["red"] = "Reality";
    m2["yellow"] = "Mind";

    int t;
    cin >> t;
    int ans = 6-t;

    while(t--){
        string s;
        cin >> s;
        m2.erase(s);
    }

    cout << ans << endl;
    for(auto i:m2){
        cout<<i.second<<endl;
    }
    return 0;
}