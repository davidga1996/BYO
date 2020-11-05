#ifndef HEADER_CPP
#define HEADER_CPP

#include <bits/stdc++.h>
using namespace std;



void bruteForce(string text , string pat){
    int n= text.size();                             // length of text
    int m= pat.size();                              // length of pattern
    int s,j;
    for(s=0;s<=n-m;s++){             // Iteration over n-m+1 values of shift
        for(j=0;j<m;j++){
            if(pat[j]!=text[s+j]) break;
        }
        if(j==m) cout<<"Pattern found at : "<<s<<endl;
    }
}


#endif // HEADER_CPP
