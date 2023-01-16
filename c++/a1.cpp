#include <iostream>
using namespace std;
struct arrayadt{
    int arr[20];
    int size;
    int n;
};

int linear_search(struct arrayadt A,int key){
    for(int i=0;i<A.n;i++ ){
        if(A.arr[i]==key){
            return i;
        }
    
    } 
    return -1;
}
void binary_search(struct arrayadt A,int key,int hi,int lo){
   lo = 0; 
   hi = A.size - 1;
  int mid;
    
    while (hi - lo > 1) {
        int mid = (hi + lo) / 2;
        if (A.arr[mid] < key) {
            lo = mid + 1;
        }
        else {
            hi = mid;
        }
    }
    if (A.arr[lo] == key) {
        cout << "Found"
             << " At Index " << lo << endl;
    }
    else if (A.arr[hi] == key) {
        cout << "Found"
             << " At Index " << hi << endl;
    }
    else {
        cout << "Not Found" << endl;
    }
}

int main(){
    struct arrayadt A;
    int key,result,lo,hi;
    cout<<"enter the value of n"<<endl;
    cin>>A.n;
    for(int i=0;i<A.n;i++){
        cout<<"enter value of arr["<<i<<"]"<<endl;
        cin>>A.arr[i];
    }
    cout<<"enter key: "<<endl;
    cin>>key;
    // result=linear_search(A,key);
    // cout<<result<<endl;
   binary_search(A,key,hi,lo);
   
    return 0;
}