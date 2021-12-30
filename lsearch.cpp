int linear_search(int search_value, int lst[], int elements);

int linear_search(int search_value, int lst[], int elements){
    for(int i=0;i<elements;i++){
        if(lst[i]==search_value){
            return i+1;
        }
    }
    return elements;
}