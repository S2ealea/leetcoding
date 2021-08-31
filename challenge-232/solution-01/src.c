
	typedef struct List
	{
		int val;
		struct List* next;
	} MyQueue;

	/** Initialize your data structure here. */
	MyQueue* myQueueCreate() {
		MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
		obj->next = NULL;
		obj->val = 0;
		return obj;
	}

	/** Push element x to the back of queue. */
	void myQueuePush(MyQueue* obj, int x) {
		MyQueue* newnode = (MyQueue*)malloc(sizeof(MyQueue));
		newnode->val = x;
		newnode->next = NULL;
		MyQueue* tmp = obj;
		if ( obj->next == NULL )
		{
			obj->next = newnode;
		}
		else{
			while( tmp->next != NULL ){
				tmp = tmp->next;
			}
			tmp->next = newnode;  
		    }
		}


	/** Removes the element from in front of queue and returns that element. */
	int myQueuePop(MyQueue* obj) {
		int val = 0;
		if (obj->next == NULL ){
			return 0;
		}
		if ( obj->next->next == NULL ){
			val = obj->next->val;
			obj->next = NULL;
		}
		else{
			val = obj->next->val;
			obj->next = obj->next->next;
		}

		return val;


	}

	/** Get the front element. */
	int myQueuePeek(MyQueue* obj) {
		return obj->next->val;

	}

	/** Returns whether the queue is empty. */
	bool myQueueEmpty(MyQueue* obj) {
		return obj->next == NULL;

	}

	void myQueueFree(MyQueue* obj) {
		if ( obj->next !== NULL)
		{
			myQueueFree(obj->next);
		}
		else{
			free(obj->next);
		}
		free(obj);

	}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/

