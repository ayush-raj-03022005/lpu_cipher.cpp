#include<iostream>
using namespace std;
int getsum(int*arr,int size){
    
    if(size==0)return 0;
    if(size==1) {
       return arr[0];
    }
   int sum=arr[0]+getsum(arr+1,size-1);
   return sum;

}
int main(){
    int n;
    cin>>n;//size
    int arr[n];
     cout<<" Enter the value";
    for (int i=0;i<n;i++){
       
        cin>>arr[i];
    }
    int sum=getsum(arr,n);
    cout<<"sum is "<<sum<<endl;
}
