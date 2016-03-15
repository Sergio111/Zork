#ifndef __Exit__
#define __Exit__

class Exit{
public:
	char name[30];
	char description[200];
	Room* origin;
	Room* destination;
};

enum Directions{
	OBSERVATORYdirectionN,
	OBSERVATORYdirectionW,
	OBSERVATORYdirectionE,
	OBSERVATORYdirectionS,
	// ----------------
	NORTHTEMPLEdirectionN,
	NORTHTEMPLEdirectionW,
	NORTHTEMPLEdirectionE,
	NORTHTEMPLEdirectionS,
	// ----------------
	HEADMASTERSROOMdirectionN,
	HEADMASTERSROOMdirectionW,
	HEADMASTERSROOMdirectionE,
	HEADMASTERSROOMdirectionS,
	// ----------------
	WESTTEMPLEdirectionN,
	WESTTEMPLEdirectionW,
	WESTTEMPLEdirectionE,
	WESTTEMPLEdirectionS,
	// ----------------
	FOUNTAINROOMdirectionN,
	FOUNTAINROOMdirectionW,
	FOUNTAINROOMdirectionE,
	FOUNTAINROOMdirectionS,
	// ----------------
	EASTTEMPLEdirectionN,
	EASTTEMPLEdirectionW,
	EASTTEMPLEdirectionE,
	EASTTEMPLEdirectionS,
	// ----------------
	GARDENdirectionN,
	GARDENdirectionW,
	GARDENdirectionE,
	GARDENdirectionS,
	// ----------------
	SOUTHTEMPLEdirectionN,
	SOUTHTEMPLEdirectionW,
	SOUTHTEMPLEdirectionE,
	SOUTHTEMPLEdirectionS,
	// ----------------
	LIBRARYdirectionN,
	LIBRARYdirectionW,
	LIBRARYdirectionE,
	LIBRARYdirectionS
};
// ----------------
#endif //__Exit__