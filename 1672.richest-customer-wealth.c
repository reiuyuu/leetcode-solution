

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    
    int maxWealthSoFar = 0;
    
    for (int m = 0; m < accountsSize; m++)
    {
        int currWealth = 0;
        
        for (int n = 0; n < *accountsColSize; n++)
        {
            currWealth += accounts[m][n];
        }
        
        // Compare
        if (maxWealthSoFar < currWealth)
        {
            maxWealthSoFar = currWealth;
        }
    }
    
    return maxWealthSoFar;
}
