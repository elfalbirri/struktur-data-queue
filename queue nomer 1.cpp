#include <iostream>
#define MAX 20

using namespace std;

struct Queue {
	int head, tail, data[MAX];
}Queue;

bool isFull() {
	return Queue.tail == MAX;
}

bool isEmpty() {
	return Queue.tail == 0;
}

void printQueue() {
	if (isEmpty()) {
    cout << "Antrian kosong"<<endl;
	}
	else {
		cout << "QUEUE : ";
		for (int i = Queue.head; i < Queue.tail; i++)
			cout << Queue.data[i] << ((Queue.tail-1 == i) ? "" : ",");
		cout << endl;
  }
}

void enqueue() {
	if (isFull())
	{
		cout << "Antrian penuh!"<<endl;
	}
	else {
		int data;
		cout << "Masukkan Data : ";cin >> data;
		Queue.data[Queue.tail] = data;
		Queue.tail++;
		cout << "Data ditambahkan\n";
		printQueue();
	}
}

void dequeue() {
	if (isEmpty())
	{
		cout << "Antrian masih kosong"<<endl;
	}
	else{
		cout << "Mengambil data \"" << Queue.data[Queue.head] << "\"..." << endl;
		for (int i = Queue.head; i < Queue.tail; i++)
        Queue.data[i] = Queue.data[i + 1];
		Queue.tail--;
		printQueue();
	}
}

int main() {
	int choose;
	do
	{
		cout << "-------------------\n"
			<< "   Menu Pilihan\n"
			<< "-------------------\n"
			<< " [1] Enqueue \n"
			<< " [2] Dequeue\n"
			<< " [3] Keluar \n\n"
			<< "-------------------\n"
			<< "Masukkan pilihan : "; cin >> choose;
		switch (choose)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		default:
			cout << "Pilihan tidak tersedia";
			break;
		}
	} while (choose !=3);
	return 0;
}

