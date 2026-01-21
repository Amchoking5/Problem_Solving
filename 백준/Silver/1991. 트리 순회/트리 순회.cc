#include <stdio.h>
#include <cstdio>

char v[26][3]={'.',};

void preorder(char root){
	if(root =='.') return;
	printf("%c",v[root-'A'][0]);
	preorder(v[root-'A'][1]);
	preorder(v[root-'A'][2]);
}

void inorder(char root){
	if(root =='.') return;
	inorder(v[root-'A'][1]);
	printf("%c",v[root-'A'][0]);
	inorder(v[root-'A'][2]);
}

void postorder(char root){
	if(root =='.') return;
	postorder(v[root-'A'][1]);
	postorder(v[root-'A'][2]);
	printf("%c",v[root-'A'][0]);
}

int main(){
	int n;
	char root,left,right;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf(" %c %c %c",&root,&left,&right);
		v[root-'A'][0]=root;
		v[root-'A'][1]=left;
		v[root-'A'][2]=right;
	}
	
	preorder('A');
	printf("\n");
	inorder('A');
	printf("\n");
	postorder('A');
}