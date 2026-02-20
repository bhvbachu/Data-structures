#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    int choice, x, key, n;

    // Print menu only once
    cout << "===== Vector Operations Menu =====" << endl;
    cout << "1. Insert elements" << endl;
    cout << "2. Display elements" << endl;
    cout << "3. Sort elements" << endl;
    cout << "4. Search element" << endl;
    cout << "5. Exit" << endl;
    cout << "6. Delete element" << endl;

    do {
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter elements: ";
            for (int i = 0; i < n; i++) {
                cin >> x;
                v.push_back(x);
            }
            break;

        case 2:
            if (v.empty()) {
                cout << "Vector is empty." << endl;
            } else {
                cout << "Elements: ";
                for (int i = 0; i < v.size(); i++) {
                    cout << v[i] << " ";
                }
                cout << endl;
            }
            break;

        case 3:
            sort(v.begin(), v.end());
            cout << "Vector sorted successfully." << endl;
            break;

        case 4:
            cout << "Enter element to search: ";
            cin >> key;
            if (find(v.begin(), v.end(), key) != v.end()) {
                cout << "Element found." << endl;
            } else {
                cout << "Element not found." << endl;
            }
            break;

        case 6:
        {
            cout << "Enter element to delete: ";
            cin >> key;

            auto it = find(v.begin(), v.end(), key);

            if (it != v.end()) {
                v.erase(it);
                cout << "Element deleted successfully." << endl;
            } else {
                cout << "Element not found." << endl;
            }
        }
        break;

        case 5:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
        }

    } while (choice != 5);

    return 0;
}
