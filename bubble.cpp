//////CREATED : 5/31/2021, 9:48:56 AM
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define X first
#define Y second
#define mod 10000000007
using namespace std::chrono;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubble(int arr[],int n){
    int i, j;
    for (i = 0; i < n-1; i++){
    for (j = 0; j < n-i-1; j++){
        if (arr[j] > arr[j+1]) // 1 3 2
        swap(&arr[j], &arr[j+1]);} // 3 2 1 -- > 1 2 3
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ;i<n;i++){
        cin >> arr[i];
    }
    auto start = high_resolution_clock::now();
    bubble(arr,n);
    for(int i = 0;i<n;i++)
    cout << arr[i] << " ";
    auto stop = high_resolution_clock::now();
  	auto duration = duration_cast<nanoseconds>(stop - start);
  	std::cout << duration.count() << "\n";
    return 0;
}
