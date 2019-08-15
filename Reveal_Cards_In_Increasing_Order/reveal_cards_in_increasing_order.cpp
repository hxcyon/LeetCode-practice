class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        
        sort(deck.begin(), deck.end());
        
        if(deck.size() < 3){
            return deck;
        }
        
        deque<int> ans;
        ans.push_back(deck.back());
        deck.pop_back();
        
        while(!deck.empty()){
            ans.push_front(ans.back());
            ans.pop_back();
            ans.push_front(deck.back());
            deck.pop_back();
        }
        return vector<int> (ans.begin(), ans.end());
    }
};
