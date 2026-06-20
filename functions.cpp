#include <iostream>
#include <string>
#include "Structures.h"

using namespace std;

void addTraining(Training trainings[], int& trainingCount) {
	cout << "Name: ";
    cin >> trainings[trainingCount].name;
    cout << "Trainer: ";
    cin >> trainings[trainingCount].trainer;
    cout << "Price: ";
    cin >> trainings[trainingCount].price;

    trainingCount++;
}

void addVisitor(Visitor visitors[], int& visitorCount) {
    cin.ignore();
    cout << "Full name: ";
    getline(cin, visitors[visitorCount].name);
    cout << "Phone: ";
    getline(cin, visitors[visitorCount].phone);
    cout << "Training name: ";
    getline(cin, visitors[visitorCount].trainingName);
    cout << "Date: ";
    getline(cin, visitors[visitorCount].date);

    visitorCount++;
}

void showTrainings(Training trainings[], int trainingCount) {
    if (trainingCount == 0){
        cout << "No trainings found.\n";
        return;
    }
    for (int i = 0; i < trainingCount; i++){
        cout << "\nTraining #" << i + 1 << endl;
        cout << "Name: " << trainings[i].name << endl;
        cout << "Trainer: " << trainings[i].trainer << endl;
        cout << "Price: " << trainings[i].price << endl;
    }
}

void showVisitors(Visitor visitors[], int visitorCount) {
    if (visitorCount == 0) {
        cout << "No visitors found. \n";
        return;
    }
    for (int i = 0; i < visitorCount; i++) {
        cout << "Name: " << visitors[i].name << endl;
        cout << "Phone number: " << visitors[i].phone << endl;
        cout << "Training list: " << visitors[i].trainingName << endl;
        cout << "Visit dates: " << visitors[i].date << endl;
    }
}

void showIncome(Training trainings[],int trainingCount,Visitor visitors[],int visitorCount) {
    double total = 0;
    for (int i = 0; i < visitorCount; i++)
    {
        for (int j = 0; j < trainingCount; j++)
        {
            if (visitors[i].trainingName == trainings[j].name)
            {
                total += trainings[j].price;
            }
        }
    }

    cout << "Total income: "
        << total
        << endl;
}