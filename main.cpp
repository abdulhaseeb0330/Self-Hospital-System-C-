#include<iostream>
#include<string>

using namespace std;
/////  Structures Data Base   //////
// for patient
struct Patient {
    int pid = 0;
    string pname = "";
    string pstatus = "";
    char cnic[10];
    int age = 0;
    int ppassword = 0;
};
// Medical
struct medical {
    int mid = 0;
    string mstatus = "";
    int mpre = 0;
    int mroom = 0;
    string mname = "";
    int mpassword = 0;
};
//Staff
struct staff {
    int sid = 0;
    string sstatus = "";
    int check = 0;
    int spre = 0;
    string sname = "";
    int spassword = 0;
};
//Timinh Hospital OPD LAB
struct timing {
    string hsp_tmg = "00:00AM/PM-00:00AM/PM ", opd_tmg = "00:00AM/PM-00:00AM/PM", lab_tmg = "00:00AM/PM-00:00AM/PM ";
};
//main charges
struct charge {
    int checkup = 0, Ward_bed = 0, Seperate_room = 0;
};

/// declare //
int main();
void att(const medical out[], const int nummedical);

/////// Below ///////

// For Timing update
timing updatetiming(timing update) {
    int c;
    char ch;
    do {
    cout << "==================================\n";
    cout << "Welcome to Timing Update System\n";
    cout << "Press 1 for Hospital Timing\n";
    cout << "Press 2 for Opd Timing\n";
    cout << "Press 3 for Lab Timing\n";
    cout << "Press other number for Back\n";
    cout << "==================================\n";
    cin >> c;
    if (c == 1) {
        cout << "Current Hospital Timing =" << update.hsp_tmg << endl;
        cout << "Enter New Hospital Timing (00:00AM/PM-00:00AM/PM) " << endl;
        cin >> update.hsp_tmg;
        cout << "Hospital Timing Updated Successfully! =" << update.hsp_tmg << endl;
    }
    else if (c == 2) {
        cout << "Current OPD Timing =" << update.opd_tmg << endl;
        cout << "Enter New OPD Timing (00:00AM/PM-00:00AM/PM) " << endl;
        cin >> update.opd_tmg;
        cout << "Hospital OPD Timing Updated Successfully! =" << update.opd_tmg << endl;
    }
    else if (c == 3) {
        cout << "Current opd Timing =" << update.lab_tmg << endl;
        cout << "Enter New LAB Timing (00:00AM/PM-00:00AM/PM) " << endl;
        cin >> update.lab_tmg;
        cout << "Hospital LAB Timing Updated Successfully! =" << update.lab_tmg << endl;
    }
    else {
        cout << "Invalid Option\n";
    }
    cout << "Press Y for Again\n";
    cin >> ch;
} while (ch=='y'||ch=='Y');
    return update;
}

