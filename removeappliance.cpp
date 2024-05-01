 void removeAppliance() {
        if (appliances.empty()) {
            cout << "No appliances to remove." << endl;
            return;
        }

        cout << "Enter the index of the appliance you want to remove: ";
        int index;
        cin >> index;

        if (index < 0 || index >= appliances.size()) {
            cout << "Invalid index." << endl;
            return;
        }

        appliances.erase(appliances.begin() + index);
        cout << "Appliance removed successfully." << endl;
    }
