#define max 20

typedef struct{
int item[max],top;
}stack;

   void initialize(stack *s){
   s->top=0;
    }
int top(stack *s){
   int item=pop(s);
    push(s,item);
return item;}

int pop(stack *s){
     s->top--;
     int item=s->item[s->top];
return item;}

void push(stack *s,int item){
    s->item[s->top]=item;
    s->top++;
     }

int main(){
stack s;
initialize(&s);
push(&s,5);
push(&s,3);
printf("%d",pop(&s));
printf("%d",top(&s));
printf("%d",pop(&s));
return 0;}
