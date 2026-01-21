#include <stdio.h>
 
#define MAX_SIZE 100000
 
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
 
    int pushmax(int value) {
        if (size + 1 > MAX_SIZE) {
            return 0;
        }
 
        heap[size] = value;
 
        int current = size;
        int parent = (size - 1) / 2;
 
        while (current > 0 && heap[current] > heap[parent]) {
            swap(&heap[current], &heap[parent]);
            current = parent;
            parent = (parent - 1) / 2;
        }
 
        size++;
 
        return 1;
    }
    
    int pushmin(int value) {
        if (size + 1 > MAX_SIZE) {
            return 0;
        }
 
        heap[size] = value;
 
        int current = size;
        int parent = (size - 1) / 2;
 
        while (current > 0 && heap[current] < heap[parent]) {
            swap(&heap[current], &heap[parent]);
            current = parent;
            parent = (parent - 1) / 2;
        }
 
        size++;
 
        return 1;
    }
    
    int printmax(){
    	return heap[0];
	}
 
    int popmax() {
        if (size <= 0) return -1;
 
        int ret = heap[0];
        size--;
 
        heap[0] = heap[size];
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
                current = maxNode;
                leftChild = current * 2 + 1;
                rightChild = current * 2 + 2;
            }
        }
        
        return ret;
    }
    
    int popmin() {
        if (size <= 0) return -1;
 
        int ret = heap[0];
        size--;
 
        heap[0] = heap[size];
        int current = 0;
        int leftChild = current * 2 + 1;
        int rightChild = current * 2 + 2;
        int maxNode = current;
 
        while (leftChild < size) {
            if (heap[maxNode] > heap[leftChild]) {
                maxNode = leftChild;
            }
            if (rightChild < size && heap[maxNode] > heap[rightChild]) {
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
    int N,check=1;
    bool first=true;
    scanf("%d", &N);
 
    priority_queue pqmax;
    priority_queue pqmin;
 
    for (int i = 0; i < N; i++)
    {
        int value,keep;
        scanf("%d", &value);
        if(first){
        	pqmax.pushmax(value);
        	first=false;
        	check=0;
        	printf("%d\n",pqmax.printmax());
        	continue;
		}
        if(check%2){
        	keep=pqmin.popmin();
        	if(value>keep){
        		pqmin.pushmin(value);
        		pqmax.pushmax(keep);
			}
			else{
				pqmin.pushmin(keep);
				pqmax.pushmax(value);
			}
		}
		else{
			keep=pqmax.popmax();
			if(value<keep){
				pqmin.pushmin(keep);
        		pqmax.pushmax(value);
			}
			else{
				pqmin.pushmin(value);
        		pqmax.pushmax(keep);
			}
		}
		check=(check+1)%2;
        printf("%d\n",pqmax.printmax());
    } 
}
