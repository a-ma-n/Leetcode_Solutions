class Solution {
public:
   
    bool hasAllCodes(string s, int k) {
       
        if(k>s.size()) return false;
        
        unordered_set<string> my_set;
        
        // add all substrings of length k in the unordered set
        for(int i=0;i<=s.size()-k;i++){
            my_set.insert(s.substr(i,k));
        }
        // if finally the size of the set == the total number of possible combns generated by k return true
        return my_set.size()==pow(2,k);
    }
};



 /*powerSet(s);
        vector<string> bin;
        bin.push_back("0");
        bin.push_back("1");
        for(int i=1;i<=k){
            
        }*/
 /*void powerSet(string str, int index = -1,
              string curr = ""){
    int n = str.length();
 
    // base case
    if (index == n)
        return;
 
    // First print current subset
    cout << curr << "\n";
 
    // Try appending remaining characters
    // to current subset
    for (int i = index + 1; i < n; i++) {
 
        curr += str[i];
        powerSet(str, i, curr);
 
        // Once all subsets beginning with
        // initial "curr" are printed, remove
        // last character to consider a different
        // prefix of subsets.
        curr.erase(curr.size() - 1);
    }
    return;
}
*/
    