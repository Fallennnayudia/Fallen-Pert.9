#include <iostream>
using namespace std;

const int MAX = 10;

int q[MAX];
int front, rear;

void init() {
    front = -1;
    rear = -1;
}

bool isEmpty() {
    return (front == -1);
}

bool isFull() {
    return (rear == MAX - 1);
}

void enqueue(int value) {
    if (isFull()) {
        cout << "Queue penuh!\n";
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear++;
    }
    q[rear] = value;
    cout << "Data " << value << " ditambahkan ke queue.\n";
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong!\n";
        return;
    }
    cout << "Data " << q[front] << " dihapus dari queue.\n";
    if (front == rear) {
        front = rear = -1; // Queue kembali kosong
    } else {
        front++;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Queue kosong!\n";
        return;
    }
    cout << "Isi Queue: ";
    for (int i = front; i <= rear; i++) {
        cout << q[i] << " ";
    }
    cout << endl;
}

int main() {
    init();
    int pilih, nilai;

    do {
        cout << "\n=== MENU QUEUE ===\n";
        cout << "1. Enqueue (Tambah Data)\n";
        cout << "2. Dequeue (Hapus Data)\n";
        cout << "3. Tampilkan Queue\n";
        cout << "4. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                cout << "Masukkan nilai integer: ";
                cin >> nilai;
                enqueue(nilai);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
        }
    } while (pilih != 4);

    return 0;
}