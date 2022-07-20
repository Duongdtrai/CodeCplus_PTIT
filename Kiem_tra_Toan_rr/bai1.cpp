#include<iostream>
using namespace std;
bool p=0,q=0,r=0,s=0;
bool Bool[5];
void Result(int dem)//first 1
{
    if(dem<=4) 
    {
        Bool[dem] = 0;
        Result(dem+1);
        Bool[dem] = 1;
        Result(dem+1);
    }
    else
    {
        if((((!Bool[1]||Bool[2]) && (!Bool[3]||Bool[4]) && (Bool[3]||!Bool[4])) || !Bool[1])) cout<<"T"<<endl;
        else cout<<"F"<<endl;
    }
}

int main()
{
    Result(1);
}