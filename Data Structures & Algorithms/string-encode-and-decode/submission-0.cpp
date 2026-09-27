class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded="";
        for(string s :strs)
        {
            int len= s.size();
            encoded+=to_string(len);
            encoded+="#";
            encoded+=s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int siz=s.size();
        int i=0;
        while(i<siz)
        {
            int j=i+1;
            string str;
            while(s[j]!='#')
            {
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            str=s.substr(j+1,len);
            res.push_back(str);
            i=j+len+1;

        }
        return res;
    }
};
