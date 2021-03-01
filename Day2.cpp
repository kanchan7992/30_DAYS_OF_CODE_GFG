#include<iostream>
using namespace std;
long long findNth(long long N)
    {
        long mul=1;
        long res=0;
        while(N!=0)
            {
                long dig=N%9;

                res=res+mul*dig;
                 N=N/9;

                mul=mul*10;

            }
        return res;
        }



int main()
{
long long N;
cout<<"Input the value of N: ";
cin>>N;
cout<<findNth(N);

}
