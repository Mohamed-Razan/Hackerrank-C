// Question: https://www.hackerrank.com/challenges/sorting-array-of-strings/problem


int lexicographic_sort(const char* a, const char* b);
int lexicographic_sort_reverse(const char* a, const char* b);
int sort_by_number_of_distinct_characters(const char* a, const char* b);
int sort_by_length(const char* a, const char* b);
void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b));

int lexicographic_sort(const char* a, const char* b) {
    if(strcmp(a, b) > 0){
        return 1;
    }
    else{
        return -1;
    }
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    if(strcmp(a, b) > 0){
        return -1;
    }
    else{
        return 1;
    }
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int i, j, count1 = 0, count2 = 0, sum1 = 1, sum2 = 1;
    for(i = 0; i < strlen(a)-1; i++){
        for(j = i+1; j < strlen(a); j++){
            if(a[i] == a[j]){
                count1 = 1;
            }
        }
        if(count1 == 0){
            sum1 = sum1 + 1;
        }
        count1 = 0;
    }
    for(i = 0; i < strlen(b)-1; i++){
        for(j = i+1; j < strlen(b); j++){
            if(b[i] == b[j]){
                count2 = 1;
            }
        }
        if(count2 == 0){
            sum2 = sum2 + 1;
        }
        count2 = 0;
    }
    if(sum1 < sum2){
        return -1;
    }
    else if(sum1 > sum2){
        return 1;
    }
    else{
        return lexicographic_sort(a, b);
    }
}

int sort_by_length(const char* a, const char* b) {
    if(strlen(a) < strlen(b)){
        return -1;
    }
    else if(strlen(a) > strlen(b)){
        return 1;
    }
    else{
        return lexicographic_sort(a, b);
    }
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int i, j, res;
    char *temp;
    for(i = 0; i < len-1; i++){
        for(j = i+1; j < len; j++){
            res = (*cmp_func)(arr[i], arr[j]);
            if(res == 1){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

