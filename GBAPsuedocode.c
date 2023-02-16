#ifndef GBAEmulator
#define GBAEmulator

/* Data Structures */

typedef struct {

	//register
	
	//memory values for: 
	iWRAM (internal)
	vRAM (video)
	eWRAM (external)
	gROM (Game PAK ROM)
	gRAM (Game PAK RAM)
	
} GBA_State

//function prototypes
void GBA_Initilize(GBA_State)
void GBA_Load_ROM(GBA_State)
	

#endif
