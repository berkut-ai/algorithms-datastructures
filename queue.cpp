#include <iostream>
typedef long long ll;
using namespace std;

struct Queue{
    int data[100];
    int tail = 0, head = 0, size = 0;
    
    bool empty(){
        return head == tail;
    }
    
    int front(){
        return data[head];
    }
    
    int back(){
        return data[tail-1];
    }
    
    void pop(){
        head = (head+1)%100;
        size--;
    }
    
    void push(int x){
        if (size < 100){
            data[tail] = x;
            tail = (tail+1)%100;
            size++;
        }
    }
    
    void print(){
        if (head < tail){
            for (int i = head; i < tail; i++) cout << data[i] << " ";
        } else {
            for (int i = head; i < 100; i++) cout << data[i] << " ";
            for (int i = 0; i < tail; i++) cout << data[i] << " ";
        }
        cout << endl;
    }
    
    int qsize(){
        return size;
    }
}; 
