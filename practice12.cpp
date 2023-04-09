#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int query;
    cin>>query;
    
    int output = 0;
    
    for(int i = 0 ; i < query ; i++)
    {
        unsigned long long int X_number;
        cin>>X_number;
        unsigned long long int X_copied = 0 ;
        
        for(unsigned long long int j = X_number ; j != X_copied ; j = j * 2)
        {
            if(j % 10 != 0)
            {
                X_copied = j;
                X_number = j;
                output++;
            }
            else if(j > pow(10,9))
            {
                X_copied = j;
                X_number = j;
                break;
            }
            else
            {
                X_number = j;
                break;
            }
            
        }
        
        if(X_copied == X_number)
        {
            output = -1;
        }
        
        cout<<output<<endl;
    }
    
    return 0;
}
