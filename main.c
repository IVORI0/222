

#include <stdio.h>

double power(int i, int ex){
    double result=1.0;
    for (int j=0; j<ex; j++){
        result*=i;
    }
    return result;
}

int main(void){
    int i=5;
    for(int ex=0; ex<=10; ex++){
        printf("%.0f ", power(i, ex));
        
    }
    return 0;
}