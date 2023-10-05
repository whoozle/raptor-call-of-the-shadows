#ifndef _LOADSAVE
#define _LOADSAVE

/***************************************************************************
RAP_SetPlayerDiff () - Set Player Difficulty
 ***************************************************************************/
VOID
RAP_SetPlayerDiff (
VOID
);

/***************************************************************************
RAP_ClearPlayer () - Clear Player stuff
 ***************************************************************************/
VOID
RAP_ClearPlayer (
VOID
);

/***************************************************************************
RAP_IsPlayer () - Returns TRUE if a player is defined
 ***************************************************************************/
BOOL
RAP_IsPlayer (
VOID
);

/***************************************************************************
RAP_AreSavedFiles() - Returns TRUE if thier are previously saved game files
 ***************************************************************************/
BOOL
RAP_AreSavedFiles (
VOID
);

/***************************************************************************
RAP_FFSaveFile() - Finds a filename to use
 ***************************************************************************/
BOOL
RAP_FFSaveFile (
VOID
);

/***************************************************************************
RAP_IsSaveFile() - Returns True if thier is a sopt to save a character
 ***************************************************************************/
BOOL
RAP_IsSaveFile (
PLAYEROBJ * in_plr
);

/***************************************************************************
RAP_LoadPlayer () - Loads player from disk
 ***************************************************************************/
BOOL
RAP_LoadPlayer (
VOID
);

/***************************************************************************
RAP_SavePlayer() - Saves player data to filename
 ***************************************************************************/
BOOL
RAP_SavePlayer (
VOID
);

/***************************************************************************
 RAP_LoadMap () - Loads A level Map
 ***************************************************************************/
VOID
RAP_LoadMap (
VOID
);

/***************************************************************************
RAP_FreeMap() - Frees up cached map stuff
 ***************************************************************************/
VOID
RAP_FreeMap (
VOID
);

/***************************************************************************
RAP_LoadWin() - 
 ***************************************************************************/
INT
RAP_LoadWin(
VOID
);

/***************************************************************************
RAP_InitLoadSave() - Inits the load and save path stuff
 ***************************************************************************/
CHAR *
RAP_InitLoadSave (
VOID
);

/***************************************************************************
RAP_SetupFilename() - Gets current setup.ini path and name
 ***************************************************************************/
CHAR *
RAP_SetupFilename (
VOID
);

#endif
