#include <iostream>
#include "KeyValue.h"
#include "Tree.h"
using namespace std;

int main() {
	cout << "1.cast: KeyValue" << endl;
	KeyValue* kv1 = new KeyValue(0, 0.5);
	KeyValue* last = kv1;
	for (int k = 1; k <= 1000; k++) {
		last = last->CreateNext(k, k + 0.5);
	}

    last = kv1;
	while (last) {
		cout << last->GetValue() << " ";
		last = last->GetNext();
	}
	cout << endl << endl;
	delete kv1;

    BTree animals("Animals:", "animal");
    BTree flowers("Plants:", "plant");

    AnimalTree newTree(&animals, &flowers);
    newTree.AddToBinalTree("Aligator", "animal");
    newTree.AddToBinalTree("Crocodile", "animal");
    newTree.AddToBinalTree("Weed", "plant");
    newTree.AddToBinalTree("Moonglaze", "plant");
    newTree.AddToBinalTree("Big Chungus", "animal");
    newTree.AddToBinalTree("El Pigeon", "animal");
    newTree.AddToBinalTree("Sunflower", "plant");
    newTree.AddToBinalTree("Rose", "plant");
    newTree.AddToBinalTree("Frog", "animal");
    newTree.Show();
	return 0;
}