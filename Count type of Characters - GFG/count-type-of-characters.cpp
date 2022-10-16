//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            int numLower=0;
            int numUpper=0;
            int numSpecial=0;
            int numNumeric=0;
            for(int i=0;i<s.size();i++){
                if(islower(s[i])){
                    numLower++;
                }
                else if(isupper(s[i])){
                    numUpper++;
                }
                else if(isdigit(s[i])){
                    numNumeric++;
                }
                else{
                    numSpecial++;
                }
            }
            vector<int> x;
            x.push_back(numUpper);
            x.push_back(numLower);
            x.push_back(numNumeric);
            x.push_back(numSpecial);
            return x;
            //code here.
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends