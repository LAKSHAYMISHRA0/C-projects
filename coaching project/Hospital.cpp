#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Patient {
public:
    string name;
    int age;
    string disease;

    void input() {
        cout << "Enter patient name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter disease: ";
        cin >> disease;
    }

    void display() const {
        cout << "Name: " << name << ", Age: " << age << ", Disease: " << disease << endl;
    }
};

class Doctor {
public:
    string name;
    string specialty;

    void input() {
        cout << "Enter doctor name: ";
        cin >> name;
        cout << "Enter specialty: ";
        cin >> specialty;
    }

    void display() const {
        cout << "Doctor: " << name << ", Specialty: " << specialty << endl;
    }
};

class HospitalSystem {
    vector<Patient> patients;
    vector<Doctor> doctors;

public:
    void addPatient() {
        Patient p;
        p.input();
        patients.push_back(p);
        savePatient(p);
    }

    void addDoctor() {
        Doctor d;
        d.input();
        doctors.push_back(d);
        saveDoctor(d);
    }

    void viewPatients() {
        cout << "\n--- Patient List ---\n";
        for (const auto& p : patients) p.display();
    }

    void viewDoctors() {
        cout << "\n--- Doctor List ---\n";
        for (const auto& d : doctors) d.display();
    }

    void savePatient(const Patient& p) {
        ofstream file("patients.txt", ios::app);
        file << p.name << " " << p.age << " " << p.disease << endl;
        file.close();
    }

    void saveDoctor(const Doctor& d) {
        ofstream file("doctors.txt", ios::app);
        file << d.name << " " << d.specialty << endl;
        file.close();
    }
};

int main() {
    HospitalSystem hs;
    int choice;

    do {
        cout << "\n1. Add Patient\n2. Add Doctor\n3. View Patients\n4. View Doctors\n0. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1: hs.addPatient(); break;
            case 2: hs.addDoctor(); break;
            case 3: hs.viewPatients(); break;
            case 4: hs.viewDoctors(); break;
        }
    } while (choice != 0);

    return 0;
}