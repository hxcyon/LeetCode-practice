from itertools import permutations

class Solution:
    def numTilePossibilities(self, tiles: str) -> int:  
        result = []
        for i in range(1, len(tiles)+1):
            result += list(permutations(tiles, i))
    
        return len(set(result))
