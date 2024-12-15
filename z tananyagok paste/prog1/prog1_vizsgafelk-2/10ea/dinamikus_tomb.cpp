int size;
cout << "Enter size: ";
cin >> size;

int* dynamicArray = new int[size];

for (int i = 0; i < size; i++) {
  dynamicArray[i] = i;
}

for (int i = 0; i < size; i++) {
  cout << dynamicArray[i] << " ";
}

delete[] dynamicArray;
