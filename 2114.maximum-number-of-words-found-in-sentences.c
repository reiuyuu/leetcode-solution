

int mostWordsFound(char ** sentences, int sentencesSize){
    
    int mostWords = 0;
    
    for (int i = 0; i < sentencesSize; i++)
    {
        int currWords = 1;
        
        for (int j = 0; sentences[i][j] != '\0'; j++)
        {
            if (sentences[i][j] == ' ')
                currWords++;
        }
        
        if (mostWords < currWords)
            mostWords = currWords;
    }
    
    return mostWords;

}
