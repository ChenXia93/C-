#include <iostream>
using namespace std;
struct Queue{
    int qSize;
    int front;
    int rear;
    int *Q;

    static void create(struct Queue *queue, int size);
    void enQueue(struct Queue *queue, int x);
    static int deQueue(struct Queue *queue);
    static void display(struct Queue *queue);

    //default constructor
public:
    Queue(){
        qSize = 7;
        //circular Queue front/rear = 0
        front = rear = 0;
        Q = new int(qSize);
    }
    // second constructor
//     Queue(int size){
//       this -> qSize = size;
//       this-> front =  this-> rear = -1;
//       this -> Q = new int (this->qSize);
//
//    }
};

void Queue::create(struct Queue *queue, int size ){
    queue->qSize = size;
    queue->front = queue->rear = 0;
    queue->Q = new int (queue->qSize);

}

void Queue::enQueue(struct Queue *queue, int x){
    if((queue->rear+1) % queue->qSize == queue->front){
        cout<<"Queue is full\n";
    }else{
        queue->rear = (queue->rear + 1) % queue -> qSize;
        queue->Q[queue->rear] = x;
    }
}

int Queue:: deQueue(struct Queue *queue){
    int x = -1;
    if(queue->front == queue->rear){
        cout<<"Queue is empty\n";
    }else{
        queue->front = (queue->front + 1) % queue -> qSize;
        x = queue->Q[queue->front];
    }
    return x;
}

void Queue:: display(struct Queue *queue){
    int i;
    for(i = queue->front + 1; i <= queue->rear; i++){
        cout<<"queue->Q["<<i<<"]: " << queue->Q[i] << " ";
    }
    cout<<endl;
}

//void Queue:: display(struct Queue *queue){
//    int i = queue->front + 1;
//    do{®
//        cout<<"queue->Q["<<i<<"]"<<queue->Q[i]<<endl;
//        i = (i + 1) % queue->qSize;
//    }while(i != (queue->rear + 1) % queue->qSize);
//}


int main(){
    cout<<"Hello"<<endl;
    // create a queue
    struct Queue q;
    q.create(&q, 10);
    // enqueuing into queue
    q.enQueue(&q, 10);
    q.enQueue(&q, 20);
    q.enQueue(&q, 30);
    q.enQueue(&q, 40);
    q.enQueue(&q, 40);
    q.deQueue(&q);
    q.deQueue(&q);
    q.enQueue(&q, 20);
    q.enQueue(&q, 30);
    q.enQueue(&q, 40);
    q.enQueue(&q, 40);

    // displaying
    q.display(&q);

    // deQueuing
    cout<<"deQueuing"<<endl;
    q.deQueue(&q);

    // displaying
    q.display(&q);


    return 0;
}


/*
 * CircluarQueue usingArray
 * #include <iostream>

using namespace std;

class CircularQueue{
private:
    int size;
    int front;
    int rear;
    int* Q;
public:
    CircularQueue(int size);
    ~CircularQueue();
    bool isFull();
    bool isEmpty();
    void enqueue(int x);
    int dequeue();
    void display();
};

CircularQueue::CircularQueue(int size) {
    this->size = size;
    front = 0;
    rear = 0;
    Q = new int [size];
}

CircularQueue::~CircularQueue() {
    delete [] Q;
}

bool CircularQueue::isEmpty() {
    if (front == rear){
        return true;
    }
    return false;
}

bool CircularQueue::isFull() {
    if ((rear + 1) % size == front){
        return true;
    }
    return false;
}

void CircularQueue::enqueue(int x) {
    if (isFull()){
        cout << "Queue Overflow" << endl;
    } else {
        rear = (rear + 1) % size;
        Q[rear] = x;
    }
}

int CircularQueue::dequeue() {
    int x = -1;
    if (isEmpty()){
        cout << "Queue Underflow" << endl;
    } else {
        front = (front + 1) % size;
        x = Q[front];
    }
    return x;
}

void CircularQueue::display() {
    int i = front + 1;
    do {
        cout << Q[i] << flush;
        if (i < rear) {
            cout << " <- " << flush;
        }
        i = (i + 1) % size;
    } while (i != (rear + 1) % size);
}


int main() {

    int A[] = {1, 3, 5, 7, 9};

    CircularQueue cq(sizeof(A)/sizeof(A[0]) + 1);

    // Enqueue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cq.enqueue(A[i]);
    }

    // Display
    cq.display();
    cout << endl;

    // Overflow
    cq.enqueue(10);

    // Dequeue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cq.dequeue();
    }

    // Underflow
    cq.dequeue();

    return 0;
}
 */
