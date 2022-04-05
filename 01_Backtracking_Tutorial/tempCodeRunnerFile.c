#include <stdio.h>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[]){
    char A[20];
    scanf("%s", &A);
    for(int i=0; i<=strlen(A); i++){
        for(int j=0; j<i; j++){
            printf("%c*", A[j]);
        }
        printf("\n");
    }
    return 0;
}
