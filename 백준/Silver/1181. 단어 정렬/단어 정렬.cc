#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
 
//구조체, C++ style. 
struct Word{
    int len;
    char arr[51];
};
 
//sort 의 기준이 되는 함수. 
bool comp(const Word &s1,const Word &s2){
    
    if(s1.len == s2.len){ //사이즈가 같으면, 사전순 앞으로. 
        for(int i=0; i< s1.len; i++){
            if(s1.arr[i] == s2.arr[i]) continue;
            else if(s1.arr[i] < s2.arr[i]) return true;
            else return false;
        }
    }
    return s1.len < s2.len;    //사이즈 다르면 작은게 앞으로. 
    
}
 
int main(void){
    int n;
    scanf("%d", &n); //C style
    
    Word *word = new Word[n]; //동적할당. 
    
    for(int i=0; i<n; i++){
        scanf("%s", word[i].arr); //C style
        word[i].len = strlen(word[i].arr);
        
    }    
    
    sort(word, word+n , comp);    //정렬.
    
    for(int i=0; i<n; i++){ //배열을 이용한 비교. 
        if(i!=0){
            if(!strcmp(word[i].arr, word[i-1].arr)){ //중복제거 
                continue;
            }
        }
        printf("%s\n", word[i].arr); //C style
    }
    
    delete []word; //메모리 할당 해제 
    return 0;
}
