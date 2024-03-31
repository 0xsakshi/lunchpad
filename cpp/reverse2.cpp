#include<iostream>

using namespace std;

int main(){
int num ;

cout<<" enter a positive number:";
cin>>num;

int rev = 0;

while(num>0){

    int digit = rev*10+digit;


    num= num/10;
}
cout<<"rev num:"<<rev<<endl;

return 0;

}