//for update basic charges
charge updatecharges(charge upch) {
    int c;
    char ch;
    do {
        
    cout << "==================================\n";
    cout << "Welcome to Charges Update System\n";
    cout << "Press 1 for Checkup\n";
    cout << "Press 2 for Ward Bed\n";
    cout << "Press 3 for Seperate Room\n";
    cout << "Press Alphabet for Back\n";
    cout << "==================================\n";
    cin >> c;
    if (c == 1) {
        cout << "Current Checkup    \t RS =" << upch.checkup << endl;
        cout << "Enter New Checkup Charges " << endl;
        cin >> upch.checkup;
        cout << "Hospital Timing Updated Successfully! =" << upch.checkup << endl;
    }
    else if (c == 2) {
        cout << "Current Ward Bed   \t RS =" << upch.Ward_bed << endl;
        cout << "Enter New Ward Bed Charges " << endl;
        cin >> upch.Ward_bed;
        cout << "Hospital Timing Updated Successfully! =" << upch.Ward_bed << endl;
    }
    else if (c == 3) {
        cout << "Current Seperate Room    \t RS =" << upch.Seperate_room << endl;
        cout << "Enter New Seperate Room Charges " << endl;
        cin >> upch.Seperate_room;
        cout << "Hospital Timing Updated Successfully! =" << upch.Seperate_room << endl;
    }
    else {
        cout << "Back Thanks for using Charges update System\n";
    }
    /// ch
    cout << "Press Y for other one\n";
    cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    //ch
    return upch;

}

//// View General /////
//for view timing hospital lab opd
void viewtiming(timing hospital) {

    cout << "==================================\n";
    cout << "Hospital Timing " << hospital.hsp_tmg << endl;//hospital, emergency
    cout << "OPD Timing " << hospital.opd_tmg << endl;//opd 
    cout << "LABs Timing " << hospital.lab_tmg << endl;//lab
    cout << "==================================\n";

}
// Map of Hospital
void hospitalmap() {
    cout << "==================================\n";
    cout << "Hospital Map\n";
    cout << endl;
    cout << "Hospital Map - First Floor" << endl;
    cout << "********************************************************************\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  First Floor               |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  General Ward 1            |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  General Ward 2            |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Doctor's Room 1           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Doctor's Room 2           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Nurse's Station 1         |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Nurse's Station 2         |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Surgery Room 1            |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Surgery Room 2            |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Recovery Room 1           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Recovery Room 2           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << endl;
    cout << "Hospital Map - Second Floor" << endl;
    cout << "********************************************************************\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Second Floor              |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  ICU Room 1                |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  ICU Room 2                |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Maternity Ward 1          |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Maternity Ward 2          |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Pediatric ICU 1           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Pediatric ICU 2           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Gynecology Labor Room 1   |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Gynecology Labor Room 2   |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Burn Center 1             |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Burn Center 2             |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Family Waiting Area 1     |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Family Waiting Area 2     |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << endl;
    cout << "Hospital Map - Third Floor" << endl;
    cout << "********************************************************************\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Third Floor               |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Trauma Bay 1              |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Trauma Bay 2              |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Emergency Room 1          |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Emergency Room 2          |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Orthopedic Ward 1         |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Orthopedic Ward 2         |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  X-ray Room                |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  MRI Room                  |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  CT Scan Room              |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Blood Bank                |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << endl;
    cout << "Hospital Map - Fourth Floor" << endl;
    cout << "********************************************************************\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Fourth Floor              |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  ICU Room 3                |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  ICU Room 4                |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Surgery Room 3            |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Recovery Room 3           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Medical Ward 1            |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Medical Ward 2            |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Doctor's Room 3           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Nurse's Station 3         |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Family Waiting Area 3     |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << endl;
    cout << "Hospital Map - Fifth Floor" << endl;
    cout << "********************************************************************\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Fifth Floor               |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  ICU Room 5                |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  ICU Room 6                |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Surgery Room 4            |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Recovery Room 4           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Medical Ward 3            |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Medical Ward 4            |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Doctor's Room 4           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Nurse's Station 4         |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Family Waiting Area 4     |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << endl;
    cout << "Hospital Map - Sixth Floor" << endl;
    cout << "********************************************************************\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Sixth Floor               |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Forensic Research Lab     |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Neurology Department 1    |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Neurology Department 2    |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Dialysis Room 1           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Dialysis Room 2           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Blood Research Lab        |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Mental Health Ward 1      |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Mental Health Ward 2      |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Doctor's Room 5           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << endl;
    cout << "Hospital Map - Seventh Floor" << endl;
    cout << "********************************************************************\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Seventh Floor             |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Forensic Pathology Lab    |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Rheumatology Department   |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Cardiology Ward 1         |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Cardiology Ward 2         |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  X-ray and Imaging Room 1  |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  X-ray and Imaging Room 2  |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Research Laboratory 1     |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Research Laboratory 2     |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Doctor's Room 6           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << endl;
    cout << "Hospital Map - Eighth Floor" << endl;
    cout << "********************************************************************\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Eighth Floor              |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Pediatric Neurology       |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Oncology Ward 1           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Oncology Ward 2           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Clinical Research Lab     |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Immunology Department     |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Bone Marrow Transplant    |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Gastroenterology Ward 1   |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Gastroenterology Ward 2   |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Doctor's Room 7           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << endl;
    cout << "Hospital Map - Ninth Floor" << endl;
    cout << "********************************************************************\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Ninth Floor               |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Forensic Psychology Lab   |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Pediatric Intensive Care  |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Pathology Lab 1           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Pathology Lab 2           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Rehabilitation Ward 1     |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Rehabilitation Ward 2     |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Neurology Ward 1          |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Neurology Ward 2          |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Research Center 1         |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Doctor's Room 8           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << endl;
    cout << "Hospital Map - Tenth Floor" << endl;
    cout << "********************************************************************\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Tenth Floor               |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Advanced Cardiology Ward  |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Advanced Neurology Ward   |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Advanced Surgery Room     |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Advanced Orthopedic Ward  |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Stem Cell Research Lab    |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  High Dependency Unit      |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Organ Transplant Ward 1   |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Organ Transplant Ward 2   |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Research Center 2         |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "*                       |  Doctor's Room 9           |             *\n";
    cout << "*                       +----------------------------+             *\n";
    cout << "********************************************************************\n";
    cout << endl;
    /*system("start \"\" \"C:\\Users\\ab140\\Desktop\\hospital image.jpg\"");*/
    cout << "==================================\n";

}

// for view basic charges
void viewcharges() {
    charge amt;

    cout << "==================================\n";
    cout << "Charges List\n";
    cout << endl;
    cout << " Service\t Charges " << endl;
    cout << "CheckUp\tRS " << amt.checkup << endl;
    cout << "Ward Bed\tRS " << amt.Ward_bed << endl;
    cout << "Seperate Room\tRS " << amt.Seperate_room << endl;
    cout << "Other by Team/Doctor Desicion on Spot" << endl;
    cout << "==================================\n";

}

//// home page ///
// for all tpye of  patient
void Viewpatient(Patient out[], int numPatients) {


    int id;
    cout << "Enter patient ID to Find\n";
    cin >> id;
    bool found = false;
    for (int i = 0; i < numPatients; i++) {
        if (out[i].pid == id) {
            cout << "Enter Password\n";
            int password;
            cin >> password;
            if (out[i].ppassword == password) {
                cout << "Patient Infromation" << endl;
                cout << "ID = " << out[i].pid << endl;
                cout << "Name = " << out[i].pname << endl;
                cout << "Status = " << out[i].pstatus << endl;
                cout << "CNIC = " << out[i].cnic << endl;
                cout << "Age = " << out[i].age << endl;
                found = true;//ok
                break;
            }

        }
        else {
            cout << "Wrong ID\n";

        }
    }
    if (!found) {
        cout << "Check ID and Password\n" << endl;

    }


}

// for medical / doctors/ peramedical staff
void Viewmedical(medical out[], int nummedical) {

    bool found = false;
    int id;
    cout << "Enter Medical Staff ID to Find\n";
    cin >> id;

    for (int i = 0; i < nummedical; i++) {
        if (out[i].mid == id) {
            cout << "Enter Password";
            int password;
            cin >> password;
            if (out[i].mpassword == password) {
                cout << "Medical Staff Infromation" << endl;
                cout << "ID = " << out[i].mid << endl;
                cout << "Name = " << out[i].mname << endl;
                cout << "Status = " << out[i].mstatus << endl;
                cout << "Room = " << out[i].mroom << endl;
                if (out[i].mpre == 1) {
                    cout << "Present at " << out[i].mroom << endl;
                }
                else {
                    cout << "Absent" << endl;
                }

                found = true;
                break;
            }
        }
    }
    if (!found) {
        cout << "Medical Staff Details not found\n" << endl;
        return;
    }

    return;



}

// for all type of staff
void Viewnonmedical(staff out[], int numnonmedical) {


    int id;
    cout << "Enter Non Medical Staff ID to Find\n";
    cin >> id;
    bool found = false;
    for (int i = 0; i < numnonmedical; i++) {
        if (out[i].sid == id) {
            cout << "Enter Password\n";
            int password;
            cin >> password;
            if (out[i].spassword == password) {
                cout << "Medical Staff Infromation" << endl;
                cout << "ID = " << out[i].sid << endl;
                cout << "Name = " << out[i].sname << endl;
                cout << "Status = " << out[i].sstatus << endl;
                cout << "Authorize Status = " << out[i].check << endl;
                if (out[i].spre == 1) {
                    cout << "Present\n" << endl;
                }
                else {
                    cout << "Absent\n" << endl;
                }

                found = true;//ok
                break;
            }
        }
        else {
            cout << "Wrong ID\n";

        }
    }
    if (!found) {
        cout << "Medical Staff Details not found\n" << endl;

    }


}

/////

// view all type of patient for authorize staff only
void Viewpatientall(Patient out[], int numPatients) {

    for (int i = 0; i < numPatients; i++) {
        cout << "Patient Infromation" << endl;
        cout << "ID = " << out[i].pid << endl;
        cout << "Name = " << out[i].pname << endl;
        cout << "Status = " << out[i].pstatus << endl;
        cout << "CNIC = " << out[i].cnic << endl;
        cout << "Age = " << out[i].age << endl;
    }


}
// view all type of medical for authorize staff only
void Viewmedicalall(medical out[], int nummedical) {

    for (int i = 0; i < nummedical; i++) {
        cout << "Medical Staff Infromation" << endl;
        cout << "ID = " << out[i].mid << endl;
        cout << "Name = " << out[i].mname << endl;
        cout << "Status = " << out[i].mstatus << endl;
        cout << "Room = " << out[i].mroom << endl;
        if (out[i].mpre == 1) {
            cout << "Present at " << out[i].mroom << endl;
        }
        else {
            cout << "Absent" << endl;
        }
    }


}
// view all type of non medical for authorize staff only
void Viewnonmedicalall(staff out[], int numnonmedical) {

    for (int i = 0; i < numnonmedical; i++) {

        cout << "Medical Staff Infromation" << endl;
        cout << "ID = " << out[i].sid << endl;
        cout << "Name = " << out[i].sname << endl;
        cout << "Status = " << out[i].sstatus << endl;
        cout << "Authorize Status = " << out[i].check << endl;
        if (out[i].spre == 1) {
            cout << "Present" << endl;
        }
        else {
            cout << "Absent" << endl;
        }
    }

}
/////  
// view all type of patient for authorize staff only input
int inputpatient(Patient out[], int numPatients) {
    int age;
    while (numPatients < 100) {

        cout << "Enter details of Patient\n" << numPatients + 1 << endl;
        cout << "Patient ID= " << numPatients + 1;
        out[numPatients].pid = numPatients + 1;
        cout << "\nPatient Name";
        cin >> out[numPatients].pname;
        cout << "Patient Status";
        cin >> out[numPatients].pstatus;
        ///working
        cout << "CNIC  digit";
        char cnic;
        
            for (int i = 0; i < 10; i++) {
            back:
                cin >> cnic;
                if(cnic < 0 && cnic>9) {
                    cin >> out[numPatients].cnic[i];
                }
                
            }
                
          ///working  
        
       
        do {
            cout << "Age";
            
            cin >> age;
        } while (age <= 0);
         out[numPatients].age=age;
        
       
        cout << "Password";
        cin >> out[numPatients].ppassword;
        numPatients++;
        char choice;
        cout << "Y/y Add another patient ";
        cin >> choice;
        if (choice != 'Y' && choice != 'y') {
            break;
        }
    }
    return numPatients;
}
// view all type of medical for authorize staff only input
int inputmedical(medical out[], int nummedical) {

    while (nummedical < 10) {
        char choice;
        cout << "Enter details of Medical\n" << nummedical + 1 << endl;
        cout << "Medical ID= " << nummedical + 1;
        out[nummedical].mid = nummedical + 1;
        cout << "\nDr. Name";
        cin >> out[nummedical].mname;
        cout << "Dr. Position/Specilities";
        cin >> out[nummedical].mstatus;
        
        int age;
        do {
            cout << "Dr. Room";

            cin >> age;
        } while (age <= 0);
         out[nummedical].mroom=age;
        cout << "Password";
        cin >> out[nummedical].mpassword;
        nummedical++;

        cout << "Y/y Add another Medical Staff ";
        cin >> choice;
        if (choice != 'Y' && choice != 'y') {
            break;
        }
    }
    return nummedical;
}
// view all type of non medical for authorize staff only input
int inputnonmedical(staff out[], int numnonmedical) {

    while (numnonmedical < 10) {

        cout << "Enter details of Medical\n" << numnonmedical + 1 << endl;
        cout << "NON Medical Staff ID= " << numnonmedical + 1;
        out[numnonmedical].sid = numnonmedical + 1;
        cout << "\nName";
        cin >> out[numnonmedical].sname;
        cout << " Status";
        cin >> out[numnonmedical].sstatus;
        
        int age;
        do {
            cout << "press 1/0 FOR Authorize Permission";

            cin >> age;
        } while (age != 0&&age!=1);
        out[numnonmedical].check=age;
        cout << "Password";
        cin >> out[numnonmedical].spassword;
        numnonmedical++;
        char choice;
        cout << "Y/y Add another NON Medical Staff ";
        cin >> choice;
        if (choice != 'Y' && choice != 'y') {
            break;
        }
    }
    return numnonmedical;
}
// view all type of medical staff attendence for authorize staff 
void viewmedicalattendence(const medical out[], const int nummedical) {

    bool flag = false;
    for (int i = 0; i < nummedical; i++) {

        cout << "Present Doctors" << endl;
        cout << "Name = " << out[i].mname << endl;
        cout << "Status = " << out[i].mstatus << endl;
        if (out[i].mpre == 1) {
            cout << "Available at" << out[i].mroom << endl;
        }
        else {
            cout << "Not Available " << endl;
        }
        flag = true;
    }
    for (int i = 0; i < nummedical; i++) {

        cout << "Absent Doctors" << endl;
        cout << "ID = " << out[i].mid << endl;
        cout << "Name = " << out[i].mname << endl;
        cout << "Status = " << out[i].mstatus << endl;
        flag = true;
    }
    if (!flag) {
        cout << "No Staff in This HOSpital\n";
    }


}
// view all type of non medical staff attendence for authorize staff 
void viewnonmedicalattendence(const staff out[], const int numnonmedical) {

    for (int i = 0; i < numnonmedical; i++) {
        cout << "Present Staff" << endl;
        cout << "Name = " << out[i].sname << endl;
        cout << "Status = " << out[i].sstatus << endl;
        if (out[i].spre == 1) {
            cout << "Available" << endl;
        }
        else {
            cout << "Not Available " << endl;
        }
    }
    for (int i = 0; i < numnonmedical; i++) {
        cout << "Absent Staff" << endl;
        cout << "ID = " << out[i].sid << endl;
        cout << "Name = " << out[i].sname << endl;
        cout << "Status = " << out[i].sstatus << endl;
    }

}

// view all type of medical staff attendence for authorize staff 
void medattend(const medical out[], const int nummedical) {

    bool flag = false;
    for (int i = 0; i < nummedical; i++) {

        cout << "Present Doctors" << endl;
        cout << "Name = " << out[i].mname << endl;
        cout << "Status = " << out[i].mstatus << endl;
        if (out[i].mpre == 1) {
            cout << "Available at" << out[i].mroom << endl;
        }
        else {
            cout << "Not Available \n" << endl;
        }
        flag = true;
    }
    if (!flag) {
        cout << "No Doctor In Hospital\n";
    }


}
// view all type of medical staff attendence for authorize staff 
void nonmedattend(const staff out[], const int numnonmedical) {
    bool flag = false;
    for (int i = 0; i < numnonmedical; i++) {

        cout << "Present Doctors" << endl;
        cout << "Name = " << out[i].sname << endl;
        cout << "Status = " << out[i].sstatus << endl;
        if (out[i].spre == 1) {
            cout << "Available " << endl;
        }
        else {
            cout << "Not Available " << endl;
        }
        flag = true;
    }
    if (!flag) {
        cout << "No Staff In Hospital\n";
    }

}
// non medical staff attendence  input
void nonmedicalpt(staff out[], int numnonmedical) {


    int id;
    cout << "Enter Medical Staff ID to Find\n";
    cin >> id;
    bool found = false;
    for (int i = 0; i < numnonmedical; i++) {
        if (out[i].sid == id) {
            cout << "Enter Password\n";
            int password;
            cin >> password;
            if (out[i].spassword == password) {
                cout << "Medical Staff Infromation" << endl;
                cout << "ID = " << out[i].sid << endl;
                cout << "Name = " << out[i].sname << endl;
                cout << "Status = " << out[i].sstatus << endl;
                cout << "Authorize Status = " << out[i].check << endl;
                cout << "I'M (1 Present/0 Absent) ";
                int press;
                cin >> press;
                if (press == 1) {
                    out[i].spre = 1;
                    cout << "\n";
                }
                else {
                    out[i].spre = 0;
                    cout << "\n";
                }
                found = true;//ok
                break;

            }
        }
    }
    if (!found) {
        cout << "Medical Staff Details not found\n" << endl;
        return;
    }
    return;
}
//  medical staff attendence input
void medicalpt(medical out[], int numnonmedical) {


    int id;
    cout << "Enter Medical Staff ID to Find\n";
    cin >> id;
    bool found = false;
    for (int i = 0; i < numnonmedical; i++) {
        if (out[i].mid == id) {
            cout << "Enter Password\n";
            int password;
            cin >> password;
            if (out[i].mpassword == password) {
                cout << "Medical Staff Infromation" << endl;
                cout << "ID = " << out[i].mid << endl;
                cout << "Name = " << out[i].mname << endl;
                cout << "Status = " << out[i].mstatus << endl;
                cout << "I'M (1 Present/0 Absent) ";
                int press;
                cin >> press;
                if (press == 1) {
                    out[i].mpre = 1;
                    cout << "\n";
                }
                else {
                    out[i].mpre = 0;
                    cout << "\n";
                }
                found = true;//ok
                break;
            }
        }
    }
    if (!found) {
        cout << "Medical Staff Details not found\n" << endl;
        return;
    }
    return;
}

///////     Actual  /////

// all general details about hospital
void general(timing hospital, const medical out[], const int nummedical) {
    cout << "****************************************\n";
    cout << "Welcome on MOON's Hospital Information System\n";
    cout << "Press 1 for Hospital Timing\n";
    cout << "Press 2 Charges\n";
    cout << "Press 3 Map\n";
    cout << "Press 4 For Present Doctor & Location\n";
    cout << "****************************************\n";
    int check;
    cin >> check;
    if (check == 1) {
        viewtiming(hospital);
    }
    else if (check == 2) {
        viewcharges();
    }
    else if (check == 3) {
        hospitalmap();
    }
    else if (check == 4) {
        att(out, nummedical);
    }
    else {
        cout << "Invalid Command \n";
    }

}

///
// view all type of medical staff present/ absent in hospital  
void att(const medical out[], const int nummedical) {
    bool flag = false;
    for (int i = 0; i < nummedical; i++) {
        string s = "";
        if (out[i].mpre == 1) {
            s = "Present";
            flag = true;
        }
        else {
            s = "Absent";
            flag = true;
        }
        cout << "Dr. " << out[i].mname << " , " << out[i].mstatus << " is " << s << " at ROOM NO " << out[i].mroom;
    }if (!flag) {
        cout << "No Doctor in this Hospital\n";
    }

}
///

/// Main Functuion //////

int main() {

    Patient p[100];
    medical m[10];
    staff s[10];
    charge c;
    timing hospital;
    int nummedical = 0;
    int numnonmedical = 1;
    int numPatients = 0;
    char check;
    char b = 0;

back:
    do {
        cout << "\n\n\a****************************************\n";
        cout << "Welcome on MOON's Hospital Information System\n";
        cout << "Press 1 Patient\n";
        cout << "Press 2 Medical Staff\n";
        cout << "Press 3 Non Medical staff\n";
        cout << "Press 4 General Details about Hospital\n";
        cout << "Press 5 Authorize Staff\n";
        cout << "****************************************\n";
        cin >> check;

        if (check == '1') {
            cout << "==================================\n";
            cout << "Welcome on Patient portal\n";
            cout << "==================================\n";
            Viewpatient(p, numPatients);
        }
        else if (check == '2') {
            cout << "==================================\n";
            cout << "Welcome on Medical Staff portal\n";
            cout << "Press 1 for Medical Portal\n";
            cout << "Press 2 for Your Details\n";
            cout << "==================================\n";
            cin >> check;
            if (check == '1') {
                medicalpt(m, nummedical);
            }
            else if (check == '2') {
                Viewmedical(m, nummedical);
            }
            else {
                cout << "Invalid Command\n";
            }
        }
        else if (check == '3') {
            cout << "==================================\n";
            cout << "Welcome on NON Medical Staff portal\n";
            cout << "Press 1 for Non Medical Portal\n";
            cout << "Press 2 for Your Details\n";
            cout << "==================================\n";
            cin >> check;
            if (check == '1') {
                nonmedicalpt(s, numnonmedical);
            }
            else if (check == '2') {
                Viewnonmedical(s, numnonmedical);
            }
            else {
                cout << "Invalid Command\n";
            }
        }
        else if (check == '4') {
            cout << "==================================\n";
            cout << "Welcome on General Detail portal\n";
            cout << "==================================\n";
            general(hospital, m, nummedical);
        }
        else if (check == '5') {
            int in;
            cout << "Enter Your Id\n";
            cin >> in;
            for (int i = 0; i < numnonmedical; i++) {
                if (s[i].sid == in && s[i].sid == 0) {
                    cout << "Enter Password\n";
                    cin >> in;
                    if (s[i].spassword == in && s[i].spassword == 0) {

                        cout << "\n\n\a==================================\n";
                        cout << "Welcome on Authorize Staff portal\n";
                        cout << "Press 1 for Patient\n";
                        cout << "Press 2 for Medical Staff\n";
                        cout << "Press 3 for Non Medical Staff\n";
                        cout << "Press 4 for Hospital Timing\n";
                        cout << "Press 5 for About Patient\n";
                        cout << "Press 6 for About Doctor\n";
                        cout << "Press 7 for About Staff\n";
                        cout << "Press 8 for Map\n";
                        cout << "Press 9 for Charges\n";
                        cout << "Press 0 for Attendence\n";
                        cout << "Press other number for back\n";
                        cout << "==================================\n";
                        char i;
                        cin >> i;
                        if (i == '1') {
                            cout << "Press 1 for Add New Patient\n";
                            cout << "Press 2 for View Patient\n";
                            cout << "Press 9 Key for Back\n";
                            cin >> i;
                            if (i == '1') {
                                numPatients = inputpatient(p, numPatients);
                            }
                            else if (i == '2') {
                                Viewpatientall(p, numPatients);
                            }
                            else {
                                cout << "Invalid Command\n";
                            }

                        }
                        if (i == '2')
                        {
                            cout << "Press 1 for Add New Medical Staff\n";
                            cout << "Press 2 for View Medical Staff\n";
                            cout << "Press 9 Key for Back\n";
                            cin >> i;
                            if (i == '1') {
                                nummedical = inputmedical(m, nummedical);
                            }
                            else if (i == '2') {
                                Viewmedicalall(m, nummedical);
                            }
                            else {
                                cout << "Invalid Command\n";
                            }
                        }
                        if (i == '3') {
                            cout << "Press 1 for Add New Non Medical Staff\n";
                            cout << "Press 2 for View Non medical Staff\n";
                            cout << "Press 9 Key for Back\n";
                            cin >> i;
                            if (i == '1') {
                                numnonmedical = inputnonmedical(s, numnonmedical);
                            }
                            else if (i == '2') {
                                Viewnonmedicalall(s, numnonmedical);
                            }
                            else {
                                cout << "Invalid Command\n";
                            }
                        }
                        if (i == '4') {
                            cout << "Press 1 for View Hospital Timing\n";
                            cout << "Press 2 for Add New Hospital Timing\n";
                            cout << "Press 9 Key for Back\n";
                            cin >> i;
                            if (i == '1') {
                                viewtiming(hospital);
                            }
                            else if (i == '2') {
                                hospital = updatetiming(hospital);
                            }
                            else {
                                cout << "Invalid Command\n";
                            }
                        }
                        if (i == '5') {
                            cout << "Press 1 for Search Patient\n";
                            cout << "Press 2 for View All Patients\n";
                            cout << "Press 9 Key for Back\n";
                            cin >> i;
                            if (i == '1') {

                                Viewpatient(p, numPatients);
                            }
                            else if (i == '2') {
                                Viewpatientall(p, numPatients);
                            }
                            else {
                                cout << "Invalid Command\n";
                            }
                        }
                        if (i == '6') {
                            cout << "Press 1 for Search Doctor\n";
                            cout << "Press 2 for View Attendence\n";
                            cout << "Press 9 Key for Back\n";
                            cin >> i;
                            if (i == '1') {

                                Viewmedical(m, nummedical);
                            }
                            else if (i == '2') {
                                viewmedicalattendence(m, nummedical);
                            }
                            else {
                                cout << "Invalid Command\n";
                            }
                        }
                        if (i == '7') {
                            cout << "Press 1 for View Search Staff\n";
                            cout << "Press 2 for View Staff Attendence\n";
                            cout << "Press 9 Key for Back\n";
                            cin >> i;
                            if (i == '1') {

                                Viewnonmedical(s, numnonmedical);
                            }
                            else if (i == '2') {
                                viewnonmedicalattendence(s, numnonmedical);
                            }
                            else {
                                cout << "Invalid Command\n";
                            }
                        }
                        if (i == '8') {
                            hospitalmap();
                        }
                        if (i == '9') {
                            cout << "Press 1 for View Charges\n";
                            cout << "Press 2 for New Charges\n";
                            cout << "Press 9 Key for Back\n";
                            cin >> i;
                            if (i == '1') {

                                viewcharges();
                            }
                            else if (i == '2') {
                                c = updatecharges(c);
                            }
                            else {
                                cout << "Invalid Command\n";
                            }

                        }
                        if (i == '0') {
                            cout << "Press 1 for View Doctor Attendence\n";
                            cout << "Press 2 for View Staff Attendence\n";
                            cout << "Press 9 Key for Back\n";
                            cin >> i;
                            if (i == '1') {

                                viewmedicalattendence(m, nummedical);
                            }
                            else if (i == '2') {
                                viewnonmedicalattendence(s, numnonmedical);
                            }
                            else {
                                cout << "Invalid Command\n";
                            }

                        }
                        else if (i != '0' && i != '1' && i != '2' && i != '3' && i != '4' && i != '5' && i != '6' && i != '7' && i != '8' && i != '9') {
                            goto back;
                        }
                        /*else {
                            cout << "Invalid Command\n";
                        }*/
                    }

                }
                /* else {
                     cout << "Wrong Password\n";

                 }*/
            }
        }
        else {
               cout << "Option Wrong\n";
            main();
        }
    } while (true);

    return 0;
}
