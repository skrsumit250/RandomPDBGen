// Copyright (c) [2024] [Sumit Kumar]
#include<bits/stdc++.h>
using namespace std;

#define fp fixed<<setprecision(4)
// Function to generate random angle in a given range
double random_angle(double l, double r) {
    double range=r-l;
    double random_value=static_cast<double>(rand()) / (RAND_MAX + 1.0);
    return random_value*range+l;
}
int main(){
    int t;
    cout<<"Enter number of rib file you want to create\n";
    cin>>t;
    int res; // Number of Residue
    printf("Enter number of residue:\n");
    cin>>res;
    while(t--){
        int n=rand()%(res+1);
        string base="output";
        string file_name=base+to_string(t)+".rib";
        ofstream outputFile("ribfiles/"+file_name);
        

        // printing default lines in output.rib file
        outputFile<<"# sample command file. this builds the peptide as a helix\n\n# except for the glycine which has a phi of 90.0 and psi of 0.0\n\nTITLE RIBOSOME EXAMPLE 2\n\ndefault helix\n\n";
        // List of Amino Acids
        vector<string>Amino_Acids{"ala","leu","glu","gln","lys","met","arg","asn","asp","cys","gly","his","ile","phe","pro","ser","thr","trp","tyr","val"};

        for(int i=0;i<n;i++){
            int idx=rand()%20;
            string aa=Amino_Acids[idx];

            double phi;
            double psi;

            int strand=rand()%2;
            if(strand){ // Generate phi and psi for Alpha Helix
                phi=random_angle(-65.0,-55.0); // Generate random phi angle between -65 deg and  -55 deg
                psi=random_angle(-55.0,-45.0);// Generate random psi angle between -55 deg and  -45 deg
            }
            else{   // Generate phi and psi for Beta Strand
                phi=random_angle(-145.0,-135.0);// Generate random phi angle between -145 deg and  -135 deg
                psi=random_angle(125.0,135.0);  // Generate random psi angle between 125 deg and  135 deg
            }
            // printing each residue line in output.rib file
            outputFile<<"res "<<aa<<" phi "<<fp<<phi<<" psi "<<fp<<psi<<"\n\n";
        }
    }
    cout<<"voila! Your output.rib file has been created\n";
    return 0;
}