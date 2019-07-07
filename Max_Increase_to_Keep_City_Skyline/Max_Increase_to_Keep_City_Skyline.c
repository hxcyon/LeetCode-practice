int findmin(int a, int b){
    if(a < b)
        return a;
    else return b;
}

int maxToporBottom(int index, int **grid, int gridSize){
    int i;
    int max = 0;
    for(i = 0; i < gridSize; i++){
        if(max < grid[i][index])
            max = grid[i][index];
    }
    return max;
}

int maxLeftorRight(int index, int **grid, int gridSize){
    int i;
    int max = 0;
    for(i = 0; i < gridSize; i++){
        if(max < grid[index][i])
            max = grid[index][i];
    }
    return max;
}
    
int maxIncreaseKeepingSkyline(int** grid, int gridSize, int* gridColSize){

    int i, j;
    int max = 0;
    int sum = 0;
    int min = 0;
    int res = 0;
    int maxleftright[50] = {};
    int maxtopbottom[50] = {};
    
    for(i = 0; i < gridSize; i++){
        maxleftright[i] = maxLeftorRight(i, grid, gridColSize[i]);
    }
    
    for(i = 0; i < *gridColSize; i++){
        maxtopbottom[i] = maxToporBottom(i, grid, gridSize);   
    }
    
    for(i = 0; i < gridSize; i ++){
        for(j = 0; j < *gridColSize; j++){
            min = findmin(maxleftright[i], maxtopbottom[j]);
            sum = sum + (min - grid[i][j]);
        }
    }
    return sum;
}
