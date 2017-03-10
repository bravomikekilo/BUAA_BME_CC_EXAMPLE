#include <cstdio>

char judge(const int& i){
    if (i >= 90){
        return 'A';
    }else if(i >= 80){
        return 'B';
    }else if(i >= 70){
        return 'C';
    }else if(i >= 60){
        return 'D';
    }else{
        return 'E';
    }
}

int main(){
    printf("please input the score\n");
    int i; scanf("%d", &i);
    printf("judge is %c\n", judge(i));
}