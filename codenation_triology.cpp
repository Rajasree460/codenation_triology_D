//greedy algrithm
int solve(vector<int>&arr){
    int n=arr.size();
    int a,b,c;
    sort(arr.begin(),arr.end());
    //we are finding the absolute difference in a,b & c
    a=abs(arr[1]-arr[n-2]);
    b=abs(arr[0]-arr[n-3]);
    c=abs(arr[2]-arr[n-1]); 
    return min(a,min(b,c));
}
int main() {   
    //codenation(triology)
    int tc;
    cin>>tc;
   while(tc--){
       int n;
       cin>>n;
       vector<int>arr(n);
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       cout<<solve(arr)<<endl;
   }
}
