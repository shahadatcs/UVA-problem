#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
long int x=0,l;
string str;
while(getline(cin,str))
{
    l=str.length();
    for(int i=0;i<l;i++){
        if(str[i]=='"')
        {
            x++;
            if(x%2==1)
                cout<<"``";
            else cout<<"''";
        }
        else cout<< str[i];
    }
    cout<<endl;
}
return 0;
}

