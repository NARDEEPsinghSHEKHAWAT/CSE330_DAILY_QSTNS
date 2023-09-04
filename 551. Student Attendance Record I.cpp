class Solution {
public:
    bool checkRecord(string s) {
        int n=s.length();
        int i=0;
        int con=0,con1=0;
        for(int i=0;i<n;i++){
        if(s[i]=='A'){
        con++;
        con1=0;}
        else if(s[i]=='L')
        {
            con1++;
        }
        else{con1=0;}
        if(con>=2 || con1>=3)
        return false;
    }return true;

    }
};
