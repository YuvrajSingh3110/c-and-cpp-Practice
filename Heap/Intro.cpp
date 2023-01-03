#include <iostream>
#include<queue>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deletion()
    {
        if (size == 0)
        {
            cout << "Nothing to delete" << endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        int index = 1;

        while (index <= size)
        {
            int left = index * 2;
            int right = index * 2 + 1;
            if (left < size && arr[left] > arr[index])
            {
                swap(arr[left], arr[index]);
                index = left;
            }
            if (right < size && arr[right] > arr[index])
            {
                swap(arr[right], arr[index]);
                index = right;
            }

            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    heap h;
    h.insert(60);
    h.insert(50);
    h.insert(40);
    h.insert(30);
    h.insert(20);
    h.print();
    h.deletion();
    h.print();

    //max heap
    priority_queue<int> pq;
    pq.push(3);
    pq.push(2);
    pq.push(5);
    pq.push(1);
    pq.push(4);

    cout<<"largest element "<<pq.top()<<endl;
    pq.pop();
    cout<<"largest element "<<pq.top()<<endl;
    cout<<"size is "<<pq.size()<<endl;

    //min heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(3);
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(1);
    minHeap.push(4);
    cout<<"smallest element "<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<"smallest element "<<minHeap.top()<<endl;
    cout<<"size is "<<minHeap.size()<<endl;

    return 0;
}
