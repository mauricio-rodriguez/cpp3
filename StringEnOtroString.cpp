
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    string s1;
    string s2;
  cout<<"ingrese string 1: "<<endl;
  cin>>s1;
  cout<<"ingrese string 2: "<<endl;
  cin>>s2;
  int posicion=s1.find(s2);
  int longituds2=s2.length();
  if (posicion != -1){
      cout<<"found"<<endl;
      s1.erase(posicion,longituds2);
      cout<<s1;
  }
return 0;
}
