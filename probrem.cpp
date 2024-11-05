#include "iostream"
using namespace std;
//
//template<typename T>
//void printArray(T arr[], int n){
//    for(int i=0; i<n; i++){
//        cout<<arr[i]<<" ";
//    }
//}
//
//template<typename T>
//void inputArray(T arr[], int n){
//    for(int i=0; i<n; i++){
//        cin>>arr[i];
//    }
//}
//int main(){
//    return 0;
//}
int main(){
    int n;
    cin>>n;
    int sum=0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
}