class Solution {
public:
    bool judgeCircle(string moves) {
        int hor=0,ver=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='L')   hor++;
            else if(moves[i]=='R') hor--;
            else if(moves[i]=='U') ver++;
            else ver--;
        }
        if(hor==0 && ver==0) return 1;
            return 0;
    }
};