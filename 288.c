/*************************************************************************
	> File Name: 288.c
	> Author: LiChun
	> Mail: 318082789@qq.com
	> Created Time: 2019年07月17日 星期三 17时51分15秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct Heap {
    int *data, size;
} Heap;

void init(Heap *h, int length_input) {
    h->data = (int *)malloc(sizeof(int) * length_input);
    h->size = 0;
    return ;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void push(Heap *h, int value) {
    h->data[h->size] = value;
    int current = h->size;
    int father = (current - 1) / 2;
    while (h->data[current] > h->data[father]) {
        swap(&h->data[current], &h->data[father]);
        current = father;
        father = (current - 1) / 2;
    }
    h->size++;    
}

void output(Heap *h) {
    for (int i = 0; i < h->size; i++) {
        printf("%d ", h->data[i]);
    }
    printf("\n");
    return ;
}

int top(Heap *h) {
    return  h->data[0];
}

void update(Heap *h, int pos, int n) {
    int lchild = pos * 2 + 1;
    int rchild = pos * 2 + 2;
    int max = pos;
    if (lchild < n && h->data[max] < h->data[lchild]) {
        max = lchild;
    }
    if (rchild < n && h->data[max] < h->data[rchild]) {
        max = rchild;
    }
    if (max != pos) {
        swap(&h->data[max], &h->data[pos]);
		update(h, max, n);
	}
	return ;
}

void pop(Heap *h) {
    swap(&h->data[0], &h->data[h->size - 1]);
    h->size--;
    update(h, 0, h->size);
}

void heap_sort(Heap *h) {
    for (int i = h->size - 1; i > 0; i--) {
        swap(&h->data[0], &h->data[i]);
        update(h, 0, i);
    }
    return ;
}

void clear(Heap *h) {
    free(h->data);
    free(h);
    return ;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    Heap *heapl = (Heap *)malloc(sizeof(Heap));
    Heap *heapr = (Heap *)malloc(sizeof(Heap));
    init(heapl, n);
    init(heapr, n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int i = 0, j = 0;
    for (int o = 0; o < m; o++) {
        int k;
        scanf("%d", &k);
        for (; i < k; i++, j++) {
            push(heapl, arr[j]);
        }
        heap_sort(heapl);
        if (heapl->size > k) {
            printf("%d ", heapl->data[k - 1]);
        } else {
            printf("%d ", heapl->data[heapl->size - 1]);
        }
    }
    return 0;
}
