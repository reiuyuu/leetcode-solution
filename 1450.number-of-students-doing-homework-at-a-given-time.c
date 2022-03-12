

int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime) {
    
    int stu = 0;
    
    for (int i = 0; i < endTimeSize; i++) {
        if (queryTime >= startTime[i] && queryTime <= endTime[i]) {
            stu++;
        }
    }
    
    return stu;
}
