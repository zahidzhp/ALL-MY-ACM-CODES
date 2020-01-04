
#include <stdio.h>
#include <stdint.h>

int main(){
    
    int lowerLimit,upperLimit;
    scanf("%d %d",&lowerLimit,&upperLimit);
    printf("%d",psudoRandom(lowerLimit,upperLimit)); // This will return a random number excludin the upperLimit.
    
    return 0;
}


int psudoRandom(int lowerLimit, int higherLimit){
    
    int generatedRandomNumber = 0;
    int range = higherLimit - lowerLimit;
    char target = "*";
    generatedRandomNumber = (int) (((long long) &target % range)+lowerLimit);
    
    return generatedRandomNumber;
}
