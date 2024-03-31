#include<iostream>
using namespace std;

 string move(string str){ 

    if(str ==""){
        return str;
    }
  string substring = str.substr(1);

  string ansfrommyfriend = move(substring);

  //char ch = str[0];

  string ch = str.substr(0,1);
  if(ch == "x"){
    return ansfrommyfriend + ch;

  }
  else{
    return ch+ ansfrommyfriend; 

  }

}
int main(){
    string str = "axbxcxdx";
    cout<< move(str) << endl;
    return 0;
}
