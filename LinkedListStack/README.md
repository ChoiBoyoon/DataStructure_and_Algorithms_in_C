## LinkedListStack
> 

* 스택의 용량에 제한을 두지 않아도 된다.
* 



Node structure
```Python
typedef struct tagNode{
  char* Data; #this time, we'll store string. char* points to the first character of string. (In C, we can use pointer like a string)
              #this one should assigned in free store (using malloc(strlen(Data)+1)
  struct tagNode* NextNode;
}
```