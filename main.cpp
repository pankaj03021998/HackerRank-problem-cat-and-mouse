#include <iostream>

using namespace std;

string cat(int x,int y,int z)
{
    if(z<y && z>x)
    {
        if(y-z==z-x)
        return "Mouse C";
        else if(z-x<y-z)
        return "Cat A";
        else
        return "Cat B";

    }
    else if(z>x && x>y)
    {
        return "Cat A";
    }
    else if(z<x && x<y)
    return "Cat A";
    else
    return "Cat B";



}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        cout<<cat(x,y,z)<<endl;
    }
}
