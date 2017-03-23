#include <stdio.h>
#include <string.h>

typedef struct cc{
    int num;
    char nam[11];
}node;

node in[1000000];
node buf[1000000];

void merge(int low, int mid, int high);
void merge_sort(int low, int high);

int main(){
    int n, i;
    char gar;
    while(scanf("%d", &n)!=EOF){
        scanf("%c", &gar);
        for(i = 0; i < n; i++){
            scanf("%s", in[i].nam);
            scanf("%d", &in[i].num);
            scanf("%c", &gar);
        }
        /*for(i = 0; i < n; i++){
            printf("%s %d\n", in[i].nam, in[i].num);
        }*/
        merge_sort(0, n-1);
        for(i = 0; i < n; i++){
            printf("%s %d\n", in[i].nam, in[i].num);
        }
    }
    return 0;
}

void merge_sort(int low, int high){
    if(low >= high)
        return;
    int mid;
    mid = (low + high)/2;
    merge_sort(low, mid);
    merge_sort(mid+1, high);
    merge(low, mid, high);
}

void merge(int low, int mid, int high){
    int low1, low2, i;
    for(low1 = low, low2 = mid+1, i = low; low1 <= mid && low2 <= high; i++){
        if(in[low1].num > in[low2].num){
            buf[i] = in[low2];
            low2++;
        }
        else{
            buf[i] = in[low1];
            low1++;
        }
    }
    while(low1 <= mid){
        buf[i] = in[low1];
        low1++;
        i++;
    }
    while(low2 <= high){
        buf[i] = in[low2];
        low2++;
        i++;
    }
    for(i = low; i <= high; i++){
        in[i] = buf[i];
    }
}
