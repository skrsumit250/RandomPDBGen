# RandomPDBGen# RandomSequencePDBGenerator

## Description
This project generates multiple RIB files containing random sequence length, amino acids residues, and their phi and psi angles. Each RIB file is then utilized to produce its corresponding PDB file using ribosome Linux tools. The entire process is streamlined through a single base file, which manage the compilation, execution, and file generation steps.

## Usage
1. **Prerequisites:**
   - Ensure you have a Linux Operating sysytem or subsystem in your computer.
   - Ensure that you have a C++ compiler installed on your system.
   - You do not required ribosome in the system since builder files `ribosome` & `res.zmat` already in project file.
   - In case you want to regenerate builder files (`ribosome` & `res.zmat`), your system must have `fortran` and read the documentaion in ribosome
   tool folder to rebuild the files.[Note that this step is not required].

2. **Execution:**
   - Open a terminal window and navigate to the directory containing the project files.
   - Run the following commands:
   - chmod +x run.sh
   - ./run.sh

3. **Output:**
   - After execution, the generated PDB files will be available in the `PDBoutput` directory.

4. **Customization:**
   - Modify the parameters in `algo.cpp` to adjust the randomness of sequence length, amino acids residues, and angles.
   - Update the paths and filenames in the base file (`base.sh`) as needed.

## Notes
- Ensure that the ribosome tool (`ribosome`) and the required input files (`res.zmat`) are correctly referenced and accessible from the provided paths.
- Make sure to review the generated PDB files for accuracy and validity, especially if modifying the code or input parameters.

## Support
- For any issues or questions regarding the project, please refer to the documentation or contact [skrsumit250@gmail.com](mailto:skrsumit250@gmail.com).

