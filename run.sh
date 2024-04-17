# Make a directory named PDBoutput & ribfiles
mkdir -p PDBoutput
mkdir -p ribfiles

# Compiling and executing algo.cpp file
g++ algo.cpp -o algo && ./algo

# Navigate to the ribfile folder
cd ribfiles

# Loop through all outputx.rib files and using ribosome tool to make respective PDB files
for rib_file in output*.rib; do
    # Extract the file number from the filename
    file_number="${rib_file#output}"  # Remove "output" prefix
    file_number="${file_number%.rib}" # Remove ".rib" suffix

    # Execute the command
    ../ribosome "$rib_file" "../PDBoutput/output${file_number}.pdb" ../res.zmat
done
