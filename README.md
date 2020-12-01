# EC_GetTiming
MiniBooNE TTree to TTiming TTree convertor.

Need to update the input/output addresses in `*.xml`

After compiling `make`, the code is run with command `./calculateTiming <name of the job> <.xml>`

## Usage
1. configure the <mcsample.xml> (or other xml), the <job> block is all you need:
    name - the label for calling the block;
    inputPath - input MiniBooNE TTree root location
    particleName - choose the one you using
    MCMode - copy over MC Truth information 
    outputFileName - output TTiming TTree root location   
2. Replace the commonChunk.cxx and commonChunk.h with the output from a given MiniBooNE TTree root (generated by the MakeClass("commonChunk") function in root). Need to move around the functions to match the original commonChunk* files;
3. Recompile using Make Clean & Make; then run with ./calculateTiming <name of the job> <.xml>
