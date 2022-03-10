

bool squareIsWhite(char * coordinates) {
    
    int check = (coordinates[0]-'a'+1) + (coordinates[1]-'0');
    
    return check%2 != 0;
}
