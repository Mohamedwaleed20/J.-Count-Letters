#include <iostream>
#include<bits/stdc++.h>

using namespace std ;

int main()
{
       string a ;
       cin >> a ;
       sort(a.begin(),a.end());
       for(int i = 0 ; i < a.size() ; i++ )
       {
           char x = a[i];
           int c = 1;
           while(x==a[++i])
           {
               c++;
           }
           i--;
           cout << x <<" " << ":" << " " << c << endl;

       }


    return 0;
}
