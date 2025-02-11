class Solution {
public:
    string removeOccurrences(string s, string part) {
        string temp = s;
        
        while((temp.length() != 0) && temp.find(part) < temp.length()){
            temp.erase(temp.find(part),part.length());
        }
        return temp;
    }
};