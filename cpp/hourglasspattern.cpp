#include<iostream>
using namespace std;

int main(){


   int n;
   cin>>n;

   int i =1;
   while(i<=n){

    int i=n;
   
        int j =1;
while(j<=n-i){

    cout<<" ";
    j++;
}
j=1;
while(j<=2*i-1){

    cout<<" *";
    j++;
}
i =i-1;

}
  i =2;
   while(i<=n){
   
        int j =1;
while(j<=n-i){

    cout<<" ";
    j++;
}
j=1;
while(j<=2*i-1){

    cout<<" *";
    j++;
}
cout<<endl;

i =i+1;
}
return 0;

   }
    

