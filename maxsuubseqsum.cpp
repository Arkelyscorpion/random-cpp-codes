//CREATED : 6/7/2021, 11:14:11 AM
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define X first
#define Y second
#define mod 10000000007

int Max_Subarray_Sum(int arr[],int n)
{
	if(n==1)
	{
		return arr[0];
	}
	int m = n/2;
	int left_MSS = Max_Subarray_Sum(arr,m);
	int right_MSS = Max_Subarray_Sum(arr+m,n-m);
	int leftsum = INT_MIN, rightsum = INT_MIN, sum=0;
	for(int i=m;i < n; i++)
	{
		sum += arr[i];
		rightsum = max(rightsum,sum);
	}
	sum = 0;
	for(int i= (m-1);i >= 0; i--)
	{
		sum += arr[i];
		leftsum = max(leftsum,sum);
	}
	int ans = max(left_MSS,right_MSS);
	return max(ans,leftsum+rightsum);
}
int max_sum(int a[],int l, int r){
    if(l == r){
        return a[0];
    }
    int mid = (l+r) / 2;
    int mlbs,mrbs;
    int mls = max_sum(a,l,mid);
    int mrs = max_sum(a,mid+1,r);
    //for the left sum
    mlbs = INT_MIN;
    int Max = 0;
    for(int i = mid-1;i>=0;i--){
        Max +=a[i];
        mlbs = max(mlbs,Max);
    }
    // for the right
    Max =  0;
    mrbs = INT_MIN;
    for(int i = mid;i<r;i++){
        Max += a[i];
        mrbs = max(mrbs,Max);
    }
    return max(mrs,max(mls,(mrbs+mlbs)));
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    cout << max_sum(arr,n);
    return 0;
}
