//CREATED : 6/12/2021, 10:00:28 AM
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define X first
#define Y second
#define mod 1000000007
string add(string s,int n){
    for(int i = n-1;i>=0;i--){
        if(s[i]=='0'){
            s[i]='1';  // 1000 +1 == 1001
            //          1001 + 1 == 1010
            return s;
        }
        else{
            s[i]='0';
            //continue;
        }
    }
}
string sub(string s,int n){
    for(int i = n-1;i>=0;i--){
        if(s[i]=='1'){
            s[i]='0';
            return s;
        }
        else
        s[i] = '1';
    }
}

// 15 --> 01111
int main(){
    int n;
    cin >> n;
    string s;
    cin >>s;
    bool valid = true;
    if(count(s.begin(),s.end(),'1') == n) // bit is 1
    valid = false;
    if(s[0]=='1' && count(s.begin(),s.end(),'0') == n-1) // 100000000
    valid = false;
    if(count(s.begin(),s.end(),'0') == n)
    valid = false;
    if(valid){
        cout << add(s,n) << " " << sub(s,n);
    }
    if(!valid)
    cout << -1;
    return 0;
}
