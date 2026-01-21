#include <stdio.h>
 
#define MAX_SIZE 100000

#define ABS(x) (((x)>0)? (x) : (-1)*(x))
 
typedef struct priority_queue {
    int heap[MAX_SIZE];
    int size;
 
    priority_queue() {
        size = 0;
    }
 
    void swap(int *a, int *b) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
 
    int push(int value) {
        if (size + 1 > MAX_SIZE) {
            return 0;
        }
 
        heap[size] = value;
 
        int current = size;
        int parent = (size - 1) / 2;
 
        while (current > 0 && (ABS(heap[current]) < ABS(heap[parent]) || (ABS(heap[current]) == ABS(heap[parent]) && heap[current] < heap[parent]) )) {
            swap(&heap[current], &heap[parent]);
            current = parent;
            parent = (parent - 1) / 2;
        }
 
        size++;
 
        return 1;
    }
 
    int pop() {
        if (size <= 0) return -1;
 
        int ret = heap[0];
        size--;
 
        heap[0] = heap[size];
        int current = 0;
        int leftChild = current * 2 + 1;
        int rightChild = current * 2 + 2;
        int maxNode = current;
 
        while (leftChild < size) {
            if (ABS(heap[maxNode]) > ABS(heap[leftChild])) {
                maxNode = leftChild;
            }
            if (ABS(heap[maxNode]) == ABS(heap[leftChild]) && heap[maxNode] > heap[leftChild]){
            	maxNode = leftChild;
			}
            if (rightChild < size && ABS(heap[maxNode]) > ABS(heap[rightChild])) {
                maxNode = rightChild;
            }
            if (rightChild < size && heap[maxNode] > heap[rightChild] && ABS(heap[maxNode]) == ABS(heap[rightChild])) {
                maxNode = rightChild;
            }
 
            if (maxNode == current) {
                break;
            }
            else {
                swap(&heap[current], &heap[maxNode]);
                current = maxNode;
                leftChild = current * 2 + 1;
                rightChild = current * 2 + 2;
            }
        }
        
        return ret;
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
 
 
int main(int argc, char* argv[])
{
    int N;
    scanf("%d", &N);
 
    priority_queue pq;
 
    for (int i = 0; i < N; i++)
    {
        int value;
        scanf("%d", &value);
        if(value==0){
        	if(pq.empty()){
        		printf("0\n");
			}
        	else{
        		printf("%d\n",pq.pop());
			}
		}
		else{
			pq.push(value);
		}
    }
    return 0;
}
