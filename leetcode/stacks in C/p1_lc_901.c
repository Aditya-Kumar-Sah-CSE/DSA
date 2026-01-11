#include<stdio.h>

typedef struct {
    int price;
    int span;
} Pair;

typedef struct 
{
    Pair*stack;
    int top;
    int capacity;

} StockSpanner;
StockSpanner* stockSpannerCreate(){
    StockSpanner* obj = (StockSpanner*)malloc(sizeof(StockSpanner));
    obj->capacity = 10000;
    obj->top = -1;
    obj->stack = (Pair*)malloc(sizeof(Pair)*obj->capacity);

    return obj;


}

int stockSpannerNext(StockSpanner* obj, int price){
    int span = 1;

    while(obj->top != -1 && obj->stack[obj->top].price<=price){
        span+=obj->stack[obj->top].span;
        obj->top--;
    }

    obj->top++;
    obj->stack[obj->top].price = price;
    obj->stack[obj->top].span=span;

    return span;
}
// free memory
void stockSpannerFree(StockSpanner*obj){
    free(obj->stack);
    free(obj);
}
int main(){

}