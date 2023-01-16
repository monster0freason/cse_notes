#include <climits> //INT_MIN //INT_MAX //
#include <iostream> //cin.getline (s1, s1 max length)/getline(cin,s1)->to input a string with spaces //cin.ignore() ->to clear the input buffer //
#include <string> //s1.append(s2)->to append string s2 to string s1 //s1.clear()->clears the string //s2.compare(s1)->compares s2 to s1 ,+ve output means s2 is greater than s1 //s1.empty()-> cheks if the string is empty //s1.erase(i,n)->deletes n letters from the the string from index i to index i+n-1 //s1.find(n3)->finds the substring n3 in a string n1 and returns the first index if n3 // n1.insert(i,n3)->inserts a string n3 in n1 from index i onwards //s1.size()/s1.length->length of string s1 //s2=s1.substr(i,n)->a substring of s1 from index i to i+n-1 //x=stoi(s1)->converts numerical string into integer //to_string(x)->converts integer to string..used to append a number to other,x=786 to_string(x)+'2'=7862 //trasform(s.begin(),s.end(),s.begin(), ::toupper)->converts all the letters of the string to upper case //
#include <cmath>  //sqrt,
#include <math.h> //pov(x,y),
#include <algorithm> //max(x,y,z,...) // sort(a.begin(),a.end())->ascending order //sort(a.begin(),a.end(),greater<int>()) ->decending order //  __gcd(m, n) //

#include <vector> //anyvector.push_back(new element)->It is used to add a new element at the end of the vector //anyvector.pop_back(new element)->It is used to remove a new element at the end of the vector. 
#include <bits/stdc++.h>//int32_t // __builtin_popcount(unsigned int)->It returns the numbers of set bits in an integer
using namespace std;

int main() {
	int t=0;
	cin>>t;
	while(t--){
	  int n,j=0,k;cin>>n;
	  long long int a[n],b[n],c[n];
	  for(int i=0;i<n;i++){
	      cin>>a[i];
	  }
	  sort(a ,a+n);
	  k=n;
	   for(int i=0;i<n;i++){
	     if(i%2==0){
	         b[i]=a[j];
	         j++;
	     }
	     else{
	         b[i]=a[k-1];
	         k--;
	     }
	  }
	  k=n;
	  j=0;
	  for(int i=0;i<n;i++){
	     if(i%2==0){
	         c[i]=a[k-1];
	         k--;
	     }
	     else{
	         c[i]=a[j];
	         j++;
	     }
	  }
	  
	  bool d=true,e=true;
	  for(int i=1;i<n-1;i++){
	     if(b[i-1]<b[i]&&b[i+1]<b[i]){
	         d=true;
	     }
	     else{
	         d=false;
	         break;
	     }
	    
	  }
	   for(int i=1;i<n-1;i++){
	     if(c[i-1]>c[i]&&c[i+1]>c[i]){
	         e=true;
	     }
	     else{
	         e=false;
	         break;
	     }
	    
	  }
	  if(d==true||e==true){
	       for(int i=0;i<n;i++){
	   if(d){
	        cout<<b[i]<<" ";
	   }
	   else{
	        cout<<c[i]<<" ";
	   }
	    
	  }
	  cout<<endl;
	  }
	  else{
	      cout<<-1<<endl;
	  }
	  
	}
	return 0;
}