#include <stdio.h>
#include <string.h>

int count;

int recursion(const char *s, int l, int r){
    count=count+1;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        count=0;
        char s[1001];
        scanf("%s",s);
        printf("%d ",isPalindrome(s));
        printf("%d\n",count);
    }
}