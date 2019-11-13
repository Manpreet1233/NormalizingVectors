#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <ctype.h>
#define MAX 10

void vector(int numOfItems, double N[MAX]);
void normalize(int numOfItems, double N[MAX]);
//void normalize(double *x,int n);
//void readVal(int numOfItems);

int main() {
    int numOfItems;
    //char numOfItems;
    int i, ch;
    double norm[MAX];
    double N[MAX];
    //double x[n];
    i = scanf("%d", &numOfItems);
    
    //i = numOfItems - '0';
    while ((ch = getc(stdin)) != EOF && numOfItems != 0) {
        //numOfItems >= 1 && numOfItems <= 9
        if (numOfItems >= 1 && numOfItems <= 9) {
            vector(numOfItems, norm);
            printf(" ");
            normalize(numOfItems, norm);
            i = scanf("%d", &numOfItems);
        } else { 
            fprintf(stderr, "BAD INPUT\n");
            i = scanf("%d", &numOfItems);
             
        } 
        //i = scanf("%d", &numOfItems);
    }
    
    exit(0);
    /**
    vector(numOfItems, norm);
    printf(" ");
    normalize(numOfItems, norm);
    //normalize(x, n);
    */
}

void vector(int numOfItems, double N[MAX]) {
    int i, chr; 
    
    for (i = 0; i < numOfItems; i++) {
        scanf("%lf, ", &N[i]);
        if(isalpha(chr = getc(stdin))) {
            fprintf(stderr, "BAD INPUT");
        }
        
    }
    printf("VECTORS: [");
    for (i = 0; i < numOfItems; i++) {
        //NEED TO GET RID OF THE COMMA AT THE END
        printf("%0.3lf, ", N[i]);
    }
    printf("]");
}

void normalize(int numOfItems, double N[MAX]) {
    int i; 
    //double Norm[numOfItems];
    double sum = 0, n = 0;
    //scanf("%d", &numOfItems);
    for (i = 0; i < numOfItems; i++) {
        double a = N[i];
        sum += (a*a);
    }

    n = sqrt(sum);
    for (i = 0; i < numOfItems; i++) {
        N[i] = N[i]/n;
    }

    printf("NORMALIZE: [");
    for (i = 0; i < numOfItems; i++) {
        printf("%0.3lf , ", N[i]);
    }
    printf("]");
}


