#include<iostream>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y;
        cin>>x>>y;
        if(x<y) cout<<"<";
        else if(x>y) cout<<">";
        else cout<<"=";
        cout<<endl;
    }

return 0;
}
