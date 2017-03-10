#include <cstdio>

int main(){
    int i; scanf("%d\n", &i);
    if(i % 3){
        if(i % 5){
            if(i % 7){
                printf("NONE\n");
            }else{
                printf("only 7\n"); 
            }
        }else{
            if(i % 7){
                printf("only 5\n");
            }else{
                print("5, 7\n");
            }
        }
    }else{
        if (i % 5){
            if(i % 7){
                printf("only 3\n");
            }else{
                printf("3, 7\n");
            }
        }else{
            if(i % 7){
                print("3, 5\n");
            }else{
                printf("ALL \n");
            }
        }
    }
}