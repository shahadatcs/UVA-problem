#include<iostream>
using namespace std;
int main(){
 string s;
  int n=0;
  while(cin>>s){
    if(s=="*") break;
    cout<<"Case " << ++n << ": ";
    if(s=="Hajj")
          cout << "Hajj-e-Akbar" << endl;
        else
            cout << "Hajj-e-Asghar" << endl;
  }
  return 0;
}
