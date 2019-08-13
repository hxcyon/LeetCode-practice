class Solution {
public:
    bool judgeCircle(string moves) {
        int i;
        bool flag;
        //int temp = moves[0];
        int countUD = 0, countLR = 0;
        
        if(moves.length() == 0)
            return true;
        
        for(i = 0; i < moves.length(); i++){
            switch(moves[i]){
                case 'U': countUD++;
                    break;
                case 'D': countUD--;
                    break;
                case 'L': countLR++;
                    break;
                case 'R': countLR--;
                    break;
            }
        }
        
        return countUD == 0 && countLR == 0;
    }
};
