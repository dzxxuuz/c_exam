#include <iostream>
#include "ArrayTemplate.h"
#include "Structures.h"
void addTraining(Training trainings[], int& trainingCount);
void addVisitor(Visitor visitors[], int& visitorCount);
void showTrainings(Training trainings[], int trainingCount);
void showVisitors(Visitor visitors[], int visitorCount);
void showIncome(Training trainings[],int trainingCount,Visitor visitors[],int visitorCount);

int main()
{
    Training trainings[100];
    Visitor visitors[100];

    int trainingCount = 0;
    int visitorCount = 0;

    int choice;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Add training\n";
        cout << "2. Add visitor\n";
        cout << "3. Show trainings\n";
        cout << "4. Show visitors\n";
        cout << "5. Show income\n";
        cout << "0. Exit\n";

        cin >> choice;

        switch (choice)
        {
        case 1:
            addTraining(trainings,trainingCount);
            break;

        case 2:
            addVisitor(visitors,visitorCount);
            break;

        case 3:
            showTrainings(trainings,trainingCount);
            break;

        case 4:
            showVisitors(visitors,visitorCount);
            break;

        case 5:
            showIncome(trainings,trainingCount,visitors,visitorCount);
            break;

        case 0:
            cout << "Exit...\n";
            break;

        default:
            cout << "Invalid option.\n";
        }

    } while (choice != 0);

    return 0;
}


