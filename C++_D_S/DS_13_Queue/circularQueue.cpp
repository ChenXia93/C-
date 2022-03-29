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
    q.create(&q, 5);
    // enqueuing into queue
    q.enQueue(&q, 10);
    q.enQueue(&q, 20);
    q.enQueue(&q, 30);
    q.enQueue(&q, 40);
    q.enQueue(&q, 40);
    q.deQueue(&q);
    q.deQueue(&q);

    // displaying
    q.display(&q);

    // deQueuing
    cout<<"deQueuing"<<endl;
    q.deQueue(&q);

    // displaying
    q.display(&q);


    return 0;
}

