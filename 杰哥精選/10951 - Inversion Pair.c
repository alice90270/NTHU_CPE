#include <stdio.h>

void merge_sort(int low, int high);
void merge(int low, int mid, int high);
long long int in[1000000];
long long int buf[1000000];
long long int answer;

int main(){
    int n, i;
    while(1){
        scanf("%d", &n);
        if(n == 0)
            break;
        for(i = 0; i < n; i++){
            scanf("%lld", &in[i]);
        }
        answer = 0;
        merge_sort(0, n-1);
        printf("%lld\n", answer);
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
        if(in[low1] > in[low2]){
            buf[i] = in[low2];
            low2++;
            answer = answer + mid - low1 + 1;
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
