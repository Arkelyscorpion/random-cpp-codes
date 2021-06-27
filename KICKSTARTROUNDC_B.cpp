//CREATED : 5/23/2021, 4:39:28 PM
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define X first
#define Y second
#define mod 10000000007
void solve(){

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for(int ii= 1;ii<t+1;ii++)
    {
        long long g;
        cin >> g;
        long double val;
        val = (1+sqrt(1+8*g))/2;
        vector<int> v;
        ll count = 0;
        for(int i = 1;i<val;i++){
          if(2*g % i ==0){
              if((2*g/i - i + 1)%2==0)
              count++;
          }
        }
        cout << "Case #" << ii << ": ";
        cout << count << "\n";
    }
    return 0;
}
