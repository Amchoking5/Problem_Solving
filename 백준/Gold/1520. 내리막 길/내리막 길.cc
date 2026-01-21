#include <stdio.h>
 
#define MAX_SIZE 100000

int maze[500][500]={0};
int count[500][500]={0};
bool visit[500][500]={false};

int xx=0,yy=0,maxheap=0;

typedef struct priority_queue {
    int heap[MAX_SIZE];
    int x[MAX_SIZE];
    int y[MAX_SIZE];
    int size;
 
    priority_queue() {
        size = 0;
    }
 
    void swap(int *a, int *b) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
 
    void push(int value,int x1,int y1) {
        if (size + 1 > MAX_SIZE) {
            return;
        }
 
        heap[size] = value;
        x[size]=x1;
        y[size]=y1;
        
 
        int current = size;
        int parent = (size - 1) / 2;
 
        while (current > 0 && heap[current] > heap[parent]) {
            swap(&heap[current], &heap[parent]);
            swap(&x[current], &x[parent]);
            swap(&y[current], &y[parent]);
            current = parent;
            parent = (parent - 1) / 2;
        }
 
        size++;
    }
 
    void pop() {
        if (size <= 0) return;
        
        maxheap = heap[0];
        xx=x[0];
        yy=y[0];
        size--;
 
        heap[0] = heap[size];
        x[0]=x[size];
        y[0]=y[size];
        int current = 0;
        int leftChild = current * 2 + 1;
        int rightChild = current * 2 + 2;
        int maxNode = current;
 
        while (leftChild < size) {
            if (heap[maxNode] < heap[leftChild]) {
                maxNode = leftChild;
            }
            if (rightChild < size && heap[maxNode] < heap[rightChild]) {
                maxNode = rightChild;
            }
 
            if (maxNode == current) {
                break;
            }
            else {
                swap(&heap[current], &heap[maxNode]);
                swap(&x[current], &x[maxNode]);
            	swap(&y[current], &y[maxNode]);
                current = maxNode;
                leftChild = current * 2 + 1;
                rightChild = current * 2 + 2;
            }
        }
    }
 
    int empty() {
        if (size == 0) {
            return 1;
        }
        else {
            return 0;
        }
    }
}priority_queue;
 
 
int main()
{
    int N,M;
    scanf("%d %d", &N,&M);
 
    priority_queue pq;
 
 
 	for(int i=0;i<N;i++){
 		for(int j=0;j<M;j++){
 			scanf("%d",&maze[i][j]);
		}
	}
	
	//아래부터 작성해야 할 것 우선순위q에서 pop을 하면 전역변수 xx,yy,maxheap값이 바뀜
	pq.push(maze[0][0],0,0);
	count[0][0]=1;
	
	
	while(!pq.empty()){
		pq.pop();
		if(xx==N-1 && yy==M-1) break;
		if(visit[xx][yy]) continue;
		visit[xx][yy]=true;
		
		if(xx>0){
			if(maxheap>maze[xx-1][yy]){
				count[xx-1][yy]+=count[xx][yy];
				pq.push(maze[xx-1][yy],xx-1,yy);
			}
		}
		
		if(yy>0){
			if(maxheap>maze[xx][yy-1]){
				count[xx][yy-1]+=count[xx][yy];
				pq.push(maze[xx][yy-1],xx,yy-1);
			}
		}
		
		if(xx<N-1){
			if(maxheap>maze[xx+1][yy]){
				count[xx+1][yy]+=count[xx][yy];
				pq.push(maze[xx+1][yy],xx+1,yy);
			}
		}
		
		if(yy<M-1){
			if(maxheap>maze[xx][yy+1]){
				count[xx][yy+1]+=count[xx][yy];
				pq.push(maze[xx][yy+1],xx,yy+1);
			}
		}
	}
	
	
    printf("%d",count[N-1][M-1]);
}
