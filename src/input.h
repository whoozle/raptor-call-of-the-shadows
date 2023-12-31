#ifndef _INPUT_H
#define _INPUT_H

#define  DEMO_OFF       0
#define  DEMO_RECORD    1
#define  DEMO_PLAYBACK  2
#define  MAX_DEMO       2800

typedef enum
{
   I_KEYBOARD,
   I_MOUSE,
   I_JOYSTICK,
   I_FORCE
}ITYPE;

#define BUT_1 ( buttons[0] )
#define BUT_2 ( buttons[1] )
#define BUT_3 ( buttons[2] )
#define BUT_4 ( buttons[3] )

extern BOOL    buttons[4];
extern ITYPE   control;
extern INT     demo_mode;
extern INT     f_addx;
extern INT     f_addy;

/***************************************************************************
DEMO_MakePlayer() - 
 ***************************************************************************/
VOID
DEMO_MakePlayer (
INT game
);

/***************************************************************************
DEMO_DisplayStats (
 ***************************************************************************/
VOID
DEMO_DisplayStats (
VOID
);

/***************************************************************************
DEMO_StartRec(
 ***************************************************************************/
VOID
DEMO_StartRec (
VOID
);

/***************************************************************************
DEMO_StartPlayback(
 ***************************************************************************/
VOID
DEMO_StartPlayback (
VOID
);

/***************************************************************************
DEMO_SetFileName()
 ***************************************************************************/
VOID
DEMO_SetFileName (
CHAR * in_name
);

/***************************************************************************
DEMO_GLBFile (
 ***************************************************************************/
VOID
DEMO_GLBFile (
DWORD item
);

/***************************************************************************
DEMO_LoadFile()
 ***************************************************************************/
VOID
DEMO_LoadFile (
VOID
);

/***************************************************************************
DEMO_SaveFile(
 ***************************************************************************/
VOID
DEMO_SaveFile (
VOID
);

/***************************************************************************
DEMO_Think(
 ***************************************************************************/
BOOL
DEMO_Think (
VOID
);

/***************************************************************************
DEMO_Play() - Demo playback routine
 ***************************************************************************/
BOOL           // TRUE=Aborted, FALSE = timeout
DEMO_Play (
VOID
);

/***************************************************************************
IPT_CalJoy() - Calibrates Joystick ( joystick must be centered )
 ***************************************************************************/
VOID
IPT_CalJoy(
VOID
);

/***************************************************************************
IPT_MovePlayer() - Perform player movement for current input device
 ***************************************************************************/
VOID
IPT_MovePlayer(
VOID
);

/***************************************************************************
IPT_PauseControl() - Lets routines run without letting user control anyting
 ***************************************************************************/
VOID
IPT_PauseControl (
BOOL flag
);

/***************************************************************************
IPT_FMovePlayer() - Forces player to move addx/addy
 ***************************************************************************/
VOID
IPT_FMovePlayer (
INT addx,                  // INPUT : add to x pos
INT addy                   // INPUT : add to y pos
);

/***************************************************************************
IPT_Init () - Initializes INPUT system
 ***************************************************************************/
VOID
IPT_Init(
VOID
);

/***************************************************************************
IPT_DeInit() - Freeze up resources used by INPUT system
 ***************************************************************************/
VOID
IPT_DeInit (
VOID
);

/***************************************************************************
IPT_Start() - Tranfers control from PTRAPI stuff to IPT stuff
 ***************************************************************************/
VOID
IPT_Start (
VOID
);

/***************************************************************************
IPT_End() - Tranfers control from IPT stuff to PTR stuff
 ***************************************************************************/
VOID
IPT_End (
VOID
);

/***************************************************************************
IPT_LoadPrefs() - Load Input Prefs from setup.ini
 ***************************************************************************/
VOID
IPT_LoadPrefs (
VOID
);

#endif
