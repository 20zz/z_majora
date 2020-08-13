/* ******************************************************************
			    ZELDA64-2 SOUND FILES (USA)
			    AUDIO INCLUDES
		    Created By Yoji Inagaki (NCL, EAD)
			    2000. 4.28(FRI) 
   ****************************************************************** */
#include "gfxprint.h"

/* ********************************************
	    sudio structures
   ******************************************** */

typedef struct
{
    u8 button;
    u8 status;
    u8 locate;
}
NA_OCARINA_PLAY_INFO;

typedef struct
{
    u8 max;
    u8 key[8];
}
NA_OCARINA_MELODY_DATA;



/* ********************************************
	    external labels & functions
   ******************************************** */

/* extern void	Nas_InitAudio(void); */
extern void	Na_AudioInit(void);
extern void	Nas_SetRomHandler( s32 (*dmaproc)(OSPiHandle *,OSIoMesg *,s32));
extern void	Na_ResetAudio(void);

#ifndef _NO_RSP_TASK_EXT_
extern void *Nas_AudioMain(void);
#endif
extern void Nas_AudioInput(void);
extern void Na_EntryMesVoice(u32);
extern void Na_StartSe(u8 *, u8 );
extern void Nai_InitInterface(void);
/* extern void Na_StopSeq(u8, u8); */
extern void Nai_SeqFlagEntry(u32);
extern u16 Nai_GetPlayingSeqFlag(u8);

#ifndef _AUDIO_GAME_PRINT_
extern void Na_AudioPrint(gfxprint_t *);
extern void Na_AudioPrint2(gfxprint_t *);
#endif

/* **** SE function **** */

extern void Nai_FxSetLockFlag(u16 _flag);
extern void Nai_FxFlagEntry(u16 , f32 * , u8 , f32 *, f32 *, s8 *);

extern void Nai_StopAllHandleFx(u8);
extern void Nai_StopAllObjHandleFx(u8, f32 *);
extern void Nai_StopAllObjHandleFx2(u8, f32 *);
extern void Nai_StopAllObjFx(f32 *);
extern void Nai_StopFx(u16);
extern void Nai_StopObjFlagFx(f32 *,u16 );
extern s8 Nai_FxFlagCheck(u16);

extern void Na_StartSystemSe(u16 );
extern void Na_StartFixSe(u16 );
extern void Na_StartObjectSe(f32 *, u16 );


extern void Nai_SetSeqLineVolMove(u8, u8, u8, u8);


/* **** game sound function **** */
extern void Na_StartDemoSe(u8 );
extern void Na_StopAllSound(u16);
extern void Na_StartLinkWalkSe(f32 *, u16, f32);
extern void Na_SetLinkSliplevelSe(f32 *, u16, f32);
extern void Na_SetRiverSe(f32 *, f32);
extern void Na_SetWaterfallSe(f32 *, f32);
extern void Na_CheckRiverMovePitch(void);
extern void Na_InitPicthUpSe(void);
extern void Na_StartPicthUpSe(f32 *, u16, u8 *);
extern void Na_StartTransposeSe(f32 *, u16 , s8 );
extern void Na_CheckLevelMuteFlag(void);
extern void Na_SetLevelMuteFlag(u8);
extern void Na_SetMotorSe(f32 *, u16, f32);
extern void Na_SetWaterWheelSe2(f32 *, u16, f32, u8);
extern void Na_SetDummyWaterWheelSe(f32 *, u16);
extern void Na_SetSeTempPort(f32 *, u16 , u8 );
extern void Na_StartInputPortSe(f32 *, u16 , u8 );
extern void Na_SetSwordChargeSe(f32 *, u8 );
extern void Na_SetMuteBgm(u8);
extern void Na_CheckContinueBgm(void);
extern s8 Na_SetTriggerMuteFlag(u8);
extern void Na_SetVolumeDistanceBgm(u8);
extern void Na_DemoOffFxFlagEntry(u16 , f32 * , u8 , f32 *, f32 *, s8 *);
extern void Na_SetMessageStatusFlag(s8);
extern void Na_SwapSeFlagOnDemo(u16 );
extern void Na_SetAutoTriggerSe(f32 *, u16 , f32 );
extern void Na_InitAutoTriggerSe(s8, s8);
extern void Na_SetForceBgmVol(u8 , u8 );
extern void Na_SetFishingRealSe(f32 );
extern void Na_CheckSariaMelodyTag(void);
extern void Na_SetRandomSeFlag(f32 *, u16 , u8 );
extern void Na_SetBlackLinkVoice(f32 *, u16 );
extern void Na_SetGiantLinkVoice(f32 *, u16 );
extern void Na_StartGiantLinkSe(f32 *, u16 );
extern void Na_StartTimeSignalBellSe(f32 *, u8 );
extern void Na_SetRadioBgmTag(f32 *, s8 );
extern void Na_SetRadioBgmTag2(u8 , f32 *, s8, u16);
extern void Na_SetMultiRadioBgmTag(f32 *, s8 );
extern void Na_StartObjectSeWithWaterMode(f32 *, u16);
extern void Na_StartObjectSeWithWaterMode2(f32 *, u16);
extern void Na_SetObjectWaterMode(s8);
extern void Na_SetObjectWaterMode2(f32 *, s8);
extern void Na_StopAllSe(u16 );
extern void Na_StartMesYesSe(void);
extern void Na_StartMesNoSe(void);

extern void Na_SetActorStopFlag(u8 );
extern void Na_SetWindowSound(u8 );
extern void Na_StartFanfare(u16 );
extern void Na_StopAllBgm(u16);
/* extern void Na_StartNarration(u16); */
extern void Na_StartDemoBgm(u16);
extern void Na_StopDemoBgm(u16);
extern s8 Na_CheckPlayingBgm(u16);
extern void Na_StartBgmWithPortWrite(s8 , u16 , u8 , s8 , u8 );
extern void Na_StartMiddleBossBgm(u16);
extern void Na_StopMiddleBossBgm(void);
extern void Na_StartContinueBgm(u16);
extern void Na_StartContinueBgm2(u16, u8);
extern void Na_SetLinkDownSound(void);
extern void Na_ClearLinkDownSound(void);
extern void Na_StartForceNatureSound(u8 );
extern void Na_StopForceNatureSound(void);
extern void Na_StartOcarinaBgm(u16,  u8);
/* extern u8 Na_GetBgmSendFlag(void); */
extern u8 Na_GetSeqSendFlag(u8, u8);
extern u8 Na_GetFrogBgmJumpFlag(void);
extern void Na_StartFanfareWithPortWrite(u16 , s8 , u8 );
extern void Na_SetSeqSwitchMute(u8, u8);
extern void Na_StartStandbyBgm(u16);

extern s8 Na_CheckOcarina(u8 );
extern void Na_PlayOcarina(u8);
extern void Na_SetOcarinaModeFlag(u8);
/* extern void Na_SetOcarinaPlayCheckFlag(u8 ); */

#if 0
extern void Na_SetOcarinaPlayCheckFlag2(u16 );
extern void Na_SetOcarinaPlayCheckFlag3(u16 );
#define NA_OCA_NOTE8_PLAY_CHECK_BIT	0x4000
#define NA_OCA_SINGLE_PLAY_CHECK_BIT	0x8000
#define NA_OCA_FREE_PLAY_CHECK_BIT	0xc000
#else
extern void Na_SetOcarinaPlayCheckFlag2(u32 );
extern void Na_SetOcarinaPlayCheckFlag3(u32 );
extern void Na_SetOcarinaPlayCheckFlag4(u32, u8 );
extern void Na_SetOcarinaPlayCheckFlag5(u32 );
extern void Na_StackInputBufferPointer(void);

#define NA_OCA_NOTE8_PLAY_CHECK_BIT	0x40000000
#define NA_OCA_SINGLE_PLAY_CHECK_BIT	0x80000000
#define NA_OCA_FREE_PLAY_CHECK_BIT	0xc0000000
#endif

extern void Na_SetOcarinaSeq(s8, u8);
extern void Na_SetOcarinaRecModeFlag(u8 );
extern void Na_SetOcarinaKeyInputFlag(u8 );
extern u8 Na_GetOcarinaCheckStatus(void);
extern NA_OCARINA_PLAY_INFO *Na_GetOcarinaInfoWork(void);
extern NA_OCARINA_PLAY_INFO *Na_GetOcarinaSeqInfoWork(void);
extern NA_OCARINA_PLAY_INFO *Na_GetOcarinaRecInfoWork(void);
extern void Na_InitOcarinaGameWork(u8);
extern u8 Na_MakeOcarinaGameData(void);
extern void Na_AutoPlayUserOcarinaMelody(void);
extern u8 Na_CheckOcarinaInputResult(void);
extern u8 Na_CheckOcarinaInputEvaluation(void);
extern s8 Na_MakeOcarinaMus(void);
extern void Na_MakeRandomOcarinaData(void);
extern void Na_SetOcarinaModeFlagWithTimer(u8 , u8 );
extern void Na_KeepOcarinaButton(void);

extern void Na_ControlNaturalSound(u8, u8, u8 );
extern void Na_StartNaturalSound(u16, u16);

extern void Na_NscInitStart(u8 );

extern void Na_SetBgmPattern(u8 );
extern void Na_SetEnemyBgmDistance(f32 );
extern void Na_SetObjectBgmDistance(f32, u16);
extern void Na_SetBgmPitch(f32 , u8 );
extern void Na_SetBgmPitch2(u8 , f32 , u8 );
extern void Na_StartWindmillBgm(void);
extern void Na_SetSariaMelodyTag(f32 *);
extern void Na_SetCrossBgmTag(f32 *, u16 , u16 );
extern void Na_ClearCrossBgmTag(void);
extern void Na_SetSariaMelodyTag2(f32 *, f32);
extern void Na_ClearSariaMelodyTag2(f32 *);
extern void Na_SetMiniGameBgmTempoUp(void);
extern void Na_StartMiniGameBgm(u16);
extern void Na_StopMiniGameBgm(void);
extern void Na_StartMorinigBgm(u16);
extern void Na_StartMorinigBgm2(u16, u8);
extern void Na_SetParallelBgmTag(u8, f32 *, u8 , u8 , f32 , f32 , f32 );
extern void Na_SetParallelBgmPause(u8 );
extern void Na_SetInRoomBgmTag(f32 *, u8 , f32 );
extern void Na_SetOutofRoomBgmTag(f32 *, u8 , f32 );
extern void Na_SetOutdoorBgmTag(f32 *, u16 , f32 );
extern void Na_SetOutdoorBgmTag2(u8, f32 *, u16 , f32 );
extern void Na_StartNoPosOutdoorBgm(u8 , u16 );
extern void Na_StopNoPosOutdoorBgm(void);

extern void Na_SetEnvEcho(s8 );
extern void Na_SetAddEcho(s8 );
extern void Na_SetSoundOutputMode(s8 );
/* extern void Na_StopAllSound(s8 ); */
extern void Na_SetDirectFir(u8 );
extern void Na_SetWaterSeModeFlag(u8 );
extern void Na_StartFxmixSe(f32 *, u16 , s8 );
extern void Na_StartVolumeSetSe(f32 *, u16 , f32 );
extern void Na_StartInputAllPortSe(f32 *, u16 , u8 );
extern void Na_SetMoveSoundWorkF32(f32 *, f32 , u16 );

extern void Na_StartSoundOutputDemoSe(void);
extern void Na_ForceStopSound(void);
extern void Na_StopAllSound2(void);
extern void Na_RecoverSe(void);
s8 Na_CheckAllChannels(void);
extern void Na_ChangeSeFxline(u8 );
extern void Na_SpecChangeCustom(u8) ;
extern void Na_SetNonstopBgmFlag(u8 );

extern void Na_InitVrsInterface(void);
extern void Na_InitVrsDictionay(void);
extern void Na_SetVrsWord(u16 word);
extern void Na_ClearVrsWord(u16 word);
extern void Na_VrsMain(void);
extern u16 Na_GetVrsAnswer(void);
extern u8 Na_CheckVrsStaus(void);


/* ********************************************
	    external work
   ******************************************** */
/* **** SE work **** */

extern f32 _dummy_zero_f[3];
extern f32 _dummy_one;
extern u8 _dummy_zero_u8;
extern s8 _dummy_zero_s8;

extern NA_OCARINA_MELODY_DATA na_oca_note[];
extern u8 na_mofer_picth_up_table[];
extern f32 na_set_volume_param;

extern u8 *na_oca_rec_buf_ptr;
extern u8 *na_oca_rec_buf2_ptr;
extern u8 *na_frog_tbl_ptr;
extern OSVoiceHandle na_vhd;
extern const u16 na_plate_sound_tbl[];


/* ********************************************
	    define se macro 
   ******************************************** */
/* #define Na_StartSystemSe(f)	Na_StartSe( (u8)(f>>28), (u8)(f & 0xff) ) */
#define Na_StartPlayerSe(p, f)	Nai_FxFlagEntry( f, p, 4, &_dummy_one, &_dummy_one, &_dummy_zero_s8)
/* #define Na_StartObjectSe(p, f)	Nai_FxFlagEntry( f, p, 4, &_dummy_one, &_dummy_one, &_dummy_zero_s8) */
/* #define Na_StartSystemSe(f)	Nai_FxFlagEntry( f, _dummy_zero_f, 4, &_dummy_one, &_dummy_one, &_dummy_zero_s8) */
/* #define Na_StartFixSe(f)	Nai_FxFlagEntry( f, _dummy_zero_f, 4, &_dummy_one, &_dummy_one, &_dummy_zero_s8) */
/* #define Na_StartFixse(f)	Nai_FxFlagEntry( (u16)(f>>16)+(u16)(f & 0xff) , _dummy_zero_f, 4, &_dummy_one, &_dummy_one, &_dummy_zero_s8) */
#define Na_StartDemoOffSystemSe(f)	Na_DemoOffFxFlagEntry( f, _dummy_zero_f, 4, &_dummy_one, &_dummy_one, &_dummy_zero_s8)

#define Na_StopAllHandleSe(h)	Nai_StopAllHandleFx((h))
#define Na_StopAllObjHandleSe(h, p)	Nai_StopAllObjHandleFx((h), (p))
#define Na_StopAllObjSe(p)	Nai_StopAllObjFx((p))
#define Na_StopObjFlagSe(p, f)	Nai_StopObjFlagFx((p), (f))
#define Na_StopFlagSe(f)	Nai_StopFx((f))
#define Na_CheckPlayingSeFlag(f)	Nai_FxFlagCheck((f))

#define Na_StartOcarinaMode()	Na_SetOcarinaModeFlag(1)
#define Na_SetOcarinaInst(f)	Na_SetOcarinaModeFlag(f)
#define Na_StopOcarinaMode()	Na_SetOcarinaModeFlag(0)
#define Na_StopOcarinaModeWithTimer(t)	Na_SetOcarinaModeFlagWithTimer(0, t)
#define Na_StopOcarinaModeWithDelay()	Na_SetOcarinaModeFlagWithTimer(0, 20);
#define Na_StartOcarinaFreePlay()	Na_SetOcarinaKeyInputFlag(1)
#define Na_StopOcarinaFreePlay()	Na_SetOcarinaKeyInputFlag(0)
/* #define	Na_StartOcarinaPlayCheck()  Na_SetOcarinaPlayCheckFlag(0xff) */
/* #define	Na_StartOcarinaSinglePlayCheck(n)  Na_SetOcarinaPlayCheckFlag((n)+1) */

#define	Na_StartOcarinaPlayCheck(f)  Na_SetOcarinaPlayCheckFlag2((u32)(f))
#define	Na_StartOcarinaSinglePlayCheck(n)  Na_SetOcarinaPlayCheckFlag2((u32)((0x01<<(n))) | NA_OCA_SINGLE_PLAY_CHECK_BIT)
#define	Na_StartOcarinaFreePlayCheck(f)  Na_SetOcarinaPlayCheckFlag2((u32)((f)) | NA_OCA_FREE_PLAY_CHECK_BIT)
#define	Na_StartOcarinaPlayCheck2(f)  Na_SetOcarinaPlayCheckFlag2((u32)(f))
#define	Na_StartOcarinaSinglePlayCheck2(n)  Na_SetOcarinaPlayCheckFlag2((u32)((0x01<<(n))) | NA_OCA_SINGLE_PLAY_CHECK_BIT)

#define	Na_StartOcarinaFreePlayCheck2(n)  Na_SetOcarinaPlayCheckFlag2((u32)((0x01<<(n))) | NA_OCA_FREE_PLAY_CHECK_BIT)
#define	Na_StartOcarinaSingleFreePlayCheck(n)  Na_SetOcarinaPlayCheckFlag2((u32)((0x01<<(n))) | NA_OCA_FREE_PLAY_CHECK_BIT)
#define	Na_StartOcarinaRecMode()    Na_SetOcarinaRecModeFlag(1)
#define	Na_StopOcarinaRecMode()	Na_SetOcarinaRecModeFlag(0)
#define	Na_StartOcarinaRecEightMode()    Na_SetOcarinaRecModeFlag(2)
#define	Na_StartOcarinaPlayLengthCheck(n)  Na_SetOcarinaPlayCheckFlag3((u32)((0x01<<(n))) | NA_OCA_SINGLE_PLAY_CHECK_BIT)
#define	Na_StartOcarinaHalfPlayCheck(n, p)  Na_SetOcarinaPlayCheckFlag4((u32)((0x01<<(n)))|NA_OCA_SINGLE_PLAY_CHECK_BIT, (p))
#define	Na_StartOcarinaHalf4PlayCheck(n)  Na_SetOcarinaPlayCheckFlag4((u32)((0x01<<(n)))|NA_OCA_SINGLE_PLAY_CHECK_BIT, 4)
#define	Na_StartOcarinaContinuousFreePlayCheck(f)  Na_SetOcarinaPlayCheckFlag5((u32)((f)) | NA_OCA_FREE_PLAY_CHECK_BIT)

#define	Na_StopOcarinaPlayCheck()   Na_SetOcarinaPlayCheckFlag2(NA_OCA_CHK_MODE_STOP)
#define Na_StartOcarinaSeq(n, t)    Na_SetOcarinaSeq((s8)((n)+1), ((t) & 0x7f))
#define Na_StartOcarinaHeadSeq(n, p)    Na_SetOcarinaSeq((s8)((n)+1), 0x80+(p))
#define Na_StartOcarinaHead4Seq(n)    Na_SetOcarinaSeq((s8)((n)+1), 0x84)
#define Na_StartOcarinaTailSeq(n, p)    Na_SetOcarinaSeq((s8)((n)+1), 0x40+(p))
#define Na_StartOcarinaTail4Seq(n)    Na_SetOcarinaSeq((s8)((n)+1), 0x44)
#define Na_StopOcarinaSeq()	    Na_SetOcarinaSeq(0, 1)

/* #define Na_SetWaterSeModeFlag(f)    Na_SetDirectFir((f))   */
#define Na_SetLinkInWaterFlag(f)    Na_SetDirectFir((f))
#define Na_InitMoferSwingSe()	    Na_InitPicthUpSe()
#define Na_StartMoferSwingSe(p)	    Na_StartPicthUpSe((p), NA_SE_EN_MOFER_WAVE, na_mofer_picth_up_table)
#define Na_StartFlySe(p, f, s)	    Na_SetMotorSe((p), (f), 0.6f+(0.4f*(s)))
#define Na_StartBaliLevelSe(p, f, s)	    Na_SetMotorSe((p), (f), 1.0f+(1.0f*(s)))
#define Na_SetTimerSe(s)	    Na_StartInputPortSe(_dummy_zero_f, NA_SE_SY_TIMER, (s))
#define Na_SetSeExclusiveData(p, f, d)	    Na_SetSeTempPort((p), (f), (d));
/* #define Na_SetShieldChargeSe(s)	    Na_StartInputPortSe(_dummy_zero_f, NA_SE_IT_SHIELD_CHARGE, (s)) */
#define Na_StartRodSe(p, f, s)	    Na_SetMotorSe((p), (f), 0.75f+(0.25f*(s)))
#define Na_StartHeightSe(p, f, h)   Na_SetMotorSe((p), (f), (1.0f+(h)))
#define Na_StartSeesawSe(p, s)	    Na_SetMotorSe((p), NA_SE_EV_SEESAW_INCLINE, (1.0f+(s)))
#define Na_SetConveyorSe(s)	    Na_SetMotorSe(_dummy_zero_f, NA_SE_EV_SECOM_CONVEYOR, (s))
#define Na_SetBigBombTimerLevel(p, d)    Na_StartInputPortSe((p), NA_SE_IT_BIG_BOMB_IGNIT, (d));
#define Na_StartChikenGetSe(n)	    Na_StartInputAllPortSe(_dummy_zero_f, NA_SE_SY_CHICK_JOIN_CHIME, (n))

#define Na_SetDemoSceneFlag()	    Na_SetMessageStatusFlag(1)
#define Na_ClearDemoSceneFlag()	    Na_SetMessageStatusFlag(0)
#define Na_StartMessageWindowSe()   Na_SwapSeFlagOnDemo(NA_SE_SY_MESSAGE_WIN_OPEN)
#define Na_SetOcarinaMute()	    Nai_FxSetLockFlag(NA_SEHD_OCARINA_BIT)
#define Na_ClearOcarinaMute()	    Nai_FxSetLockFlag(0x0000)
#define Na_SetSeCancelFlagDemo()	    Nai_FxSetLockFlag(NA_SEHD_NOT_SYSTEM_BIT)
#define Na_SetSeCancelFlagFull()	    Nai_FxSetLockFlag(NA_SEHD_FULL_BIT)
#define Na_SetSystemSeCancelFlag()	    Nai_FxSetLockFlag(NA_SEHD_SYSTEM_BIT)
#define Na_ClearSeCancelFlagDemo()	    Nai_FxSetLockFlag(0x0000)
#define Na_InitFrogOcarinaGame()    Na_InitOcarinaGameWork(6);
#define Na_StartLinkSeWithSpeed(p, f, s)    Na_SetLinkSliplevelSe((p), (f), (s))

#define Na_StartFrogSe(p, t)	    Na_StartTransposeSe((p), NA_SE_EV_FROG_JUMP, (t))
#define Na_StartFiveLupySe(t)	    Na_StartTransposeSe(_dummy_zero_f, NA_SE_EV_FIVE_COUNT_LUPY, (t))
#define Na_InitOwlFlutterSe()	    Na_InitAutoTriggerSe(20, 10)
#define Na_SetOwlFlutterSe(p, s)    Na_SetAutoTriggerSe((p), NA_SE_EN_OWL_FLUTTER, (s))
#define Na_SetOwlFlySe(p, f, s)	    Na_SetMotorSe((p), (f), (s))
#define Na_SetFallDownSe(p, s)	    Na_SetMotorSe((p), NA_SE_EV_FLYING_AIR, (s))
#define Na_SetTelescopeMovementSe(s)	    Na_SetMotorSe(_dummy_zero_f, NA_SE_PL_TELESCOPE_MOVEMENT, (s))
#define Na_SetWaterWheelSe(p, f, s)	    Na_SetWaterWheelSe2((p), (f), (s), 32)	/*Na_SetMotorSe((p), (f), (s))*/

#define Na_InitFinshingReelSe()	    Na_InitAutoTriggerSe(8, 2);
#define Na_StartRandomSe2(p, f)	    Na_SetRandomSeFlag((p), (f), 2);
#define Na_StartRandomSe3(p, f)	    Na_SetRandomSeFlag((p), (f), 3);
#define Na_StartRandomSe4(p, f)	    Na_SetRandomSeFlag((p), (f), 4);
#define Na_StartBigGoronSe(f)	    Na_StartFxmixSe(_dummy_zero_f, (f), 60);
#define Na_StartNavyVoiceSingle(f)  Na_StartFxmixSe(_dummy_zero_f, (f), 32);
#define Na_SetMetronomeSeWithTempo(t)	Na_StartInputAllPortSe(_dummy_zero_f,NA_SE_SY_METRONOME_TEMPO, (t));
#define Na_StartMetronomeSeWithTempo(t)	Na_StartInputAllPortSe(_dummy_zero_f,NA_SE_SY_METRONOME_TEMPO_TRIG, (t));
/* #define Na_StartTimeSignalBellSe(t)	Na_StartInputAllPortSe(_dummy_zero_f,NA_SE_SY_TIMESIGNAL_BELL, (t)); */
#define Na_InitDekunutsFlySe()	    Na_InitAutoTriggerSe(4, 2);
#define Na_SetDekunutsFlySe(p, s)   Na_SetAutoTriggerSe((p), NA_SE_IT_DEKUNUTS_FLOWER_ROLL, ((s) * 2.0f))

#define Na_SetExtraEchoLine(s)	    Na_ChangeSeFxline((s))
#define Na_SetNonstopBgmModeFlag()	Na_SetNonstopBgmFlag(1)
#define Na_ClearNonstopBgmModeFlag()	Na_SetNonstopBgmFlag(0)

/* ********************************************
	define sequence interface macro
   ******************************************** */

#define Na_SeqStart(h, f, t)		Nai_SeqFlagEntry(0x00000000 | ((u32)(h) << 24) | ((u32)(t) << 16) | (u32)(f) )
#define Na_SeqStop(h, t)		Nai_SeqFlagEntry(0x100000ff | ((u32)(h) << 24) | ((u32)(t) << 16) )
#define Na_SeqEntry(h, f, t)		Nai_SeqFlagEntry(0x20000000 | ((u32)(h) << 24) | ((u32)(t) << 16) | (u32)(f) )
#define Na_SeqFree(h, f)		Nai_SeqFlagEntry(0x30000000 | ((u32)(h) << 24) | (u32)(f) )
#define Na_SeqVolMove(h, v, t)		Nai_SeqFlagEntry(0x40000000 | ((u32)(h) << 24) | ((u32)(t) << 16) | (u32)(v) )
#define Na_SeqVolRecover(h, t)		Nai_SeqFlagEntry(0x4000007f | ((u32)(h) << 24) | ((u32)(t) << 16) )
#define Na_SeqTuneMove(h, p, t)		Nai_SeqFlagEntry(0x50000000 | ((u32)(h) << 24) | ((u32)(t) << 16) | (u32)(p) )
#define Na_SeqTuneRecover(h, t)		Nai_SeqFlagEntry(0x50000000 | ((u32)(h) << 24) | ((u32)(t) << 16) | 1000 )

#define Na_SeqSubEVolMove(h, s, v, t)	Nai_SeqFlagEntry(0x60000000 | ((u32)(h) << 24) | ((u32)(t) << 16) | ((u32)(s) << 8) | (u32)(v) )
#define Na_SeqPortWrite(h, p, d)	Nai_SeqFlagEntry(0x70000000 | ((u32)(h) << 24) | ((u32)(p) << 16) | (u32)(d) )
#define Na_SeqSubPortWrite(h, s, p, d)	Nai_SeqFlagEntry(0x80000000 | ((u32)(h) << 24) | ((u32)(p) << 16) | ((u32)(s) << 8) | (u32)(d) )
#define Na_SeqPortLockSet(h, b)		Nai_SeqFlagEntry(0x90000000 | ((u32)(h) << 24) | (u32)(b) )
#define Na_SeqSubMuteSet(h, b)		Nai_SeqFlagEntry(0xA0000000 | ((u32)(h) << 24) | (u32)(b) )
#define Na_SeqTempoChangeDirect(h, tp, t)	Nai_SeqFlagEntry(0xB0000000 | ((u32)(h) << 24) | ((u32)(t) << 16) | (u32)(tp) )
#define Na_SeqTempoChangeAdd(h, tp, t)	Nai_SeqFlagEntry(0xB0001000 | ((u32)(h) << 24) | ((u32)(t) << 16) | (u32)(tp) )
#define Na_SeqTempoChangeSub(h, tp, t)	Nai_SeqFlagEntry(0xB0002000 | ((u32)(h) << 24) | ((u32)(t) << 16) | (u32)(tp) )
#define Na_SeqTempoChangeMul(h, tp, t)	Nai_SeqFlagEntry(0xB0003000 | ((u32)(h) << 24) | ((u32)(t) << 16) | (u32)(tp) )
#define Na_SeqTempoChangeRecover(h, t)	Nai_SeqFlagEntry(0xB0004000 | ((u32)(h) << 24) | ((u32)(t) << 16) )

#define Na_SeqEndCheckSet(h, f)		Nai_SeqFlagEntry(0xC0000000 | ((u32)(h) << 24) | (u32) (f) )
#define Na_SeqSubTuneMove(h, s, p, t)		Nai_SeqFlagEntry(0xD0000000 | ((u32)(h) << 24) | ((u32)(t) << 16) | ((u32)(s) << 12) | (u32)(p) )
#define Na_SeqSubTuneRecover(h, s, t)		Nai_SeqFlagEntry(0xD0000000 | ((u32)(h) << 24) | ((u32)(t) << 16) | ((u32)(s) << 12) | 1000 )

#define Na_SeqECheck_SeqStart(h1, h2, f)	Nai_SeqFlagEntry(0xC0500000 | ((u32)(h1) << 24) | ((u32)(h2) << 16) | (u32) (f) )
#define Na_SeqECheck_TempoChangeMul(h1, h2, tpr, t)	Nai_SeqFlagEntry(0xC0300000 | ((u32)(h1) << 24) | ((u32)(h2) << 16) | ((u32)(t) << 8) | (u32) (tpr) )
#define Na_SeqECheck_MuteOff(h1, h2, t)	Nai_SeqFlagEntry(0xC0000000 | ((u32)(h1) << 24) | ((u32)(h2) << 16) | ((u32)(t) << 8))
#define Na_SeqECheck_RestSeqMuteOff(h1, h2, t, s)	Nai_SeqFlagEntry(0xC0700000 | ((u32)(h1) << 24) | ((u32)(h2) << 16) | ((u32)(t) << 8)| (u32)(s))
#define Na_SeqECheck_SeqFree(h1)	Nai_SeqFlagEntry(0xC0100000 | ((u32)(h1) << 24))
#define Na_SeqECheck_SeqRestart(h1, h2)	Nai_SeqFlagEntry(0xC0200000 | ((u32)(h1) << 24) | ((u32)(h2) << 16))
#define Na_SeqECheck_TempoChangeRecover(h1, h2, t)	Nai_SeqFlagEntry(0xC0400000 | ((u32)(h1) << 24) | ((u32)(h2) << 16) | ((u32)(t) << 8))
#define Na_SeqECheck_SeqTimerSet(h1, t)	Nai_SeqFlagEntry(0xC0600000 | ((u32)(h1) << 24) | ((u32)(t) << 8) )
#define Na_SeqECheck_LineVolRecover(h1, h2, l, t)	Nai_SeqFlagEntry(0xC0800000 | ((u32)(h1) << 24) | ((u32)(h2) << 16) | ((u32)(l) << 8)| (u32)(t))
#define Na_SeqECheck_SubMuteSet(h1, h2, b)	Nai_SeqFlagEntry(0xC0900000 | ((u32)(h1) << 24) | ((u32)(h2) << 16) | (u32)(b))
#define Na_SeqECheck_TuneMove(h1, h2, p, t)	Nai_SeqFlagEntry(0xC0a00000 | ((u32)(h1) << 24) | ((u32)(h2) << 16) | ((u32)(t) << 8) | (u32)(p))
#define Na_SeqECheck_DeleteStay(h1, tp)	Nai_SeqFlagEntry(0xC0E00000 | ((u32)(h1) << 24) | (u32)(tp))
#define Na_SeqECheck_BufClear(h1)	Nai_SeqFlagEntry(0xC0F00000 | ((u32)(h1) << 24))

#define Na_SetOutputMode(m)		Nai_SeqFlagEntry(0xe0000000 | (u32)(m) )
#define Na_BgmNonEntrySet(f)		Nai_SeqFlagEntry(0xe0000100 | (u32)(f) )
#define Na_SetBgmNonEntryDebug(f)	Nai_SeqFlagEntry(0xe0000200 | (u32)(f) )
#define Na_SpecChange(s, n)		Nai_SeqFlagEntry(0xf0000000 | ((u32)(s) << 8)  | (u32)(n) )
#define Na_EchoChange(s, n, c)		Nai_SeqFlagEntry(0xf0000000 | ((u32)(c) << 16) | ((u32)(s) << 8)  | (u32)(n) )



/* ********************************************
	    define sequence game macro
   ******************************************** */

#define Na_StartBgm(n)		Na_SeqStart(BGM_GROUP_TRACK, (0x8000+(n)), 0)
#define Na_StartMixBgm(n)	Na_SeqStart(FAN_GROUP_TRACK, (n), 0)
#define Na_StartExtraBgm(n)	Na_SeqStart(EXTRA_GROUP_TRACK, (n), 0)
#define Na_StartSeq(s, n)	Na_SeqStart((s), (n), 0)
#define Na_StopBgm(t)		Na_SeqStop(BGM_GROUP_TRACK, (t))
#define Na_StopFanfare(t)	Na_SeqStop(FAN_GROUP_TRACK, (t))
#define Na_StopExtraBgm(t)	Na_SeqStop(EXTRA_GROUP_TRACK, (t))
#define Na_StopNarration()	Na_SeqStop(EXTRA_GROUP_TRACK, 0)
/* #define Na_StartMorinigBgm(n)	Na_StartBgmWithPortWrite(BGM_GROUP_TRACK, n, 0, 0, 1) */
#define Na_StartMapInitBgm(n)	Na_StartContinueBgm((n))
#define Na_StartMapInitBgm2(n, d)	Na_StartContinueBgm2((n), (d))
#define Na_StartIntroCutBgm(n)	Na_StartBgmWithPortWrite(BGM_GROUP_TRACK, (n), 0, 7, 1)

/* #define Na_StartMiddleBossBgm(n)	Na_SeqEntry(BGM_GROUP_TRACK, NA_BGM_MIDDLE_BOSS, 0) */
/* #define Na_StopMiddleBossBgm(n)	Na_SeqFree(BGM_GROUP_TRACK, NA_BGM_MIDDLE_BOSS)	*/


/* #define Na_SetOutputMode(m)	Nai_SeqFlagEntry(0xe0000000 | (u8)(m) ) */
/* #define Na_SeqSubMuteSet(h, b)	Nai_SeqFlagEntry(0xA0000000 | ((u32)(h) << 24) | (u16)(b) ) */
#define	Na_ChangeSoundMode(m)	Na_SpecChangeCustom(m)	/* Na_SpecChange(0, (m))*/
/* #define	Na_SetBgmPattern(f)	Na_SeqPortWrite(BGM_GROUP_TRACK, 2, f) */
#define	Na_ControlBgmVolume(v)	Nai_SetSeqLineVolMove(BGM_GROUP_TRACK, 0, (v), 10)
#define	Na_SetMuteTag()		Na_SetLevelMuteFlag(NA_LV_MUTE_VOL)
#define	Na_SetMaronDistance(d)		Na_SetObjectBgmDistance((d), NA_BGM_RONRON)
#define	Na_SetMessageBgmMute()	    Na_SetMuteBgm(1);
#define	Na_ClearMessageBgmMute()    Na_SetMuteBgm(0);
#define Na_CheckPlayingBgmFlag()    Nai_GetPlayingSeqFlag(BGM_GROUP_TRACK)
#define Na_CheckPlayingFanfareFlag()    Nai_GetPlayingSeqFlag(FAN_GROUP_TRACK)
#define Na_SetSpeedUpBgm()	    Na_SetBgmPitch2(BGM_GROUP_TRACK, 1.18921f, 90)
#define Na_RecoverSpeedUpBgm()	    Na_SetBgmPitch2(BGM_GROUP_TRACK, 1.00f, 20)
#define Na_SetSpeedUpWindmillBgm()	    Na_SetBgmPitch2(EXTRA_GROUP_TRACK, 1.18921f, 2)
#define Na_RecoverSpeedUpWindmillBgm()	    Na_SetBgmPitch2(EXTRA_GROUP_TRACK, 1.00f, 2)
#define Na_SetSariaBgmTag(p)	Na_SetCrossBgmTag((p), NA_BGM_MAYOIMORI, 1000)
#define Na_ClearSariaBgmTag()	Na_ClearCrossBgmTag()
#define Na_SetFairyBgmTag(p)	Na_SetCrossBgmTag((p), NA_BGM_GODESS, 800)
#define Na_SetWindmillBgm(p)	Na_SetInRoomBgmTag((p), NA_BGM_FUSHA, 540.f);
#define Na_SetDummyWindmillBgm(p)	Na_SetOutofRoomBgmTag((p), NA_BGM_FUSHA, 540.f);
#define Na_SetOrgelHouseBgm(p)	Na_SetOutdoorBgmTag2(EXTRA_GROUP_TRACK, (p), NA_BGM_ORGEL_HOUSE, 1500.f)
#define Na_SetSharpCurseBgm(p)	Na_SetOutdoorBgmTag2(EXTRA_GROUP_TRACK, (p), NA_BGM_SHARP, 2000.f);
#define Na_SetBassPlayBgm(p)	Na_SetOutdoorBgmTag2(EXTRA_GROUP_TRACK, (p), NA_BGM_BASS_PLAY, 1000.f)
#define Na_SetDrumsPlayBgm(p)	Na_SetOutdoorBgmTag2(EXTRA_GROUP_TRACK, (p), NA_BGM_DRUMS_PLAY, 700.f)
#define Na_SetPianoPlayBgm(p)	Na_SetOutdoorBgmTag2(EXTRA_GROUP_TRACK, (p), NA_BGM_PIANO_PLAY, 1000.f)
#define Na_SetMeetingBgm()	Na_SetOutdoorBgmTag2(EXTRA_GROUP_TRACK, _dummy_zero_f, NA_BGM_MEETING, 1000.f)
#define Na_SetDancerBgm(p)	Na_SetOutdoorBgmTag2(EXTRA_GROUP_TRACK, (p), NA_BGM_SISTER_DANCER, 900.f)
#define Na_SetCamaroBgm(p)	Na_SetOutdoorBgmTag2(BGM_GROUP_TRACK, (p), NA_BGM_CAMARO_DANCE, 900.f)
#define Na_StartFrogBgm()	Na_StartNoPosOutdoorBgm(EXTRA_GROUP_TRACK, NA_BGM_FROG_SONG)
#define Na_StopFrogBgm()	Na_StopNoPosOutdoorBgm()

#define Na_StopDemoSe()		Na_SeqStop(DEMO_SE_GROUP_TRACK, 1)
#define Na_SetBgmVolumeZero()	Na_StartForceNatureSound(4)	/* Na_SetForceBgmVol(0, 5)  */
#define Na_ReturnBgmVolume()	Na_StopForceNatureSound()	/* Na_SetForceBgmVol(127, 5)	*/
#define Na_SetBgmVolumeDown(v)	Na_SetForceBgmVol((v), 5)
#define Na_RecoverBgmVolume()	Na_SetForceBgmVol(127, 5)
/*
#define Na_StartMiniGameBgm(f)	Na_StartMiddleBossBgm((f))
#define Na_StopMiniGameBgm()	Na_StopMiddleBossBgm()
*/
/*
#define Na_SetMiniGameBgmTempoUp()	Na_SeqTempoChangeDirect(BGM_GROUP_TRACK, 210, 5)
*/
#define Na_StartFaceMaskBgm()    Na_StartFanfare(NA_BGM_FACEMASK)
#define Na_StopFaceMaskBgm()    Na_StopFanfare(0)
#define Na_StartQuartetBgm(p)	Na_StartFanfareWithPortWrite(NA_BGM_QUARTET, 4, (u8)(0x0f ^ (p)));
#define Na_CheckPlayingQuartetBgm()    Nai_GetPlayingSeqFlag(BGM_GROUP_TRACK)
#define Na_GetMarchBeatLevelFlag()   Na_GetSeqSendFlag(FAN_GROUP_TRACK, NA_SWITCH_OFF)
#define Na_GetMarchBeatTriggerFlag()   Na_GetSeqSendFlag(FAN_GROUP_TRACK, NA_SWITCH_ON)
#define Na_GetBgmSendFlag()	Na_GetSeqSendFlag(BGM_GROUP_TRACK, NA_SWITCH_ON)

#define Na_SetBgmSwitchMute(s)	Na_SetSeqSwitchMute(BGM_GROUP_TRACK, (s))
#define Na_SetNscSwitchMute(s)	Na_SetSeqSwitchMute(NATURE_GROUP_TRACK, (s))

/* ********************************************
	    natural sound control macro
   ******************************************** */
/* #define Na_NscInitStart(f)	    Na_StartNaturalSound((u16)(f>>16), (u16)(f & 0xffff)) */
#define Na_NscAllStop(t)	    Na_SeqStop(NATURE_GROUP_TRACK, (t))
#define Na_NscSetCtrlFlag(h, p)	    Na_ControlNaturalSound((u8)((h)>>8), (u8)((h) & 0xff), (p))

/* ********************************************
	    ending se fade out
   ******************************************** */
#define Na_StartSeFadeOut(t)	   Na_SeqVolMove(SE_GROUP_TRACK, 0, t) 	    

#if 0
/* ********************************************
	    Groop Track Handle
   ******************************************** */

#define BGM_GROUP_TRACK		0
#define FAN_GROUP_TRACK		1
#define SE_GROUP_TRACK		2
#define VO_GROUP_TRACK		3
#endif

/* ********************************************
	    SE Handle
   ******************************************** */
#define SEHD_PLAYER	    0
#define SEHD_ITEM	    1
#define SEHD_ENVIRO	    2
#define SEHD_ENEMY	    3
#define SEHD_SYSTEM	    4
#define SEHD_OCARINA	    5
#define SEHD_VOICE	    6

#define NA_SEHD_PLAYER	    SEHD_PLAYER
#define NA_SEHD_ITEM	    SEHD_ITEM
#define NA_SEHD_ENVIRO	    SEHD_ENVIRO
#define NA_SEHD_ENEMY	    SEHD_ENEMY
#define NA_SEHD_SYSTEM	    SEHD_SYSTEM
#define NA_SEHD_OCARINA	    SEHD_OCARINA
#define NA_SEHD_VOICE	    SEHD_VOICE

#define NA_SEHD_PLAYER_BIT  0x0001
#define NA_SEHD_ITEM_BIT    0x0002
#define NA_SEHD_ENVIRO_BIT  0x0004
#define NA_SEHD_ENEMY_BIT   0x0008
#define NA_SEHD_SYSTEM_BIT  0x0010
#define NA_SEHD_OCARINA_BIT 0x0020
#define NA_SEHD_VOICE_BIT   0x0040

#define NA_SEHD_NOT_SYSTEM_BIT   0x006f
#define NA_SEHD_FULL_BIT    0x007f


/* ********************************************
	    Groop Track Handle
   ******************************************** */

#define BGM_GROUP_TRACK		0
#define FAN_GROUP_TRACK		1
#define SE_GROUP_TRACK		2
#define EXTRA_GROUP_TRACK	3
#define DEMO_SE_GROUP_TRACK	EXTRA_GROUP_TRACK
#define NATURE_GROUP_TRACK	4

/* ********************************************
	    Sound Output Mode Label
   ******************************************** */
#define NA_SOUT_STEREO		0
#define NA_SOUT_MONO		3
#define NA_SOUT_HEADPHONE	1
#define NA_SOUT_3DWIDE		2
#define NA_SOUT_DOLBYPRO	4


/* ********************************************
	    SE FLAG
   ******************************************** */


/*** PLAYER ***/

#define NA_CODE_GROUND		    0x0000
#define NA_CODE_SAND		    0x0001
#define NA_CODE_CONCRETE	    0x0002
#define NA_CODE_DIRT		    0x0003
#define NA_CODE_DIRT_SHALLOW	    0x0003
#define NA_CODE_WATER0		    0x0004
#define NA_CODE_WATER1		    0x0005
#define NA_CODE_WATER2		    0x0006
#define NA_CODE_WEED		    0x0006
#define NA_CODE_MAGMA		    0x0007
#define NA_CODE_GRASS		    0x0008
#define NA_CODE_IRON		    0x0009
#define NA_CODE_CARPET		    0x0009
#define NA_CODE_GLASS		    0x000b
#define NA_CODE_BOARD		    0x000b
#define NA_CODE_WOOD		    0x000a
#define NA_CODE_HEAVYBOOTS	    0x000d
#define NA_CODE_DIRT_DEEP	    0x000d
#define NA_CODE_SNOW		    0x000e
#define NA_CODE_ICE		    0x000f

#define NA_OFS_PL_ADULT		    0x080
#define NA_OFS_PL_KID		    0x000
#define NA_OFS_PL_DEKUNUTS	    0x0f0
#define NA_OFS_PL_ZORA		    0x120
#define NA_OFS_PL_GORON		    0x150
#define NA_MASK_SE_PL		    0x7f

#define NA_SE_PL_TOSS		    0x0800
#define NA_SE_PL_HANG		    0x0800
#define NA_SE_PL_WALK		    0x0800
#define NA_SE_PL_WALK_GROUND	    0x0800
#define NA_SE_PL_WALK_SAND	    0x0801
#define NA_SE_PL_WALK_CONCRETE	    0x0802
#define NA_SE_PL_WALK_DIRT	    0x0803
#define NA_SE_PL_WALK_WATER0	    0x0804
#define NA_SE_PL_WALK_WATER1	    0x0805
#define NA_SE_PL_WALK_WATER2	    0x0806
#define NA_SE_PL_WALK_WEED	    0x0806
#define NA_SE_PL_WALK_MAGMA	    0x0807
#define NA_SE_PL_WALK_GRASS	    0x0808
#define NA_SE_PL_WALK_IRON	    0x0809
#define NA_SE_PL_WALK_GLASS	    0x080b
#define NA_SE_PL_WALK_LADDER	    0x080a
#define NA_SE_PL_WALK_WOOD	    0x080b
#define NA_SE_PL_WALK_WALL	    0x080c
#define NA_SE_PL_WALK_HEAVYBOOTS    0x080d
#define NA_SE_PL_WALK_SNOW	    0x080e
#define NA_SE_PL_WALK_ICE	    0x080f

#define NA_SE_PL_JUMP		    0x0810
#define NA_SE_PL_JUMP_GROUND	    0x0810
#define NA_SE_PL_JUMP_SAND	    0x0811
#define NA_SE_PL_JUMP_CONCRETE	    0x0812
#define NA_SE_PL_JUMP_DIRT	    0x0813
#define NA_SE_PL_JUMP_WATER0	    0x0814
#define NA_SE_PL_JUMP_WATER1	    0x0815
#define NA_SE_PL_JUMP_WATER2	    0x0816
#define NA_SE_PL_JUMP_MAGMA	    0x0817
#define NA_SE_PL_JUMP_GRASS	    0x0818
#define NA_SE_PL_JUMP_IRON	    0x0819
#define NA_SE_PL_JUMP_GLASS	    0x081b
#define NA_SE_PL_JUMP_LADDER	    0x081a
#define NA_SE_PL_JUMP_WOOD	    0x081b
#define NA_SE_PL_JUMP_HEAVYBOOTS    0x081d
#define NA_SE_PL_JUMP_SNOW	    0x081e
#define NA_SE_PL_JUMP_ICE	    0x081f

#define NA_SE_PL_ROLLOVER	    0x0820
#define NA_SE_PL_STAND_UP	    0x0820
#define NA_SE_PL_LAND		    0x0820
#define NA_SE_PL_LAND_GROUND	    0x0820
#define NA_SE_PL_LAND_SAND	    0x0821
#define NA_SE_PL_LAND_CONCRETE	    0x0822
#define NA_SE_PL_LAND_DIRT	    0x0823
#define NA_SE_PL_LAND_WATER0	    0x0824
#define NA_SE_PL_LAND_WATER1	    0x0825
#define NA_SE_PL_LAND_WATER2	    0x0826
#define NA_SE_PL_LAND_MAGMA	    0x0827
#define NA_SE_PL_LAND_GRASS	    0x0828
#define NA_SE_PL_LAND_IRON	    0x0829
#define NA_SE_PL_LAND_GLASS	    0x082b
#define NA_SE_PL_LAND_LADDER	    0x082a
#define NA_SE_PL_LAND_WOOD	    0x082b
#define NA_SE_PL_LAND_HEAVYBOOTS    0x082d
#define NA_SE_PL_LAND_SNOW	    0x082e
#define NA_SE_PL_LAND_ICE	    0x082f

#define NA_SE_PL_SLIPDOWN	    0x0830
#define NA_SE_PL_SIT_ON_BED	    0x0830
#define NA_SE_PL_CLIMB_CLIFF	    0x0831
#define NA_SE_PL_RIDE_ON_HORSE	    0x0831
#define NA_SE_PL_SIT_ON_HORSE	    0x0832
#define NA_SE_PL_GET_OFF_HORSE	    0x0833
#define NA_SE_PL_TAKE_OUT_SHIELD    0x0834
#define NA_SE_PL_TAKE_OUT_BOW	    0x0834
#define NA_SE_PL_TAKE_OUT_BOMB	    0x0834
#define NA_SE_PL_TAKE_OUT_BOOMERANG 0x0834
#define NA_SE_PL_TAKE_OUT_HAMMER    0x0834
#define NA_SE_PL_TAKE_OUT_HOOKSHOT  0x0834
#define NA_SE_PL_DEKUNUTS_RISE	    0x0834
#define NA_SE_PL_TAKE_OFF_MASK	    0x0834

#define NA_SE_PL_CHANGE_ARMS	    0x0835
#define NA_SE_PL_PUT_ON_MASK	    0x0835
#define NA_SE_PL_PUT_BACK_SHIELD    0x0835
#define NA_SE_PL_PUT_BACK_BOW	    0x0835
#define NA_SE_PL_PUT_BACK_BOOMERANG 0x0835
#define NA_SE_PL_PUT_BACK_HAMMER    0x0835
#define NA_SE_PL_PUT_BACK_HOOKSHOT  0x0835
#define NA_SE_PL_DEKUNUTS_SQUAT	    0x0835
#define NA_SE_PL_CATCH_BOOMERANG    0x0836
#define NA_SE_PL_DIVE_INTO_WATER    NA_SE_EV_DIVE_INTO_WATER	/* 0x0837 */
#define NA_SE_PL_STEP_INTO_WATER    NA_SE_EV_DIVE_INTO_WATER_M
#define NA_SE_PL_JUMP_OUT_WATER	    NA_SE_EV_JUMP_OUT_WATER	/* 0x0838 */
#define NA_SE_PL_SWIM		    0x0839
#define NA_SE_EV_SWIM		    0x0839
#define NA_SE_PL_THROW		    0x083a
#define NA_SE_PL_BODY_BOUND	    0x083b
#define NA_SE_PL_ROLL		    0x083c
#define NA_SE_PL_GROUND_ROLL	    0x083c
#define NA_SE_PL_SKIP		    0x083d
#define NA_SE_PL_MAGIC_MOTION_S	    0x083d
#define NA_SE_PL_JUMP_CUT	    0x083d
#define NA_SE_EN_FALL		    0x083d
#define NA_SE_PL_BODY_HIT	    0x083e
#define NA_SE_PL_ROLL_ATTACK_HIT    0x083e  /* 0x08c2 */
#define NA_SE_EV_GANON_BOUND_2	    NA_SE_PL_BODY_HIT
#define NA_SE_PL_DAMAGE		    0x083f

#define NA_SE_PL_SLIP		    0x0840
#define NA_SE_PL_SLIP_PP	    0x0840
#define NA_SE_PL_SLIP_GROUND	    0x0840
#define NA_SE_PL_SLIP_SAND	    0x0841
#define NA_SE_PL_SLIP_CONCRETE	    0x0842
#define NA_SE_PL_SLIP_DIRT	    0x0843
#define NA_SE_PL_SLIP_WATER0	    0x0844
#define NA_SE_PL_SLIP_WATER1	    0x0845
#define NA_SE_PL_SLIP_WATER2	    0x0846
#define NA_SE_PL_SLIP_MAGMA	    0x0847
#define NA_SE_PL_SLIP_GRASS	    0x0848
#define NA_SE_PL_SLIP_IRON	    0x0849
#define NA_SE_PL_SLIP_GLASS	    0x084b
#define NA_SE_PL_SLIP_LADDER	    0x084a
#define NA_SE_PL_SLIP_WOOD	    0x084b
#define NA_SE_PL_SLIP_HEAVYBOOTS    0x084d
#define NA_SE_PL_SLIP_SNOW	    0x084e
#define NA_SE_PL_SLIP_ICE	    0x084f

#define NA_SE_PL_BOUND		    0x0850
#define NA_SE_PL_BOUND_GROUND	    0x0850
#define NA_SE_PL_BOUND_SAND	    0x0851
#define NA_SE_PL_BOUND_CONCRETE	    0x0852
#define NA_SE_PL_BOUND_DIRT	    0x0853
#define NA_SE_PL_BOUND_WATER0	    0x0854
#define NA_SE_PL_BOUND_WATER1	    0x0855
#define NA_SE_PL_BOUND_WATER2	    0x0856
#define NA_SE_PL_BOUND_MAGMA	    0x0857
#define NA_SE_PL_BOUND_GRASS	    0x0858
#define NA_SE_EV_BOUND_GRASS	    0x0858
#define NA_SE_PL_BOUND_IRON	    0x0859
#define NA_SE_PL_BOUND_GLASS	    0x085b
#define NA_SE_PL_BOUND_LADDER	    0x085a
#define NA_SE_PL_BOUND_WOOD	    0x085b
#define NA_SE_PL_BOUND_HEAVYBOOTS   0x085d
#define NA_SE_PL_BOUND_SNOW	    0x085e
#define NA_SE_PL_BOUND_ICE	    0x085f

/* #define NA_SE_PL_MEATL_BOOTS_WALK   0x0860 */
/* #define NA_SE_PL_MEATL_BOOTS_JUMP   0x0861 */
/* #define NA_SE_PL_MEATL_BOOTS_LAND   0x0862 */
#define NA_SE_PL_BOW_DRAW	    0x0860
#define NA_SE_PL_FACE_UP	    0x0863
#define NA_SE_EV_FACE_UP	    NA_SE_PL_FACE_UP
#define NA_SE_PL_DIVE_BUBBLE	    0x0864
#define NA_SE_PL_MOVE_BUBBLE	    0x0865
#define NA_SE_PL_METALEFFECT_KID    0x0866
#define NA_SE_PL_METALEFFECT_ADULT  0x0867
#define NA_SE_PL_SPARK		    0x0068
#define NA_SE_PL_PULL_UP_PLANT	    0x0869
#define NA_SE_PL_PULL_UP_ROCK	    0x086a
#define NA_SE_PL_PULL_UP_GORON_MEAT 0x086a
#define NA_SE_PL_IN_BUBBLE	    0x086b
#define NA_SE_PL_PULL_UP_BIGROCK    0x086c

/* #define NA_SE_EV_OBJECT_BOUND	    0x086c  */
#define NA_SE_PL_SWORD_CHARGE	    0x086d
#define NA_SE_PL_FREEZE		    0x086e
#define NA_SE_PL_PULL_UP_POT	    0x086f
#define NA_SE_PL_KNOCK		    0x0870
#define NA_SE_PL_CALM_HIT	    0x0871
#define NA_SE_PL_BRUSH_OFF	    0x0871
#define NA_SE_PL_TROUSERS	    0x0871
#define NA_SE_EV_TOUCHWEAR	    0x0871
#define NA_SE_PL_CALM_PAT	    0x0872
#define NA_SE_PL_SUBMERGE	    0x0873
#define NA_SE_EV_SUBMERGE	    0x0873
#define NA_SE_PL_FREEZE_S	    0x0874
#define NA_SE_EN_FREEZE_S	    0x0874
#define NA_SE_PL_ICE_BROKEN	    0x0875
#define NA_SE_EV_ICE_BROKEN_L	    0x0875
#define NA_SE_PL_SLIP_ICE_LELEL	    0x0076
#define NA_SE_PL_PUT_OUT_ITEM	    0x0877
#define NA_SE_EV_PUT_OUT_ITEM	    0x0877
#define NA_SE_PL_PULL_UP_WOODBOX    0x0878
#define NA_SE_PL_MAGIC_FIRE	    0x0879
#define NA_SE_PL_MAGIC_WIND_NORMAL  0x087a
#define NA_SE_PL_MAGIC_WIND_WARP    0x087b
#define NA_SE_PL_MAGIC_SOUL_NORMAL  0x007c
#define NA_SE_PL_ARROW_CHARGE_FIRE  0x007d
#define NA_SE_PL_ARROW_CHARGE_ICE   0x007e
#define NA_SE_PL_ARROW_CHARGE_LIGHT 0x007f

#define NA_SE_PL_PULL_UP_RUTO	    0x0883

#define NA_SE_PL_CRAWL		    0x08b0
#define NA_SE_PL_CRAWL_GROUND	    0x08b0
#define NA_SE_PL_CRAWL_SAND	    0x08b1
#define NA_SE_PL_CRAWL_CONCRETE	    0x08b2
#define NA_SE_PL_CRAWL_DIRT	    0x08b3
#define NA_SE_PL_CRAWL_WATER0	    0x08b4
#define NA_SE_PL_CRAWL_WOOD	    0x08bb
#define NA_SE_PL_CRAWL_ICE	    0x08bf

#define NA_SE_PL_MAGIC_SOUL_FLASH   0x00c0
#define NA_SE_PL_ROLL_DUST	    0x00c1

#define NA_SE_PL_MAGIC_SOUL_BALL    0x00c3
#define NA_SE_PL_SPIRAL_HEAL_BEAM   0x00c4
#define NA_SE_EV_SPIRAL_HEAL_BEAM   NA_SE_PL_SPIRAL_HEAL_BEAM
#define NA_SE_PL_BOUND_NOWEAPON	    0x08c5
#define NA_SE_EV_GANON_BOUND_1	    NA_SE_PL_BOUND_NOWEAPON
#define NA_SE_PL_PLANT_GROW_UP	    0x00c6
#define NA_SE_PL_PLANT_TALLER	    0x00c7
#define NA_SE_PL_PLANT_RISING	    0x00c7
#define NA_SE_PL_MAGIC_WIND_VANISH  0x08c8
#define NA_SE_PL_HOBBERBOOTS_LV     0x00c9
#define NA_SE_PL_PLANT_MOVE	    0x00ca
#define NA_SE_EV_WALL_MOVE_SP	    0x00cb
#define NA_SE_EV_BIG_POT_MOVE_SP    0x00cb
#define NA_SE_PL_PLANT_GROW_BIG	    0x08cc
#define NA_SE_PL_TELESCOPE_MOVEMENT 0x00cd
#define NA_SE_PL_GIANT_WALK	    0x08ce
#define NA_SE_PL_CHIBI_FAIRY_HEAL   0x00cf
#define NA_SE_PL_SLIP_LEVEL	    0x00d0
#define NA_SE_PL_SLIP_PP_LEVEL	    0x00d0
#define NA_SE_PL_SLIP_GROUND_LEVEL  0x00d0
#define NA_SE_PL_SLIP_SAND_LEVEL    0x00d1
#define NA_SE_PL_SLIP_CONCRETE_LEVEL	0x00d2
#define NA_SE_PL_SLIP_DIRT_LEVEL    0x00d3
#define NA_SE_PL_SLIP_WATER0_LEVEL  0x00d4
#define NA_SE_PL_SLIP_WATER1_LEVEL  0x00d5
#define NA_SE_PL_SLIP_WATER2_LEVEL  0x00d6
#define NA_SE_PL_SLIP_MAGMA_LEVEL   0x00d7
#define NA_SE_PL_SLIP_GRASS_LEVEL   0x00d8
#define NA_SE_PL_SLIP_IRON_LEVEL    0x00d9
#define NA_SE_PL_SLIP_GLASS_LEVEL   0x00db
#define NA_SE_PL_SLIP_LADDER_LEVEL  0x00da
#define NA_SE_PL_SLIP_WOOD_LEVEL    0x00db
#define NA_SE_PL_SLIP_HEAVYBOOTS_LEVEL	0x00dd
#define NA_SE_PL_SLIP_ICE_LEVEL	    0x00df
#define NA_SE_EV_SLIP_ICE_LEVEL	    NA_SE_PL_SLIP_ICE_LEVEL

#define NA_SE_PL_DEKUNUTS_FIRE	    0x08e0
#define NA_SE_PL_GORON_BALLJUMP	    0x08e1
#define NA_SE_PL_DEKUNUTS_IN_GRD    0x08e2
#define NA_SE_PL_DEKUNUTS_OUT_GRD   0x08e3
#define NA_SE_PL_TRANSFORM	    0x08e4
#define NA_SE_PL_TRANSFORM_DEMO	    0x00e5
#define NA_SE_PL_GORON_TO_BALL	    0x08e6
#define NA_SE_PL_BALL_TO_GORON	    0x08e7
#define NA_SE_PL_GORON_RISE	    0x08e7
#define NA_SE_PL_GORON_PUNCH	    0x08e8
#define NA_SE_PL_SINK_ON_SAND	    0x00e9
#define NA_SE_PL_SINK_ON_SNOW	    0x00ea
#define NA_SE_PL_GORON_BALL_CHARGE  0x00eb
#define NA_SE_PL_ZORA_SWIM_DASH	    0x08ec
#define NA_SE_PL_ZORA_SWIM_LV	    0x00ed
#define NA_SE_PL_ZORA_SWIM_ROLL	    0x08ee
#define NA_SE_PL_GORON_SQUAT	    0x08ef

#define NA_SE_PL_GORON_ROLL	    0x0990
#define NA_SE_PL_GORON_ROLL_GROUND  0x0990
#define NA_SE_PL_GORON_ROLL_ICE	    0x099f

#define NA_SE_PL_GORON_CHG_ROLL	    0x0980
#define NA_SE_PL_GORON_CHG_ROLL_GROUND  0x0980
#define NA_SE_PL_GORON_CHG_ROLL_ICE 0x098f

#define NA_SE_EV_MARATHONMAN_LAND   0x0970
#define NA_SE_EV_MARATHONMAN_RISE   0x0960

#define NA_SE_PL_DEKUNUTS_BUD	    0x09a0
#define NA_SE_PL_DEKUNUTS_BUBLE_BREATH	0x01a1
#define NA_SE_PL_GORON_BALL_CHARGE_FAILED  0x09a2
#define NA_SE_PL_GORON_BALL_CHARGE_DASH  0x09a3
#define NA_SE_PL_FACE_CHANGE	    0x09a4
#define NA_SE_PL_FACE_UP_S	    0x09a5
#define NA_SE_PL_DEKUNUTS_STRUGGLE  0x09a6
#define NA_SE_PL_WARP_PLATE	    0x09a7
#define NA_SE_PL_WARP_PLATE_IN	    0x09a7
#define NA_SE_PL_WARP_PLATE_OUT	    0x09a8
#define NA_SE_PL_DEKUNUTS_ATTACK    0x09a9
#define NA_SE_PL_TRANSFORM_VOICE    0x09aa
#define NA_SE_PL_FACE_RETURN	    0x09ab
#define NA_SE_PL_DEKUNUTS_DROP_BOMB 0x09ac
#define NA_SE_PL_GORON_SLIP	    0x01ad
#define NA_SE_PL_ROLL_SNOW_DUST	    0x01ae
#define NA_SE_PL_ZORA_SPARK_BARRIER 0x01af

#define NA_SE_PL_DEKUNUTS_JUMP	    0x09b0
#define NA_SE_PL_DEKUNUTS_JUMP1	    0x09b0
#define NA_SE_PL_DEKUNUTS_JUMP2	    0x09b1
#define NA_SE_PL_DEKUNUTS_JUMP3     0x09b2
#define NA_SE_PL_DEKUNUTS_JUMP4	    0x09b3
#define NA_SE_PL_DEKUNUTS_JUMP5	    0x09b4
#define NA_SE_PL_DEKUNUTS_JUMP6	    0x09b5
#define NA_SE_PL_DEKUNUTS_JUMP7	    0x09b6
#define NA_SE_PL_DEKUNUTS_JUMP8	    0x09b7
#define NA_SE_PL_GORON_STOMACH_EXPLOSION    0x09b8
#define NA_SE_PL_GORON_DRINK_BOMB   0x09b9
#define NA_SE_PL_GET_UP		    0x09ba
#define NA_SE_PL_WARP_WING_OPEN	    0x09bb
#define NA_SE_PL_WARP_WING_CLOSE    0x09bc
#define NA_SE_PL_WARP_WING_ROLL	    0x09bd
#define NA_SE_PL_WARP_WING_VANISH   0x09be
#define NA_SE_PL_DEKUNUTS_MISS_FIRE 0x09bf
#define NA_SE_PL_FLYING_AIR	    0x01c0
#define NA_SE_PL_FIREWORKS	    0x09c1
/* #define NA_SE_EV_FIREWORKS_DEMO_0   NA_SE_PL_FIREWORKS */
#define NA_SE_PL_FIREWORKS_DUMMY    0x09c2
#define NA_SE_EV_FIREWORKS_DEMO_1   NA_SE_PL_FIREWORKS_DUMMY
#define NA_SE_PL_PULL_UP_SNOWBALL   0x09c3
#define NA_SE_PL_WARP_WING_ROLL_2   0x01c4  /* 00.3.13 TRIG=>LV */
#define NA_SE_PL_TRANSFORM_GIANT    0x09c5
#define NA_SE_PL_TRANSFORM_NORAML   0x09c6

#define NA_SE_EV_PUT		    0x0800
#define NA_SE_EV_BOUND		    0x0800
#define NA_SE_EV_WALK		    0x0800
#define NA_SE_EV_LAND		    0x0800
#define NA_SE_EV_WALK_GROUND	    0x0800
#define NA_SE_EV_WALK_SAND	    0x0801
#define NA_SE_EV_WALK_CONCRETE	    0x0802
#define NA_SE_EV_WALK_DIRT	    0x0803
#define NA_SE_EV_WALK_WATER0	    0x0804
#define NA_SE_EV_WALK_WATER1	    0x0805
#define NA_SE_EV_WALK_WATER2	    0x0806
#define NA_SE_EV_WALK_MAGMA	    0x0807
#define NA_SE_EV_WALK_GRASS	    0x0808
#define NA_SE_EV_LAND_GRASS	    0x0808
#define NA_SE_EV_WALK_IRON	    0x0809
#define NA_SE_EV_WALK_GLASS	    0x080b
#define NA_SE_EV_WALK_LADDER	    0x080a
#define NA_SE_EV_WALK_WOOD	    0x080b
#define NA_SE_EV_WALK_WALL	    0x080c
#define NA_SE_EV_WALK_HEAVYBOOTS    0x080d
#define NA_SE_EV_WALK_ICE	    0x080f

/*** ITEM ***/

#define NA_SE_IT_SWORD_IMPACT	    0x1800
#define NA_SE_IT_SWORD_SWING	    0x1801
#define NA_SE_IT_BOTTLE_SWING	    0x1801
#define NA_SE_IT_SWORD_PUTAWAY	    0x1802
#define NA_SE_IT_SWORD_PICKOUT	    0x1803
#define NA_SE_IT_ARROW_SHOT	    0x1804
#define NA_SE_IT_BOOMERANG_THROW    0x1805
#define NA_SE_IT_SHIELD_BOUND	    0x1806
#define NA_SE_IT_SHIELD_REFLECT_EN  0x1806
#define NA_SE_IT_REFLECTION_STONE   0x1806
#define NA_SE_IT_BOW_DRAW	    NA_SE_PL_BOW_DRAW	/* 0x1807 */
#define NA_SE_IT_SHIELD_REFLECT_SW  0x1808
#define NA_SE_IT_REFLECTION_STEEL   0x1808
#define NA_SE_IT_ARROW_STICK_HRAD   0x1809
#define NA_SE_IT_HAMMER_HIT	    0x180a
#define NA_SE_IT_HOOKSHOT_CHAIN	    0x100b
#define NA_SE_IT_SHIELD_REFLECT_MG  0x180c
#define NA_SE_IT_BOMB_IGNIT	    0x100d
#define NA_SE_IT_BOMB_EXPLOSION	    0x180e
#define NA_SE_EV_EXPLOSION_DEMO_S   0x180e
#define NA_SE_IT_BOMB_UNEXPLOSION   0x180f

#define NA_SE_IT_BOOMERANG_FLY	    0x1010
#define NA_SE_IT_SWORD_STRIKE	    0x1811
#define NA_SE_IT_HAMMER_SWING	    0x1812
#define NA_SE_EV_MEDAL_ROLLING	    0x1812
#define NA_SE_IT_SWORD_SWING_W	    0x1812
#define NA_SE_IT_HOOKSHOT_REFLECT   0x1813
#define NA_SE_IT_HOOKSHOT_STICK_CRE 0x1814
#define NA_SE_IT_ARROW_STICK_CRE    0x1814
/* #define NA_SE_IT_HOOKSHOT_STICK_OBJ 0x1815	*/
#define NA_SE_IT_ARROW_STICK_OBJ    0x1815
#define NA_SE_IT_SWORD_SLASH	    0x0000  /*0x1816 */
#define NA_SE_IT_SWORD_SLASH_HARD   0x0000  /*0x1817 */
#define NA_SE_IT_SWORD_SWING_HARD   0x1818
#define NA_SE_IT_JUMP_CUT_SWING	    0x1818
#define NA_SE_PL_MAGIC_MOTION_L	    NA_SE_IT_SWORD_SWING_HARD
/* #define NA_SE_IT_BOMB_BOUND	    0x1819  */
#define NA_SE_IT_WALL_HIT_HARD	    0x181a
#define NA_SE_IT_WALL_HIT_SOFT	    0x181b
#define NA_SE_IT_WALL_HIT_FRAGILE   0x181b
#define NA_SE_IT_STONE_HIT	    0x181c
#define NA_SE_IT_WOODSTICK_BROKEN   0x181d
#define NA_SE_IT_LASH		    0x181e
#define NA_SE_IT_SHIELD_POSTURE	    0x181f
#define NA_SE_IT_SHIELD_SWING	    0x181f

#define NA_SE_IT_SLING_SHOT	    0x1820
#define NA_SE_IT_SLING_DRAW	    0x1821
#define NA_SE_IT_SWORD_CHARGE	    0x1022
#define NA_SE_IT_ROLLING_CUT	    0x1823
#define NA_SE_IT_ROLLING_CUT_LV0    0x1823
#define NA_SE_IT_SWORD_STRIKE_HARD  0x1824
#define NA_SE_IT_SLING_REFLECT	    0x1825
#define NA_SE_IT_SHIELD_REMOVE	    0x1826
#define NA_SE_IT_HOOKSHOT_READY	    0x1827
#define NA_SE_IT_HOOKSHOT_RECEIVE   0x1828
#define NA_SE_IT_HOOKSHOT_STICK_OBJ 0x1829
#define NA_SE_IT_SWORD_REFLECT_MG   0x182a
#define NA_SE_IT_DEKU		    0x182b
#define NA_SE_IT_WALL_HIT_BUYO	    0x182c
#define NA_SE_IT_SWORD_PUTAWAY_STN  0x182d
#define NA_SE_IT_ROLLING_CUT_LV1    0x182e
#define NA_SE_IT_CHARGE_SHOT_LV1    0x182e
#define NA_SE_IT_ROLLING_CUT_LV2    0x182f
#define NA_SE_IT_CHARGE_SHOT_LV2    0x182f

#define NA_SE_IT_BOW_FLICK	    0x1830
#define NA_SE_IT_BOMBCHU_MOVE	    0x1031
#define NA_SE_IT_SHIELD_CHARGE_LV1  0x1032
#define NA_SE_IT_SHIELD_CHARGE_LV2  0x1033
#define NA_SE_IT_SHIELD_CHARGE_LV3  0x1034
#define NA_SE_IT_SLING_FLICK	    0x1835
#define NA_SE_IT_SWORD_STICK_STN    0x1836
#define NA_SE_IT_REFLECTION_WOOD    0x1837
#define NA_SE_IT_SHIELD_REFLECT_MG2 0x1838
#define NA_SE_IT_MAGIC_ARROW_SHOT   0x1839
#define NA_SE_IT_EXPLOSION_FRAME    0x183a
#define NA_SE_IT_EXPLOSION_ICE	    0x183b
#define NA_SE_EV_LIGHTNING_EXPLOSION 0x183b
#define NA_SE_IT_EXPLOSION_LIGHT    0x183c
#define NA_SE_IT_FISHING_REEL_SLOW  0x103d
#define NA_SE_IT_FISHING_REEL	    0x103d
#define NA_SE_IT_FISHING_REEL_HIGH  0x103e
#define NA_SE_IT_PULL_FISHING_ROD   0x183f



#define NA_SE_IT_WALL_HIT	    0x1830

#define NA_SE_IT_WALL_HIT	    0x1830
#define NA_SE_IT_WALL_HIT_GROUND    0x1830
#define NA_SE_IT_WALL_HIT_SAND	    0x1831
#define NA_SE_IT_WALL_HIT_CONCRETE  0x1832
#define NA_SE_IT_WALL_HIT_DIRT	    0x1833
#define NA_SE_IT_WALL_HIT_WATER0    0x1834
#define NA_SE_IT_WALL_HIT_WATER1    0x1835
#define NA_SE_IT_WALL_HIT_WATER2    0x1836
#define NA_SE_IT_WALL_HIT_MAGMA	    0x1837
#define NA_SE_IT_WALL_HIT_GRASS	    0x1838
#define NA_SE_IT_WALL_HIT_GLASS	    0x1839
#define NA_SE_IT_WALL_HIT_LADDER    0x183a
#define NA_SE_IT_WALL_HIT_WOOD	    0x183b


#define NA_SE_IT_DM_FLYING_GOD_PASS 0x1840
#define NA_SE_IT_DM_FLYING_GOD_DASH 0x1841
#define NA_SE_IT_DM_RING_EXPLOSION  0x1842
#define NA_SE_IT_DM_RING_GATHER	    0x1843
#define NA_SE_IT_INGO_HORSE_NEIGH   0x1844
#define NA_SE_IT_EARTHQUAKE	    0x1845
#define NA_SE_IT_ERUPTION	    0x1845

#define NA_SE_EV_FLYING_GOD_PASS    NA_SE_IT_DM_FLYING_GOD_PASS
#define NA_SE_EV_FLYING_GOD_DASH    NA_SE_IT_DM_FLYING_GOD_DASH
#define NA_SE_EV_RING_EXPLOSION	    NA_SE_IT_DM_RING_EXPLOSION
#define NA_SE_EV_GOD_UNION	    NA_SE_IT_DM_RING_EXPLOSION
#define NA_SE_EV_ENERGY_EXPLSION    NA_SE_IT_DM_RING_EXPLOSION
#define NA_SE_EV_RING_GATHER	    NA_SE_IT_DM_RING_GATHER
#define NA_SE_EV_INGO_HORSE_NEIGH   NA_SE_IT_INGO_HORSE_NEIGH
#define NA_SE_EV_EARTHQUAKE_S	    NA_SE_IT_EARTHQUAKE
#define NA_SE_EV_ERUPTION	    NA_SE_IT_ERUPTION
#define NA_SE_EV_IKANA_SOUL_DASH    NA_SE_IT_DM_FLYING_GOD_DASH

#define NA_SE_IT_KAKASHI_JUMP	    0x1847
#define NA_SE_EV_KAKASHI_JUMP	    NA_SE_IT_KAKASHI_JUMP
#define NA_SE_IT_FLAME		    0x1048
#define NA_SE_IT_SHIELD_BEAM	    0x1049
#define NA_SE_IT_FISHING_HIT	    0x184a
#define NA_SE_IT_GOODS_APPEAR	    0x184b
#define NA_SE_EV_GOODS_APPEAR	    NA_SE_IT_GOODS_APPEAR
#define NA_SE_IT_MAJIN_SWORD_BROKEN 0x184c
#define NA_SE_IT_HAND_CLAP	    0x184d
#define NA_SE_EV_HAND_CLAP	    NA_SE_IT_HAND_CLAP
#define NA_SE_IT_MASTER_SWORD_SWING 0x184e
#define NA_SE_IT_GORON_BALLFANG	    0x184f

#define NA_SE_IT_DEKUNUTS_FLOWER_OPEN	0x1850
#define NA_SE_IT_DEKUNUTS_FLOWER_ROLL	0x1851
#define NA_SE_IT_DEKUNUTS_FLOWER_CLOSE	0x1852
#define NA_SE_IT_DEKUNUTS_BUBLE_BROKEN	0x1853
#define NA_SE_IT_DEKUNUTS_BUBLE_VANISH	0x1854
#define NA_SE_IT_SET_TRANSFORM_MASK 0x1856
#define NA_SE_IT_GORON_PUNCH_SWING  0x1857
#define NA_SE_IT_TRANSFORM_MASK_BROKEN	0x1858
#define NA_SE_IT_ZORA_KICK_SWING    0x1857
#define NA_SE_IT_DEKUNUTS_BUBLE_SHOT_LEVEL  0x105a
#define NA_SE_IT_BIG_BOMB_IGNIT	    0x105b
#define NA_SE_IT_BIG_BOMB_EXPLOSION 0x185c
#define NA_SE_IT_REFLECTION_SNOW    0x185d
#define NA_SE_IT_GORON_ROLLING_REFLECTION   0x185e
#define NA_SE_IT_MASK_BOUND_0   0x185f
#define NA_SE_IT_MASK_BOUND_1   0x1860
#define NA_SE_IT_MASK_BOUND_SAND    0x1861
#define NA_SE_IT_REFLECTION_WATER    0x1862
#define NA_SE_IT_KYOJIN_BEARING   0x1063


#define NA_SE_IT_DEKUNUTS_DROP_BOMB NA_SE_PL_DEKUNUTS_DROP_BOMB
#define NA_SE_PL_GORON_ROLLING_REFLECTION   NA_SE_IT_GORON_ROLLING_REFLECTION

#define NA_SE_IT_OCARINA_MELO_0	    0x1050
#define NA_SE_IT_OCARINA_MELO_1	    0x1051



/*** ENVIRONMENT ***/

#define NA_SE_EV_AUTO_DOOR_OPEN	    0x2800
#define NA_SE_EV_DOOR_OPEN	    0x5802
#define NA_SE_EV_DOOR_CLOSE	    0x2801
#define NA_SE_EV_EXPLOSION	    0x2802
#define NA_SE_EV_FLOOR_EXPLOSION    0x2802
#define NA_SE_EV_VOLCNO_ROCK_BROKEN 0x2802
#define NA_SE_EV_HORSE_WALK	    0x2803
#define NA_SE_EV_HORSE_RUN	    0x2804
#define NA_SE_EV_HORSE_NEIGH	    0x2805
#define NA_SE_EV_RIVER_STREAM	    0x2006
#define NA_SE_EV_WATER_WALL_BIG	    0x2007
#define NA_SE_EV_OUT_OF_WATER	    0x2808
#define NA_SE_EV_OUT_OF_WATER_M	    0x2808
#define NA_SE_EV_DIVE_WATER	    0x2809
#define NA_SE_EV_ROCK_SLIDE	    0x200a
#define NA_SE_EV_STATUE_SLIDE	    0x200a
#define NA_SE_EV_MAGMA_LEVEL	    0x200b
#define NA_SE_EV_MAGMA_LEVEL_S	    0x200b
#define NA_SE_EV_BRIDGE_OPEN	    0x200c
#define NA_SE_EV_CHAINLIFT_DOWN	    0x200c
#define NA_SE_EV_BRIDGE_CLOSE	    0x200d
#define NA_SE_EV_CHINETRAP_UP	    0x200d
#define NA_SE_EV_BRIDGE_OPEN_STOP   0x280e
#define NA_SE_EV_BRIDGE_CLOSE_STOP  0x280f
#define NA_SE_EV_WALL_BROKEN	    0x2810
#define NA_SE_EV_ROCK_EXPLOSION	    0x2810
#define NA_SE_EV_BIG_ROCK_BROKEN    0x2810
#define NA_SE_EV_FLOOR_BROKEN	    0x2810
#define NA_SE_EV_CHICKEN_CRY_N	    0x2811
#define NA_SE_EV_CHICKEN_CRY_A	    0x2812
#define NA_SE_EV_CHICKEN_CRY_M	    0x2813
#define NA_SE_EV_SLIDE_DOOR_OPEN    0x2814
#define NA_SE_EV_ICE_BLOCK_SLIDE    0x2814
#define NA_SE_EV_FOOT_SWITCH	    0x2815
#define NA_SE_EV_HORSE_GROAN	    0x2816
#define NA_SE_EV_BOMB_DROP_WATER    0x2817
#define NA_SE_EV_RUPY_DROP_WATER    0x2817
#define NA_SE_EV_DROP_WATER	    0x2817
#define NA_SE_EV_DIVE_INTO_WATER_M  0x2817
#define NA_SE_EV_WATER_BOUND	    0x2817
#define NA_SE_EV_FROG_INTO_WATER    0x2817
#define NA_SE_EV_MONKEY_INTO_WATER  0x2817
#define NA_SE_EV_HORSE_JUMP	    0x2818
#define NA_SE_EV_KID_HORSE_JUMP	    0x2818
#define NA_SE_EV_HORSE_LAND	    0x2819
#define NA_SE_EV_KID_HORSE_LAND	    0x2819
#define NA_SE_EV_HORSE_SLIP	    0x281a
#define NA_SE_EV_KID_HORSE_SLIP	    0x281a
#define NA_SE_EV_NAVY_DASH	    0x281b
#define NA_SE_EV_NAVY_DASH_L	    0x281b
#define NA_SE_EV_WHITE_FAIRY_DASH   0x281b
#define NA_SE_EV_WHITE_FAIRY_DASH_F 0x281b
#define NA_SE_EV_SLIDE_DOOR_CLOSE   0x281c
#define NA_SE_EV_BIGWALL_BOUND	    0x281d
#define NA_SE_EV_STONE_BOUND	    0x281d
#define NA_SE_EV_STONE_STATUE_OPEN  0x201e
#define NA_SE_EV_STONEDOOR_MOVE	    0x201e
#define NA_SE_EV_PILLAR_DOWN_FAST   0x201e
#define NA_SE_EV_TBOX_UNLOCK	    0x281f
#define NA_SE_EV_TBOX_OPEN	    0x2820
#define NA_SE_SY_TIMER		    0x2021
#define NA_SE_EV_FLAME_IGNITION     0x2822
#define NA_SE_EN_FLAME_IGNITION     0x2822
#define NA_SE_EV_SPEAR_HIT	    0x2823
#define NA_SE_EV_ELEVATOR_MOVE	    0x2024
#define NA_SE_EV_OBJECT_MOVE	    0x2024
#define NA_SE_EV_WALL_MOVE	    0x2024
#define NA_SE_EV_BIG_POT_MOVE	    0x2024
#define NA_SE_EV_PILLAR_MOVE	    0x2024

#define NA_SE_EV_WARP_HOLE	    0x2025
#define NA_SE_EV_LINK_WARP	    0x2826
#define NA_SE_EV_LINK_WARP_LV	    0x2026
#define NA_SE_EV_PILLAR_SINK	    0x2027
#define NA_SE_EV_WATER_WALL	    0x2028
#define NA_SE_EV_RIVER_STREAM_S	    0x2029
#define NA_SE_EV_RIVER_STREAM_F     0x202a
#define NA_SE_EV_KID_HORSE_LAND2    0x282b
#define NA_SE_EV_HORSE_LAND2	    0x282b
#define NA_SE_EV_KID_HORSE_SANDDUST 0x282c
#define NA_SE_EV_HORSE_SANDDUST	    0x282c
#define NA_SE_EV_LIGHTNING	    0x282e

#define NA_SE_EV_BOMB_BOUND	    0x282f
#define NA_SE_IT_BOMB_BOUND	    0x282f
#define NA_SE_EV_OBJECT_BOUND	    0x282f

#define NA_SE_EV_WATERDROP	    0x2830  /*0x2030*/
#define NA_SE_EV_TORCH		    0x2031
#define NA_SE_EV_MAGMA_LEVEL_M	    0x2032
#define NA_SE_EV_FIRE_PILLAR	    0x2033
#define NA_SE_EV_STONE_CHARGE	    0x2033
#define NA_SE_EV_FIRE_PLATE	    0x2034

#define NA_SE_EV_BLOCK_BOUND	    0x2835
#define NA_SE_EV_STATUE_BOUND	    0x2835
#define NA_SE_EV_BLOCK_CLING	    0x2835
#define NA_SE_EV_ICE_BLOCK_BOUND    0x2835
#define NA_SE_EV_METALDOOR_SLIDE    0x2036
#define NA_SE_EV_METALDOOR_STOP	    0x2837
#define NA_SE_EV_METALDOOR_BOUND    0x2837
#define NA_SE_EV_BLOCK_SHAKE	    0x2838
#define NA_SE_EV_BOX_BREAK	    0x2839
#define NA_SE_EV_OBJECT_BROKEN	    0x2839
#define NA_SE_EV_WOOD_LAUNCH	    0x2839
#define NA_SE_EV_HAMMER_SWITCH	    0x283a
#define NA_SE_EV_MAGMA_LEVEL_L	    0x203b
#define NA_SE_EV_SPEAR_FENCE	    0x283c
#define NA_SE_EV_WATERDROP_GRD	    0x283d
#define NA_SE_EV_GANON_HORSE_NEIGH  0x283d
#define NA_SE_EV_EXPLSION_LONG	    0x283e
#define NA_SE_EV_GANON_HORSE_GROAN  0x283e
#define NA_SE_EV_WATER_WALL_BIG_SILENT	    0x203f
#define NA_SE_EV_FANTOM_WARP_S	    0x283f
#define NA_SE_EV_FANTOM_WARP_L	    0x2040
#define NA_SE_EV_DESERT_WARPHOLE    0x2040
#define NA_SE_EV_FOUNTAIN	    0x2041
#define NA_SE_EV_KID_HORSE_WALK	    0x2842
#define NA_SE_EV_KID_HORSE_RUN	    0x2843
#define NA_SE_EV_KID_HORSE_NEIGH    0x2844
#define NA_SE_EV_KID_HORSE_GROAN    0x2845
#define NA_SE_EV_WHITE_OUT	    0x2846
#define NA_SE_EV_S_STONE_FLASH	    0x2846
#define NA_SE_EV_LIGHT_GATHER	    0x2047
#define NA_SE_EV_GOD_LIGHTBALL_1    0x2047
#define NA_SE_EV_TREE_CUT	    0x2848
#define NA_SE_EV_VOLCANO	    0x2049
#define NA_SE_EV_GUILLOTINE_UP	    0x284a
#define NA_SE_EV_POSTMAN_WALK	    0x284a
/* #define NA_SE_EV_SPINE_TRAP_MOVE    0x284a	*/
#define NA_SE_EV_GUILLOTINE_BOUND   0x284b
#define NA_SE_EV_SPINE_TRAP_BOUND   0x284b
#define NA_SE_EV_POSTMACHINE_HIT_OPEN	0x284b
#define NA_SE_EV_ROLLCUTTER_MOTOR   0x204c
#define NA_SE_EV_POSTMACHINE_OPEN   0x284c
#define NA_SE_EV_CHINETRAP_DOWN	    0x204d
#define NA_SE_EV_PLANT_BROKEN	    0x284e
#define NA_SE_EV_STONE_SWITCH_ON    0x284f
#define NA_SE_EV_SHIP_BELL	    0x204f
#define NA_SE_EV_FLUTTER_FLAG	    0x2050
#define NA_SE_EV_TRAP_BOUND	    0x2851
#define NA_SE_EV_ROCK_BROKEN	    0x2852
#define NA_SE_EV_ROCK_BOUND	    0x2852
#define NA_SE_EV_FANTOM_WARP_S2	    0x2853
#define NA_SE_EV_FANTOM_WARP_L2	    0x2054  /* NOT USED */
#define NA_SE_EV_COFFIN_CAP_OPEN    0x2855
#define NA_SE_EV_COFFIN_CAP_BOUND   0x2856
#define NA_SE_EV_TRE_BOX_BOUND	    0x2856
#define NA_SE_EV_BIG_BOMB_BOUND	    0x2856
#define NA_SE_EV_WIND_TRAP	    0x2057
#define NA_SE_EV_TRAP_OBJ_SLIDE	    0x2058
#define NA_SE_EV_LADDER_CLATTER	    0x2058
#define NA_SE_EV_METALDOOR_OPEN	    0x2859
#define NA_SE_EV_METALDOOR_CLOSE    0x285a
#define NA_SE_EV_BURN_OUT	    0x205b
#define NA_SE_EV_FIREBALL	    0x205b
#define NA_SE_EV_BLOCKSINK	    0x205c
#define NA_SE_EV_SHIPDOWN	    0x205c
#define NA_SE_EV_PLATE_SWING	    0x205c
#define NA_SE_EV_CROWD		    0x205d
#define NA_SE_EV_WATER_LEVEL_DOWN   0x205e
#define NA_SE_EV_WATER_LEVEL_UP     0x205e
#define NA_SE_EV_NAVY_VANISH	    0x285f
#define NA_SE_EV_BELL_VANISH	    0x285f
#define NA_SE_EV_STONE_SWITCH_OFF   0x2860
#define NA_SE_EV_WEB_VIBRATION	    0x2861
#define NA_SE_EV_WEB_BROKEN	    0x2862
#define NA_SE_EV_ICE_STAND_APPEAR   0x2862
#define NA_SE_EV_ROLL_STAND	    0x2063
#define NA_SE_EV_SEESAW_WATER_BOUND 0x2864
#define NA_SE_EV_BUYODOOR_OPEN	    0x2864
#define NA_SE_EV_SECOM_CONVEYOR	    0x2065
#define NA_SE_EV_BUYODOOR_CLOSE	    0x2865
#define NA_SE_EV_WOODDOOR_OPEN	    0x2866
#define NA_SE_EV_METALGATE_OPEN	    0x2067
#define NA_SE_IT_SCOOP_UP_WATER	    0x2868
#define NA_SE_EV_FISH_LEAP	    0x2869
/*#define NA_SE_EV_TARON_SLEEP	    0x286a  */
/*#define NA_SE_EV_TARON_SURPRISE	    0x286b */
#define NA_SE_EV_KAKASHI_SWING	    0x286a
#define NA_SE_EV_KAKASHI_ROLL	    0x286b
#define NA_SE_EV_BOTTLE_CAP_OPEN    0x286c
#define NA_SE_EV_G_STONE_CRUSH	    0x286d
#define NA_SE_EV_JABJAB_BREATHE	    0x206d  /* NOT USED*/
#define NA_SE_EV_KAKASH_LONGI_ROLL  0x286e
#define NA_SE_EV_SPIRIT_STONE	    0x206e  /* NOT USED*/
#define NA_SE_EV_TRIFORCE_FLASH	    0x286f
#define NA_SE_EV_SUN_MARK_FLASH	    0x286f
#define NA_SE_EV_SWORD_SPARK	    0x286f
#define NA_SE_EV_FALL_DOWN_DIRT	    0x2870
#define NA_SE_EV_SEESAW_BOUND	    0x2871
#define NA_SE_EV_NAVY_FLY	    0x2071 /* NOT USED*/
#define NA_SE_EV_NAVY_CRASH	    0x2072
#define NA_SE_EV_FAIRY_ATTACK	    0x2872
/* #define NA_SE_EV_NABALL_CRY	    0x2873  */
#define NA_SE_EV_WOOD_HIT	    0x2873
#define NA_SE_EV_SCOOPUP_WATER	    0x2074
#define NA_SE_EV_DROP_FALL	    0x2075
#define NA_SE_EV_WOOD_GEAR	    0x2076
#define NA_SE_EV_TREE_SWING	    0x2877
#define NA_SE_EV_AUTO_DOOR_CLOSE    0x2878
#define NA_SE_EV_HORSE_RUN_LEVEL    0x2078
#define NA_SE_EV_NAVY_FLY_REBIRTH   0x2879
#define NA_SE_EV_ELEVATOR_MOVE2	    0x2079
#define NA_SE_EV_ELEVATOR_STOP	    0x287a
#define NA_SE_EV_CHAINLIFT_STOP	    0x287a
#define NA_SE_EV_TRE_BOX_APPEAR	    0x287b
#define NA_SE_EV_CHAIN_KEY_UNLOCK   0x287c
#define NA_SE_EV_SPINE_TRAP_MOVE    0x287d
#define NA_SE_EV_HEALING	    0x207e
#define NA_SE_EV_GREAT_FAIRY_APPEAR 0x287f
#define NA_SE_EV_GREAT_FAIRY_VANISH 0x2880
#define NA_SE_EV_RED_EYE	    0x2881
#define NA_SE_EV_STAND_APPEAR	    0x2881
#define NA_SE_EV_ROLL_STAND_2	    0x2082
#define NA_SE_EV_LIFT_MOTOR	    0x2082
#define NA_SE_EV_STAND_SINK	    0x2082
#define NA_SE_EV_WALL_SLIDE	    0x2083
#define NA_SE_EV_TRE_BOX_FLASH	    0x2884
#define NA_SE_EV_SHOP_TOWER_CLOSE   0x2085
#define NA_SE_EV_WINDMILL_LEVEL	    0x2085
#define NA_SE_EV_CLOCK_TOWER_INSIDE_LEVEL   0x2085
#define NA_SE_EV_GOTO_HEAVEN	    0x2086
#define NA_SE_EV_POT_BROKEN	    0x2887
#define NA_SE_PL_PUT_DOWN_POT	    0x2888
#define NA_SE_EV_DIVE_INTO_WATER    0x2889
#define NA_SE_EV_DIVE_INTO_WATER_H  0x2889
#define NA_SE_EV_JUMP_OUT_WATER	    0x288a
#define NA_SE_EV_OUT_OF_WATER_H	    0x288a
#define NA_SE_EV_ICE_PIECE	    0x288b
#define NA_SE_EV_GOD_FLYING	    0x208b
#define NA_SE_EV_TRIFORCE	    0x208c
#define NA_SE_EV_AURORA		    0x208d
#define NA_SE_EV_CHIBI_FAIRY_SAVED  0x288e
#define NA_SE_EV_BUYOSTAND_RISING   0x208f
#define NA_SE_EV_BUYOSTAND_FALL	    0x2090
#define NA_SE_EV_BUYOFLOOR_FALL	    0x2090
#define NA_SE_EV_MILK_POT_BROKEN    0x2891
#define NA_SE_EV_BUYOSHUTTER_OPEN   0x2891  /* NOT USED*/
#define NA_SE_EV_CHAIR_ROLL	    0x2892
#define NA_SE_EV_BUYOSHUTTER_CLOSE  0x2892  /* NOT USED*/
#define NA_SE_EV_STONEDOOR_STOP	    0x2893
#define NA_SE_EV_STONEROLLDOOR_STOP 0x2893
#define NA_SE_EV_WALL_STOP	    0x2893
#define NA_SE_EV_ICE_PILLAR_STOP    0x2893
#define NA_SE_EV_PLATE_ELEVATOR_STOP	0x2893 
#define NA_SE_EV_S_STONE_REVIVAL    0x2894
#define NA_SE_EV_WATER_TANK	    0x2095
#define NA_SE_EV_MEDAL_APPEAR_S	    0x2095
#define NA_SE_EV_HUMAN_BOUND	    0x2896
#define NA_SE_EV_GORON_MEAT_BOUND   0x2896
#define NA_SE_EV_BOMBERS_BOUND	    0x2896
#define NA_SE_EV_TOILET_WATER	    0x2897
#define NA_SE_EV_MEDAL_APPEAR_L	    0x2097  /* NOT USED*/
#define NA_SE_EV_EARTHQUAKE	    0x2098
#define NA_SE_EV_EARTHQUAKE_INDOOR  0x2098
#define NA_SE_EV_BREAKDOWN	    0x2098
#define NA_SE_EV_SWEEP		    0x2899
#define NA_SE_EV_SHUT_BY_CRYSTAL    0x2899  /* NOT USED*/
#define NA_SE_EV_GOD_LIGHTBALL_2    0x209a
#define NA_SE_EV_ZELDA_LIGHTBALL    0x209a

#define NA_SE_EV_RUN_AROUND	    0x289b

#define NA_SE_EV_CONSENTRATION	    0x289c
#define NA_SE_EV_ERUPTION_CLOUD	    0x209c

#define NA_SE_EV_TIMETRIP_LIGHT	    0x209d
#define NA_SE_EV_ZELDA_BEAM	    0x209d

#define NA_SE_EV_DOOR_BELL	    0x289e
#define NA_SE_EV_BUYOSTAND_STOP_A   0x289e  /* NOT USED*/
#define NA_SE_EV_BUYOSTAND_STOP_U   0x289f
#define NA_SE_EV_BUYOFLOOR_STOP	    0x289f  /* NOT USED*/
#define NA_SE_EV_BOUND_ON_MAGMA	    0x289f
#define NA_SE_EV_OBJECT_FALL	    0x28a0
#define NA_SE_EV_HONEYCOMB_FALL	    0x20a0
#define NA_SE_EV_CHINCLE_FALL	    0x20a0
#define NA_SE_EV_BEAVER_FALL	    0x20a0
#define NA_SE_EV_JUMP_CONC	    0x28a1
#define NA_SE_EV_ICE_MELT	    0x28a2
#define NA_SE_EV_ICE_WALL_MELT	    0x28a2
#define NA_SE_EV_FIRE_PILLAR_S	    0x20a3
#define NA_SE_EV_BLOCK_RISING	    0x28a4
#define NA_SE_EV_NABALL_VANISH	    0x28a5
#define NA_SE_EV_CHINCLE_SPELL_EFFECT	0x28a5
#define NA_SE_EV_SARIA_MELODY	    0x20a6
#define NA_SE_EV_LINK_WARP_IN	    0x28a6
#define NA_SE_EV_LINK_WARP_OUT	    0x28a7
#define NA_SE_EV_LINK_WARP_OUT_LV   0x20a7
#define NA_SE_EV_FROL_MAGIC	    0x28a7
#define NA_SE_EV_FIATY_HEAL	    0x20a8
#define NA_SE_EV_CHAIN_KEY_UNLOCK_B 0x28a9
#define NA_SE_EV_WOODBOX_BREAK	    0x28aa
#define NA_SE_EV_BARREL_BREAK	    0x28aa
#define NA_SE_EV_PUT_DOWN_WOODBOX   0x28ab
#define NA_SE_EV_BIG_BOMB_REFLECT   0x28ab
#define NA_SE_EV_LAND_DIRT	    0x28ac
#define NA_SE_EV_FLOOR_ROLLING	    0x20ad
#define NA_SE_EV_DOG_CRY_EVENING    0x28ae
#define NA_SE_EV_JABJAB_HICCUP	    0x28af
#define NA_SE_EV_NALE_MAGIC	    0x28b0
#define NA_SE_EV_STICK_SWING	    0x28b0
#define NA_SE_EV_FROG_JUMP	    0x28b1
#define NA_SE_EV_ICE_FREEZE	    0x20b2
#define NA_SE_EN_TWINROBA_GND_FREEZE	NA_SE_EV_ICE_FREEZE
#define NA_SE_EN_WIZ_GND_FREEZE	    NA_SE_EV_ICE_FREEZE
#define NA_SE_EV_BURNING	    0x20b3
#define NA_SE_EV_FLAME_WALL	    0x20b3
#define NA_SE_EV_WOODPLATE_BOUND    0x28b4
#define NA_SE_EV_WOODPLATE_OFF	    0x28b4
#define NA_SE_EV_MOON_CRY	    0x28b5
#define NA_SE_EV_GORON_WATER_DROP   0x28b5  /* NOT USED */
#define NA_SE_EV_JABJAB_GROAN	    0x28b6
#define NA_SE_EV_WAVE_S		    0x20b7
#define NA_SE_EV_BIGBALL_ROLL	    0x20b8
#define NA_SE_EV_GORON_ROLL	    0x20b8
#define NA_SE_EV_ELEVATOR_MOVE3	    0x20b9
#define NA_SE_EV_DIAMOND_SWITCH	    0x28ba
#define NA_SE_EV_FLAME_OF_FIRE	    0x20bb
#define NA_SE_EV_FISH_GROW_UP	    0x28bc
#define NA_SE_EV_RAINBOW_SHOWER	    0x20bc
#define NA_SE_EV_FLYING_AIR	    0x20bd
#define NA_SE_EV_PASS_AIR	    0x28be
#define NA_SE_EV_COME_UP_DEKU_JR    0x28bf
#define NA_SE_EV_COME_UP_KAKASHI    0x28bf
#define NA_SE_EV_SAND_STORM	    0x20c0
#define NA_SE_EV_BOILED_WATER_S	    0x20c1 
#define NA_SE_EV_TRIFORCE_MARK	    0x28c1  /* NOT USED*/
#define NA_SE_EV_GRAVE_EXPLOSION    0x28c2
#define NA_SE_EV_STAND_BROKEN	    0x28c2
#define NA_SE_EV_EXPLOSION_DEMO_L   0x28c2
#define NA_SE_EV_LURE_MOVE_W	    0x28c3
#define NA_SE_EV_LURE_MOVE	    0x28c3
#define NA_SE_EV_LURE_MOVE_S	    0x28c3
#define NA_SE_EV_POT_MOVE_START	    0x28c4
#define NA_SE_EV_DIVE_INTO_WATER_L  0x28c5
#define NA_SE_EV_FISH_DROP_WATER    0x28c5
#define NA_SE_EV_FROG_OUT_WATER	    0x28c5
#define NA_SE_EV_OUT_OF_WATER_L	    0x28c6
#define NA_SE_EV_BOILED_WATER_L	    0x20c7 
#define NA_SE_EV_GANON_MANTLE	    0x28c7  /* NOT USED*/ 
#define NA_SE_EV_DIG_UP		    0x28c8
#define NA_SE_EV_WOOD_BOUND	    0x28c9
#define NA_SE_EV_WATER_BUBBLE	    0x20ca
#define NA_SE_EV_ICE_BROKEN	    0x28cb
#define NA_SE_EV_ICE_BROKEN_S	    0x28cb
#define NA_SE_EV_FROG_GROW_UP	    0x28cc

#define NA_SE_EV_WATER_CONVECTION   0x20cd
#define NA_SE_EV_GROUND_GATE_OPEN   0x28ce
#define NA_SE_EV_FACE_BREAKDOWN	    0x28cf

#define NA_SE_EV_TOILET_HAND_APPEAR 0x28d0
#define NA_SE_EV_FACE_EXPLOSION	    0x28d0  /* NOT USED*/ 
#define NA_SE_EV_TOILET_HAND_VANISH 0x28d1
#define NA_SE_EV_FACE_CRUMBLE_SLOW  0x20d1  /* NOT USED*/ 

#define NA_SE_EV_ROUND_TRAP_MOVE    0x28d2
#define NA_SE_EV_HIT_SOUND	    0x28d3
#define NA_SE_EV_ICE_SWING	    0x28d4
#define NA_SE_EV_DOWN_TO_GROUND	    0x20d5
#define NA_SE_EV_BIG_TORTOISE_SWIM  0x28d6
#define NA_SE_EV_KENJA_ENVIROMENT_0 0x20d6  /* NOT USED*/ 
#define NA_SE_EV_TORTOISE_WAKE_UP   0x28d7
#define NA_SE_EV_KENJA_ENVIROMENT_1 0x20d7  /* NOT USED*/ 
#define NA_SE_EV_SMALL_DOG_BARK	    0x28d8
#define NA_SE_EV_RUPY_FALL	    0x28d9
#define NA_SE_EV_ZELDA_POWER	    0x28d9  /* NOT USED*/ 
#define NA_SE_EV_RAIN		    0x20da
#define NA_SE_EV_IRON_DOOR_OPEN	    0x28db
#define NA_SE_EV_IRON_DOOR_CLOSE    0x28dc
#define NA_SE_EV_WHIRLPOOL	    0x20dd
#define NA_SE_EV_BIG_TORTOISE_ROLL  0x28de
#define NA_SE_EV_TOWER_PARTS_BROKEN 0x20de  /* NOT USED*/ 
#define NA_SE_EV_COW_CRY	    0x28df
#define NA_SE_EV_METAL_BOX_BOUND    0x28e0
#define NA_SE_EV_ELECTRIC_EXPLOSION 0x28e1
#define NA_SE_EV_HEAVY_THROW	    0x28e2
#define NA_SE_PL_HEAVY_THROW	    NA_SE_EV_HEAVY_THROW
#define NA_SE_EV_FROG_CRY_0	    0x28e3
#define NA_SE_EV_FROG_CRY_1	    0x28e4
#define NA_SE_EV_COW_CRY_LV	    0x20e5
#define NA_SE_EV_RONRON_DOOR_CLOSE  0x28e6
#define NA_SE_EV_BUTTERFRY_TO_FAIRY 0x28e7
#define NA_SE_EV_FAIRY_APPEAR	    0x28e7
#define NA_SE_EV_FIVE_COUNT_LUPY    0x28e8
#define NA_SE_EV_STONE_GROW_UP	    0x28e9
#define NA_SE_EV_STONE_LAUNCH	    0x20ea
#define NA_SE_EV_STONE_ROLLING	    0x28eb
#define NA_SE_EV_TOGE_STICK_ROLLING 0x20ec
#define NA_SE_EV_TOWER_ENERGY	    0x20ed
#define NA_SE_EV_TOWER_BARRIER	    0x20ee
#define NA_SE_EV_MOON_LIGHT_PILLAR  0x20ee
#define NA_SE_EV_CHIBI_WALK	    0x28ef
#define NA_SE_EV_CHIBI_LAND	    0x28ef
#define NA_SE_EV_MONKEY_WALK	    0x28ef
#define NA_SE_EV_MONKEY_LAND	    0x28ef
#define NA_SE_EV_KNIGHfuT_WALK	    0x28f0
#define NA_SE_EV_PILLAR_MOVE_STOP   0x28f1
#define NA_SE_EV_WAVE		    0x20f2
#define NA_SE_EV_BIGBELL	    0x28f3
#define NA_SE_EV_NUTS_BROKEN	    0x28f4
#define NA_SE_EV_SNOWBALL_BROKEN    0x28f5
#define NA_SE_EV_BIGBALL_BROKEN	    0x28f5
#define NA_SE_EV_SMALLBALL_ROLL	    0x20f6
#define NA_SE_EV_FLOWERPETAL_MOVE   0x20f7
#define NA_SE_EV_FLOWERPETAL_STOP   0x28f8
#define NA_SE_EV_FLOWER_ROLLING	    0x20f9
#define NA_SE_EV_GLASSBROKEN_IMPACT 0x28fa
#define NA_SE_EV_ICE_BLOCK_BROKEN   0x28fa
#define NA_SE_EV_GLASSBROKEN_BOUND  0x28fb
#define NA_SE_EV_BIGBALL_ROLL_SR    0x20fc
#define NA_SE_EV_SMALL_SNOWBALL_BROKEN   0x28fd
#define NA_SE_EV_PULL_UP_STATUE	    0x28fd  /* NOT USED*/ 
#define NA_SE_EV_STATUE_VANISH	    0x28fe  /* NOT USED*/ 
#define NA_SE_EV_BIGBALL_BOUND	    0x28ff /* 0x2835 */
#define NA_SE_EV_MONKEY_VO_WALK	    0x2900 
#define NA_SE_EV_MONKEY_VO_JOY	    0x2901 
#define NA_SE_EV_WALK_WATER	    0x2902 
#define NA_SE_EV_MONKEY_WALK_WATER  0x2902 
#define NA_SE_EV_PLATE_LIFT_LEVEL   0x2103 
#define NA_SE_EV_PLATE_ELEVATOR_MOVE   0x2103 
#define NA_SE_EV_DANPEI_LIFT_LEVEL   0x2103 
#define NA_SE_EV_BIGBALL_ROLL_2	    0x2104
#define NA_SE_EV_BIGBALL_ROLL_SR_2  0x2105
#define NA_SE_EV_BIGBALL_ROLL_3	    0x2106
#define NA_SE_EV_BIGBALL_ROLL_SR_3  0x2107
#define NA_SE_EV_BEAVER_SWIM_MOTOR  0x2108
#define NA_SE_EV_BEAVER_SWIM_HAND   0x2909
#define NA_SE_EV_SMALL_DOG_CRY	    0x290a
#define NA_SE_EV_SMALL_DOG_GROAN    0x290b
#define NA_SE_EV_SMALL_DOG_ATK_BARK 0x290c
#define NA_SE_EV_ICE_PILLAR_RISING  0x210d
#define NA_SE_EV_BIGWALL_RISING	    0x210d
#define NA_SE_EV_ICE_PILLAR_RISING_TRG  0x290d	/*hikino*/
#define NA_SE_EV_ICE_PILLAR_FALL    0x210e
#define NA_SE_EV_BIGWALL_FALL	    0x210e
#define NA_SE_EV_GORON_CHEER	    0x210f
#define NA_SE_EV_SMALL_DOG_ANG_BARK 0x2910
#define NA_SE_EV_COMICAL_JUMP	    0x2911
#define NA_SE_EV_LIGHTNING_HARD	    0x2912
#define NA_SE_EV_SMALL_DOG_WHINE    0x2913
#define NA_SE_EV_PANIC_IN_HOUSE	    0x2914
#define NA_SE_EV_CLOCK_TOWER_BELL   0x2915
#define NA_SE_EV_CLOCK_TOWER_SECOND_HAND    0x2916
#define NA_SE_EV_SIGNAL_BIGBELL	    0x2917

#define NA_SE_EV_BEAVER_VOICE_0	    0x2919
#define NA_SE_EV_BEAVER_VOICE_1	    0x291a
#define NA_SE_EV_WATERWHEEL_LEVEL   0x211b
#define NA_SE_EV_WATERWHEEL_TRIG    0x291b
#define NA_SE_EV_WOOD_GATE_OPEN_N   0x291c
#define NA_SE_EV_INVISIBLE_MONKEY   0x211d
#define NA_SE_EV_CRUISER	    0x211e
#define NA_SE_EV_SECRET_CHEER	    0x291f
#define NA_SE_EV_BOTTLE_WATERING    0x2920
#define NA_SE_EV_MONKEY_VO_SADNESS   0x2121
#define NA_SE_EV_SNOWSTORM_NORMAL   0x2121
#define NA_SE_EV_SNOWSTORM_HARD     0x2122
#define NA_SE_EV_GORON_SNOW_BREATH  0x2922
#define NA_SE_EV_UNSKILLFUL_OCARINA 0x2923
#define NA_SE_EV_BLACK_FAIRY_DASH   0x2924
#define NA_SE_EV_BLACK_FAIRY_DASH_F   0x2924
#define NA_SE_EV_FAIRY_SURPRISE	    0x2925
#define NA_SE_EV_BELL_SURPRISE	    0x2925
#define NA_SE_EV_MONDO_SURPRISE	    0x2926
#define NA_SE_EV_SPOT_LIGHT_OPEN    0x2927
#define NA_SE_EV_HOUSE_BROKEN	    0x2928
#define NA_SE_EV_GUITAR_STRINGS_BROKEN	0x2928	/* NOT USES */
#define NA_SE_EV_MOON_FALL	    0x2129
#define NA_SE_EV_OCARINA_BOUND_0    0x292a
#define NA_SE_EV_OCARINA_BOUND_1    0x292b
#define NA_SE_EV_OCARINA_BOUND_2    0x292b
#define NA_SE_EV_OCARINA_BOUND_3    0x292b

#define NA_SE_EV_BOMBERS_WALK	    0x292c
#define NA_SE_EV_BOMBERS_LAND	    0x292d
#define NA_SE_EV_BOMBERS_SHOT_BREATH	0x292e
#define NA_SE_EV_BOMBERS_SHOT_EXPLOSUIN	0x292f
#define NA_SE_EV_BOMBERS_JUMP	    0x2930
#define NA_SE_EV_SOLDIER_WALK	    0x2931
#define NA_SE_EV_ROCK_CUBE_RISING   0x2132
#define NA_SE_EV_ROCK_CUBE_FALL	    0x2133
#define NA_SE_EV_BELL_SPIT	    0x2934
#define NA_SE_EV_BELL_SIGH	    0x2935
#define NA_SE_EV_BELL_BRAKE	    0x2936
#define NA_SE_EV_DOG_SWIM	    0x2937
#define NA_SE_EV_CHIBI_FAIRY_HEAL_ORG   0x2138
#define NA_SE_EV_CHIBI_FAIRY_HEAL   NA_SE_PL_CHIBI_FAIRY_HEAL
#define NA_SE_EV_BOMBERS_CLIMB	    0x2939
#define NA_SE_EV_WOODPLATE_BROKEN   0x293a
#define NA_SE_EV_SMALL_WOODPLATE_BOUND_1    0x293a
#define NA_SE_EV_WATER_LEVEL_DOWN_FIX	0x213b
#define NA_SE_EV_WATER_LEVEL_UP_FIX 0x213b
#define NA_SE_EV_HONEYCOMB_BROKEN   0x293c
#define NA_SE_EV_CLOCK_TOWER_UP	    0x213d
#define NA_SE_EV_CLOCK_TOWER_STOP   0x293e
#define NA_SE_EV_CLOCK_TOWER_FALL   0x293f
#define NA_SE_EV_CLOCK_TOWER_BOUND_0 0x2940
#define NA_SE_EV_CLOCK_TOWER_BOUND_1 0x2941
#define NA_SE_EV_CLOCK_TOWER_BOUND_2 0x2942
#define NA_SE_EV_STONEDOOR_OPEN_S  0x2143
#define NA_SE_EV_STONEROLLDOOR_MOVE 0x2143
#define NA_SE_EV_ICE_MELT_LEVEL  0x2144
#define NA_SE_EV_ICE_STAND_MELT  0x2944
#define NA_SE_EV_CLOCK_TOWER_STAIR_MOVE  0x2945
#define NA_SE_EV_EARTHQUAKE_OUTDOOR	NA_SE_SY_EARTHQUAKE_OUTDOOR
#define NA_SE_EV_OBJECT_STICK	    0x2947
#define NA_SE_EV_CHICK_TO_CHICKEN   0x2948
#define NA_SE_EV_BALLOON_BROKEN	    0x2949
#define NA_SE_EV_MUJURA_BALLOON_BROKEN	0x2949
#define NA_SE_EV_BALLOON_SWELL	    0x214a
#define NA_SE_EV_SEAHORSE_OUT_BOTTLE	0x294b
#define NA_SE_EV_KYOJIN_VOICE_SUCCESS	0x214c
#define NA_SE_EV_KYOJIN_VOICE_FAIL  0x294d
#define NA_SE_EV_KYOJIN_WALK	    0x294e
#define NA_SE_EV_MOON_FALL_LAST	    0x214f
#define NA_SE_EV_EARTHQUAKE_LAST    0x2150
#define NA_SE_EV_SEAHORSE_SWIM	    0x2951
#define NA_SE_EV_OPEN_AMBRELLA	    0x2952
#define NA_SE_EV_BUTLER_FRY	    0x2153
#define NA_SE_EV_PIRATE_SHIP	    0x2154
#define NA_SE_EV_DRAIN		    0x2155
#define NA_SE_EV_DORA_L		    0x2956
#define NA_SE_EV_LOG_BOUND	    0x2957
#define NA_SE_EV_LADDER_DOUND	    0x2957  /*0x2860*/
#define NA_SE_EV_CART_WHEEL	    0x2958
#define NA_SE_EV_EARTHQUAKE_LAST2   0x2159
#define NA_SE_EV_DORA_S		    0x295a
#define NA_SE_EV_ROCK_FALL	    0x295b
#define NA_SE_EV_FREEZE_S	    0x295c
#define NA_SE_EV_WOOD_BOUND_S	    0x295d
#define NA_SE_EV_CLOSE_AMBRELLA	    0x295e
#define NA_SE_EV_OBJECT_SLIDE	    0x295f
#define NA_SE_EV_ROLL_AND_FALL	    0x2960
#define NA_SE_EV_GORON_BOUND_0	    0x2961
#define NA_SE_EV_GORON_BOUND_1	    0x2962
#define NA_SE_EV_MOONSTONE_BOUND    0x2962
#define NA_SE_EV_MONKEY_VO_DAMAGE	    0x2963 
#define NA_SE_EV_FORT_RISING	    0x2964 
#define NA_SE_EV_MONKEY_VO_REWARD	    0x2965 
#define NA_SE_EV_WATER_PURIFICATION 0x2966 
#define NA_SE_EV_OWL_WARP_SWITCH_ON 0x2967 
#define NA_SE_EV_BIG_WATER_WHEEL_RR 0x2168 
#define NA_SE_EV_BIG_WATER_WHEEL_LR 0x2169 
#define NA_SE_EV_SMALL_WATER_WHEEL  0x216a 
#define NA_SE_EV_COCK_SWITCH_ROLL   0x216b 
#define NA_SE_EV_COCK_SWITCH_STOP   0x296c 
#define NA_SE_EV_PIPE_STREAM_START  0x296d 
#define NA_SE_EV_WATER_PILLAR	    0x216e
#define NA_SE_EV_SEESAW_INCLINE	    0x216f
#define NA_SE_EV_ZORA_WALK	    0x2970
#define NA_SE_EV_PIRATE_WALK	    0x2971
#define NA_SE_EV_NPC_WALK_L	    0x2971
#define NA_SE_EV_PILLAR_UP_FAST	    0x2172
#define NA_SE_EV_DUMMY_WATER_WHEEL_RR 0x2173 
#define NA_SE_EV_DUMMY_WATER_WHEEL_LR 0x2174 
#define NA_SE_EV_MUJURA_FOLLOWERS_FLY 0x2175 
#define NA_SE_EV_MAKE_TURRET	    0x2176 
#define NA_SE_EV_CHANDELIER_ROLL    0x2177
#define NA_SE_EV_CHANDELIER_BROKEN  0x2978
#define NA_SE_EV_SINK_WOOD_FLOOR    0x2979
#define NA_SE_EV_REBOUND_WOOD_FLOOR 0x297a
#define NA_SE_EV_UFO_APPEAR	    0x217b
#define NA_SE_EV_UFO_DASH	    0x297c
#define NA_SE_EV_TORNADE	    0x217d
#define NA_SE_EV_MILK_POT_DAMAGE    0x297e

#define NA_SE_EV_KYOJIN_SIGN	    0x2180
#define NA_SE_EV_KYOJIN_GRATITUDE0  0x2181
#define NA_SE_EV_KYOJIN_GRATITUDE1  0x2182
#define NA_SE_EV_KYOJIN_GRATITUDE2  0x2183
#define NA_SE_EV_IKANA_DOOR_OPEN    0x2184
#define NA_SE_EV_IKANA_DOOR_CLOSE   0x2185
#define NA_SE_EV_MOONSTONE_FALL	    0x2186
#define NA_SE_EV_COMING_FIRE	    0x2987
#define NA_SE_EV_FAIRY_GROUP_FRY    0x2188
#define NA_SE_EV_FAIRY_GROUP_HEAL   0x2189
#define NA_SE_EV_WOOD_DOOR_OPEN_SPEEDY	0x298a
#define NA_SE_EV_PAMERA_WALK	    0x298b
#define NA_SE_EV_PICKPOCKET_WALK    0x298b
#define NA_SE_EV_G_STONE_CHANGE_COLOR	0x298c
#define NA_SE_EV_CURTAIN_DOWN	    0x218d
#define NA_SE_EV_GORON_HAND_HIT	    0x298e
#define NA_SE_EV_SMALL_WOODPLATE_BOUND_0    0x298f
#define NA_SE_EV_GET_UP_ON_BED	    0x2990
#define NA_SE_EV_LIE_DOWN_ON_BED    0x2991
#define NA_SE_EV_BANK_MAN_HAND_HIT  0x2992
#define NA_SE_EV_HANKO		    0x2993
#define NA_SE_EV_HIT_TABLE	    0x2993
#define NA_SE_EV_CHICK_SONG	    0x2994
#define NA_SE_EV_LAND_SAND	    0x2995
#define NA_SE_EV_JUMP_SAND	    0x2996
#define NA_SE_EV_SECRET_LADDER_APPEAR	0x2997
#define NA_SE_EV_CLAPPING_2P	    0x2198
#define NA_SE_EV_DIVE_INTO_WEED	    0x2999
#define NA_SE_EV_FAIRY_SHIVER	    0x219a
#define NA_SE_EV_MASK_RISING	    0x219b
#define NA_SE_EV_MOON_EYE_FLASH	    0x299c
#define NA_SE_EV_SLIP_MOON	    0x299d
#define NA_SE_EV_FALL_POWER	    0x219e
#define NA_SE_EV_BELL_DASH_NORMAL   0x299f
#define NA_SE_EV_FAIRY_DASH	    NA_SE_EV_BELL_DASH_NORMAL	/* 0x281b */

#define NA_SE_EV_IKANA_BLOCK_MOVE_X 0x21a0
#define NA_SE_EV_IKANA_BLOCK_MOVE_Z 0x21a1
#define NA_SE_EV_IKANA_BLOCK_MOVE_Y 0x21a2
#define NA_SE_EV_IKANA_BLOCK_STOP_C 0x29a3
#define NA_SE_EV_IKANA_BLOCK_STOP_F 0x29a4
#define NA_SE_EV_BELL_ANGER	    0x21a5
#define NA_SE_EV_IKANA_BLOCK_SWITCH 0x29a6
#define NA_SE_EV_BAT_FLY	    0x21a7
#define NA_SE_EV_UFO_LIGHT_BEAM	    0x21a8
#define NA_SE_EV_DOOR_UNLOCK	    0x29a9
#define NA_SE_EV_WOOD_WATER_WHEEL   0x21aa
#define NA_SE_EV_CONVEYOR_SHUTTER_OPEN	    0x29ab
#define NA_SE_EV_CONVEYOR_SHUTTER_CLOSE	    0x29ac
#define NA_SE_EV_ROOM_CARTAIN	    0x29ad
#define NA_SE_EV_ZORA_KIDS_BORN	    0x29ae
#define NA_SE_EV_ZORA_KIDS_SWIM_0   0x29af
#define NA_SE_EV_ZORA_KIDS_SWIM_1   0x29b0
#define NA_SE_EV_ZORA_KIDS_SWIM_LV  0x21b0
#define NA_SE_EV_MOON_EXPLOSION	    0x29b1
#define NA_SE_EV_RAINBOW	    0x21b2
#define NA_SE_EV_OMENYA_WALK	    0x29b3
#define NA_SE_EV_KYOJIN_GROAN	    0x29b4
#define NA_SE_EV_UFO_FLY	    0x21b5
#define NA_SE_EV_GRASS_WALL_BROKEN  0x29b6
#define NA_SE_EV_WARP_HOLE_ENERGY   0x21b7
#define NA_SE_EV_BOSS_WARP_HOLE	    0x21b8
#define NA_SE_EV_FIREWORKS_LAUNCH   0x21b9
#define NA_SE_EV_IKANA_SOUL_LV	    0x21ba
#define NA_SE_EV_IKANA_PURIFICATION 0x21bb
#define NA_SE_EV_ZORA_KIDS_SWIM_2   0x29bc
#define NA_SE_EV_DARUMA_VANISH	    0x29bd  /* 0x28b7 */
#define NA_SE_EV_IKANA_SOUL_TRANSFORM	0x29be
#define NA_SE_EV_ROMANY_BOW_FLICK   0x29bf
#define NA_SE_EV_WHITE_FAIRY_SHOT_DASH	0x29c0
#define NA_SE_EV_BLACK_FAIRY_SHOT_DASH	0x29c1
#define NA_SE_EV_SWORD_FORGE	    0x29c2
#define NA_SE_EV_STONEDOOR_CLOSE_S  0x21c3  /*0x201e*/



#define NA_SE_EV_GRAVE_SPARK	    NA_SE_EN_BIRI_SPARK
#define NA_SE_EV_OCARINA_BMELO_0    0x2830
#define NA_SE_EV_OCARINA_BMELO_1    0x2831
#define NA_SE_EV_FROG_EAT	    NA_SE_EN_DODO_M_EAT
#define NA_SE_EV_CARPENTER_WALK	    NA_SE_EN_GOLON_WALK
#define NA_SE_EV_VOLCNO_ROCK_BOUND  NA_SE_EN_VALVAISA_ROCK
#define NA_SE_EV_MARATHONMAN_STEP   NA_SE_EN_GOLON_WALK
#define NA_SE_EV_CHINCLE_BOUND	    NA_SE_EN_RIZA_DOWN
#define NA_SE_EV_BEAVER_BOUND	    NA_SE_EN_RIZA_DOWN
#define NA_SE_EV_FISH_EAT	    NA_SE_EN_DODO_M_EAT
#define NA_SE_EV_DANPEI_WALK	    NA_SE_EN_GOLON_WALK
#define NA_SE_EV_GOMAN_DAMEGE	    NA_SE_EN_IRONNACK_CUTBODY
#define NA_SE_EV_PAMERA_FATHER_WALK NA_SE_EN_GOLON_WALK
#define NA_SE_EV_KAKASHI_DIVE	    NA_SE_EN_STALKID_HIDE
#define NA_SE_EV_BIGWALL_HIT	    NA_SE_PL_BODY_HIT	/*0x281d*/
#define NA_SE_EV_ROMANY_WALK	    NA_SE_EN_ROMANI_WALK

/*** SYSTEM ***/

#define NA_SE_SY_WIN_OPEN	    0x4800
#define NA_SE_SY_LANGUAGE_CHANGE    0x4800
#define NA_SE_SY_WIN_CLOSE	    0x4801
#define NA_SE_SY_CORRECT_CHIME	    0x4802
#define NA_SE_SY_GET_RUPY	    0x4803
#define NA_SE_SY_MESSAGE_WOMAN	    0x4804
#define NA_SE_SY_MESSAGE_MAN	    0x4805
#define NA_SE_SY_ERROR		    0x4806
#define NA_SE_SY_TRE_BOX_APPEAR	    0x4807
#define NA_SE_SY_HINT_CHIME	    0x4807
#define NA_SE_SY_CLEAR_CHIME	    0x4807
#define NA_SE_SY_DECIDE		    0x4808
#define NA_SE_SY_MESSAGE_DECIDE	    0x4808
#define NA_SE_SY_PUT_LETTER	    0x4808
#define NA_SE_SY_CURSOR		    0x4809
#define NA_SE_SY_CANCEL		    0x480a
#define NA_SE_SY_HP_RECOVER	    0x480b

#define NA_SE_SY_ATTENTION_ON	    0x480c
#define NA_SE_SY_ATTENTION_NORMAL   0x480c
#define NA_SE_SY_ATTENTION_OFF	    0x0000	/*0x480d */
#define NA_SE_SY_LOCK_ON	    0x4830	/*0x480e */
#define NA_SE_SY_LOCK_ON_ENEMY	    0x4830	/*0x480e */
#define NA_SE_SY_LOCK_OFF	    0x480f
#define NA_SE_SY_LOCK_ON_HUMAN	    0x4810

#define NA_SE_SY_CAMERA_ZOOM_UP	    0x4813
#define NA_SE_SY_MAP_DISPLAY_OFF    0x4813
#define NA_SE_SY_CAMERA_ZOOM_DOWN   0x4814
#define NA_SE_SY_MAP_DISPLAY_ON	    0x4814

#define NA_SE_SY_MESSAGE_PAUSE	    0x0000	/* 0x4817 */
#define NA_SE_SY_MESSAGE_PASS	    0x4818
#define NA_SE_SY_WARNING_COUNT_N    0x4819
#define NA_SE_SY_COUNT_DOWN_1	    0x4819
#define NA_SE_SY_WARNING_COUNT_E    0x481a
#define NA_SE_SY_COUNT_DOWN_0	    0x481a
#define NA_SE_SY_HITPOINT_ALARM	    0x481b

#define NA_SE_SY_DEMO_CUT	    0x481d
#define NA_SE_SY_NAVY_CALL	    0x481e
#define NA_SE_SY_GAUGE_UP	    0x401f

#define NA_SE_SY_ATTENTION_ON_OLD   0x4817
#define NA_SE_SY_ATTENTION_URGENCY  0x4837	/* 0x4817 */
#define NA_SE_SY_ATTENTION_ON_TIMP  0x4818

#define NA_SE_SY_MESSAGE_WIN_OPEN   0x0000	/* 0x4820 */
#define NA_SE_SY_MESSAGE_WIN_CLOSE  0x0000	/* 0x4821 */
#define NA_SE_SY_MESSAGE_NEUTRAL    0x0000	/* 0x4822 */
#define NA_SE_SY_PIECE_OF_HEART	    0x4823
#define NA_SE_SY_GET_ITEM	    0x4824
#define NA_SE_SY_WIN_SCROLL_LEFT    0x4825
#define NA_SE_SY_WIN_SCROLL_RIGHT   0x4826
#define NA_SE_SY_OCARINA_ERROR	    0x4827
#define NA_SE_SY_CAMERA_ZOOM_UP_2   0x4828
#define NA_SE_SY_CAMERA_ZOOM_DOWN_2 0x4829
#define NA_SE_SY_GLASSMODE_ON	    0x482a
#define NA_SE_SY_GLASSMODE_OFF	    0x482b
#define NA_SE_SY_FOUND		    0x482c
#define NA_SE_SY_ALARM		    0x482c
#define NA_SE_SY_START_WHISTLE	    0x482c
#define NA_SE_SY_HIT_SOUND	    0x482d

#define NA_SE_SY_MESSAGE_END 	    0x482e
#define NA_SE_SY_RUPY_COUNT	    0x482f
#define NA_SE_SY_GET_BOXITEM	    0x4831

#define NA_SE_SY_WHITE_OUT_INTO_MOON	0x4832
#define NA_SE_SY_WHITE_OUT_L	    0x4832
#define NA_SE_SY_WHITE_OUT_S	    0x4833
#define NA_SE_SY_WHITE_OUT_T	    0x4834
#define NA_SE_SY_KENJA_APPEAR	    0x4834
#define NA_SE_SY_START_SHOT	    0x4835
#define NA_SE_SY_GOAL_SHOT	    0x4835
#define NA_SE_SY_METRONOME	    0x4836
#define NA_SE_SY_METRONOME_LV	    0x4038

#define NA_SE_SY_ATTENTION_BASIC    0x480c
#define NA_SE_SY_ATTENTION_DUNGEON  0x4837
#define NA_SE_SY_FSEL_CURSOR	    0x4839
#define NA_SE_SY_FSEL_DECIDE_S	    0x483a
#define NA_SE_SY_FSEL_DECIDE_L	    0x483b
#define NA_SE_SY_FSEL_CLOSE	    0x483c
#define NA_SE_SY_FSEL_CANCEL	    0x483c
#define NA_SE_SY_FSEL_ERROR	    0x483d
#define NA_SE_SY_SET_FIRE_ARROW	    0x483e
#define NA_SE_SY_SET_ICE_ARROW	    0x483f
#define NA_SE_SY_SET_LIGHT_ARROW    0x4840
#define NA_SE_SY_SYNTH_MAGIC_ARROW  0x4841
#define NA_SE_SY_METRONOME_2	    0x4842
#define NA_SE_SY_KINSTA_MARK_APPEAR 0x4843
#define NA_SE_SY_FIVE_COUNT_LUPY    0x4844
#define NA_SE_SY_CARROT_RECOVER     0x4845
#define NA_SE_EV_FAIVE_LUPY_COUNT	    0x4846
#define NA_SE_SY_TIME_SIGNAL	    0x4846
#define NA_SE_SY_METRONOME_TEMPO    0x4047
#define NA_SE_SY_METRONOME_TEMPO_TRIG    0x4847
#define NA_SE_SY_COMICAL_SOUND0_0   0x4848
#define NA_SE_SY_COMICAL_SOUND0_1   0x4849
#define NA_SE_SY_COMICAL_SOUND0_LAST 0x484a
#define NA_SE_SY_SOUT_DEMO	    0x484b
#define NA_SE_SY_TIMESIGNAL_BELL    0x484c
#define NA_SE_SY_DEKUNUTS_JUMP_FAILED	0x484d
#define NA_SE_SY_ATTENTION_SOUND    0x484e
#define NA_SE_SY_TRANSFORM_MASK_FLASH	0x484f
#define NA_SE_SY_CAMERA_SHUTTER	    0x4850
#define NA_SE_SY_STROKE_DOWN_C	    0x4850
#define NA_SE_SY_STALKIDS_PSYCHO    0x4851
#define NA_SE_SY_CHICK_JOIN_CHIME   0x4852
#define NA_SE_SY_HIT_SOUND_L	    0x4853
#define NA_SE_SY_FAIRY_MASK_SUCCESS 0x4854
#define NA_SE_SY_SCHEDULE_WRITE	    0x4855
#define NA_SE_SY_STOPWATCH_TIMER_3  0x4056
#define NA_SE_SY_STOPWATCH_TIMER_INF  0x4057
#define NA_SE_SY_EARTHQUAKE_OUTDOOR 0x4058
#define NA_SE_SY_SPIRAL_DASH	    0x4859
#define NA_SE_SY_QUIZ_CORRECT	    0x485a
#define NA_SE_SY_QUIZ_INCORRECT	    0x485b
#define NA_SE_SY_DIZZY_EFFECT	    0x485c
#define NA_SE_SY_TIME_CONTROL_SLOW  0x485d
#define NA_SE_SY_TIME_CONTROL_NORMAL  0x485e
#define NA_SE_SY_SECOM_WARNING	    0x485f

#define NA_SE_IT_TRANSFORM_MASK_FLASH	NA_SE_SY_TRANSFORM_MASK_FLASH

/*** OCARINA ***/

#define NA_SE_OC_OCARINA	    0x5800
#define NA_SE_OC_ABYSS		    0x5801
#define NA_SE_SY_ABYSS		    NA_SE_OC_ABYSS
#define NA_SE_SY_FSEL_ERASE	    NA_SE_OC_ABYSS
#define NA_SE_OC_DOOR_OPEN	    0x5802
#define NA_SE_OC_SECRET_WARP_IN	    0x5803
#define NA_SE_EV_SECRET_WARP_IN	    NA_SE_OC_SECRET_WARP_IN
#define NA_SE_OC_SECRET_WARP_OUT    0x5804
#define NA_SE_EV_SECRET_WARP_OUT    NA_SE_OC_SECRET_WARP_OUT
#define NA_SE_OC_SECRET_HOLE_OUT    0x5805
#define NA_SE_EV_SECRET_HOLE_OUT    NA_SE_OC_SECRET_HOLE_OUT
#define NA_SE_OC_REVENGE	    0x5806
#define NA_SE_SY_REVENGE	    NA_SE_OC_REVENGE
#define NA_SE_OC_TUNAMI		    0x5807
#define NA_SE_SY_TUNAMI		    NA_SE_OC_TUNAMI

#define NA_SE_OC_TELOP_IMPACT	    0x5808
#define NA_SE_SY_TELOP_IMPACT	    NA_SE_OC_TELOP_IMPACT   /*0x481b*/

#define NA_SE_OC_WOOD_GATE_OPEN	    0x5809
#define NA_SE_EV_WOOD_GATE_OPEN	    NA_SE_OC_WOOD_GATE_OPEN

#define NA_SE_OC_FIREWORKS	    0x580a
#define NA_SE_EV_FIREWORKS_DEMO_0	    NA_SE_OC_FIREWORKS

#define NA_SE_OC_WHITE_OUT_INTO_KYOJIN	0x580b
#define NA_SE_SY_WHITE_OUT_INTO_KYOJIN	NA_SE_OC_WHITE_OUT_INTO_KYOJIN

/*** VOICE ***/

#define NA_OFS_VO_LI_ADULT	    0x00	    
#define NA_OFS_VO_LI_KID	    0x20
#define NA_OFS_VO_LI_DEKUNUTS	    0x80
#define NA_OFS_VO_LI_ZORA	    0xa0
#define NA_OFS_VO_LI_GORON	    0xc0
#define NA_OFS_VO_LI_BLACK	    0xe0
#define NA_OFS_VO_LI_POO	    0xe0

#define NA_SE_VO_LI_SWORD_N	    0x6800
#define NA_SE_VO_LI_BACKROLLING	    0x6800
#define NA_SE_VO_LI_JUMP	    0x6800
#define NA_SE_VO_LI_JUMP_CUT	    0x6800
#define NA_SE_VO_LI_SHOT	    0x6800
#define NA_SE_VO_LI_THROW	    0x6800
#define NA_SE_VO_LI_CATCH	    0x6800
#define NA_SE_VO_LI_SWORD_W2	    0x6800
#define NA_SE_VO_LI_GROUND_ROLL	    0x6800
#define NA_SE_VO_LI_AUTO_JUMP_HARD  0x6800
#define NA_SE_VO_LI_POO_WAIT	    0x68e0 

#define NA_SE_VO_LI_SWORD_L	    0x6801
#define NA_SE_VO_LI_ROLLING_CUT	    0x6801
#define NA_SE_VO_LI_LIFT_UP	    0x6801

#define NA_SE_VO_LI_LASH	    0x6802
#define NA_SE_VO_LI_HOOKSHOT_JUMP   0x6802
#define NA_SE_VO_LI_HANG	    0x6803
#define NA_SE_VO_LI_SLIP	    0x6803
#define NA_SE_VO_LI_FLOAT_AIR	    0x6803
#define NA_SE_VO_LI_GORON_DELICIOUS 0x68c3  /* direct */

#define NA_SE_VO_LI_CLIMB_END	    0x6804
#define NA_SE_VO_LI_LOOK_TRE	    0x6804
#define NA_SE_VO_LI_PULL_OUT_SWORD  0x6804
#define NA_SE_VO_LI_DIVE_WATER	    0x6804
#define NA_SE_VO_LI_ROLL_ATTACK_HIT 0x6804
#define NA_SE_VO_LI_CLIMB_UP	    0x6804	    /* 0x6814  0x6815  0x6803	*/
#define NA_SE_VO_LI_LAND_NO_DAMAGE  0x6804

#define NA_SE_VO_LI_DAMAGE_S	    0x6805
#define NA_SE_VO_LI_CAUGHT	    0x6805
#define NA_SE_VO_LI_UNABLE_TO_LIFT  0x6805
#define NA_SE_VO_LI_FREEZE	    0x6806
#define NA_SE_VO_LI_BOUND_DAMAGE    0x6806
#define NA_SE_VO_LI_MOFER_SWING	    0x6806
#define NA_SE_VO_LI_FALL_S	    0x6807
#define NA_SE_VO_LI_FALL_INTO_HOLE  0x6807
#define NA_SE_VO_LI_SURPRISE_S	    0x6807
#define NA_SE_VO_LI_FALL_L	    0x6808
#define NA_SE_VO_LI_DAMAGE_L	    0x6808  /* 0x6806 */
#define NA_SE_VO_LI_TAKE_AWAY	    0x6808
#define NA_SE_VO_LI_BURN	    0x6808
#define NA_SE_VO_LI_BREATH_REST	    0x6809
#define NA_SE_VO_LI_BREATH_WILD	    0x6809
#define NA_SE_VO_LI_BREATH_DRINK    0x680a
#define NA_SE_VO_LI_FACE_UP	    0x680a
#define NA_SE_VO_LI_DOWN	    0x680b
#define NA_SE_VO_LI_TAKEN_AWAY	    0x680c
#define NA_SE_VO_LI_ELECTRIC_SHOCK  0x680c
#define NA_SE_VO_LI_ELECTRIC_SHOCK_LV  0x600c
#define NA_SE_VO_LI_CRY		    0x680c
#define NA_SE_VO_LI_NIGHTMARE	    0x680c
#define NA_SE_VO_LI_HELD	    0x680d
#define NA_SE_VO_LI_SNEEZE	    0x680e
#define NA_SE_VO_LI_SWEAT	    0x680f
#define NA_SE_VO_LI_DRINK	    0x6010
#define NA_SE_VO_LI_RELAX	    0x6811
#define NA_SE_VO_LI_WAKEUP	    0x6811
#define NA_SE_VO_LI_SWORD_PUTAWAY   0x6812
#define NA_SE_VO_LI_SWORD_PICKOUT   0x6812
#define NA_SE_VO_LI_GROAN	    0x6813
#define NA_SE_VO_LI_AUTO_JUMP	    0x6814
#define NA_SE_VO_LI_LADDER_JUMP	    0x6814
#define NA_SE_VO_LI_SCOOP_UP	    0x6814
#define NA_SE_VO_LI_OPEN_TRE	    0x6814
#define NA_SE_VO_LI_BOTTLE_CAP_OPEN 0x6814
#define NA_SE_VO_LI_FOOTHOLD_JUMP   0x6814
#define NA_SE_VO_LI_SWORD_W1	    0x6814
#define NA_SE_VO_LI_MAGIC_NALE	    0x6815
#define NA_SE_VO_LI_SURPRISE	    0x6816
#define NA_SE_VO_LI_MAGIC_FROL	    0x6817
#define NA_SE_VO_LI_PUSH	    0x6818
#define NA_SE_VO_LI_PULL	    0x6818
#define NA_SE_VO_LI_HOOKSHOT_HANG   0x6819

#define NA_SE_VO_LI_LAND_DAMAGE_S   0x681a	/*  0x6805  */
#define NA_SE_VO_LI_LAND_DAMAGE_L   0x681a	/*  0x6806  */
#define NA_SE_VO_LI_MAGIC_START	    0x6800	/*  0x681b  */
#define NA_SE_VO_LI_MAGIC_ATTACK    0x681c	/*  0x6801  */
#define NA_SE_VO_LI_MAGIC_DIN	    0x681c	/*  0x6815  */
#define NA_SE_VO_BL_DOWN	    0x680b	/*  0x681d 0x6808  */
#define NA_SE_VO_LI_DEMO_DAMAGE	    0x681e
#define NA_SE_VO_LI_DURN_S	    0x681e

#define NA_SE_VO_LK_WAKE_UP	    0x6840
#define NA_SE_VO_LK_CATCH_DEMO	    0x6841
#define NA_SE_VO_LK_DRAGGED_DAMAGE  0x6042
#define NA_SE_VO_LK_USING_UP_ENERGY 0x6848
#define NA_SE_VO_LK_BEARING	    0x6848
#define NA_SE_VO_GO_SLEEP	    0x684a
#define NA_SE_VO_NP_SLEEP_IN	    0x684a
#define NA_SE_VO_NP_SLEEP_OUT	    0x684b
#define NA_SE_VO_PO_SLEEP	    0x684b
#define NA_SE_VO_NP_DRINK	    0x684e


#define NA_SE_VO_TA_SLEEP	    0x6850
#define NA_SE_EV_TARON_SLEEP	    NA_SE_VO_TA_SLEEP
#define NA_SE_VO_TA_SURPRISE	    0x6851
#define NA_SE_EV_TARON_SURPRISE	    NA_SE_VO_TA_SURPRISE
#define NA_SE_VO_TA_CRY_0	    0x6852
#define NA_SE_VO_TA_CRY_1	    0x6853

#define NA_SE_VO_IN_CRY_0	    0x6854
#define NA_SE_VO_IN_LOST	    0x6855
#define NA_SE_VO_IN_LASH_0	    0x6856
#define NA_SE_VO_IN_LASH_1	    0x6857
#define NA_SE_VO_IN_LAUGH	    0x687c
#define NA_SE_VO_NP_MAN_LAUGH_0	    0x687c

#define NA_SE_VO_FR_LAUGH_0	    0x6858
#define NA_SE_VO_FR_SMILE_0	    0x6859

#define NA_SE_VO_NB_AGONY	    0x685a
#define NA_SE_VO_NB_CRY_0	    0x685b
#define NA_SE_EV_NABALL_CRY	    0x685b
#define NA_SE_VO_NB_NOTICE	    0x685c
#define NA_SE_VO_NB_LAUGH	    0x687b
#define NA_SE_VO_NP_WOMAN_LAUGH_0   0x687b

#define NA_SE_VO_NA_HELLO_0	    0x685d
#define NA_SE_VO_NA_HELLO_1	    0x685e
#define NA_SE_VO_NA_HELLO_2	    0x685f
#define NA_SE_VO_NA_HELLO_3	    0x6844  /* 0x687b */

#define NA_SE_VO_RT_CRASH	    0x6860
#define NA_SE_VO_RT_DISCOVER	    0x6861
#define NA_SE_VO_RT_FALL	    0x6862
#define NA_SE_VO_RT_LAUGH_0	    0x6863
#define NA_SE_VO_RT_LIFT	    0x6864
#define NA_SE_VO_RT_THROW	    0x6865
#define NA_SE_VO_RT_UNBALLANCE	    0x6866

#define NA_SE_VO_ST_DAMAGE	    0x6867
#define NA_SE_VO_ST_ATTACK	    0x6868

#define NA_SE_VO_Z0_HURRY	    0x6869
#define NA_SE_VO_Z0_MEET	    0x686a
#define NA_SE_VO_Z0_QUESTION	    0x686b
#define NA_SE_VO_Z0_SIGH_0	    0x686c
#define NA_SE_VO_Z0_SMILE_0	    0x686d
#define NA_SE_VO_Z0_SURPRISE	    0x686e
#define NA_SE_VO_Z0_THROW	    0x686f

#define NA_SE_VO_SK_CRY_0	    0x6870
#define NA_SE_VO_SK_CRY_1	    0x6871
#define NA_SE_VO_SK_CRASH	    NA_SE_EN_PIRATE_DEAD
#define NA_SE_VO_SK_LAUGH	    0x6873
#define NA_SE_VO_NA_LISTEN	    0x6873

#define NA_SE_VO_SK_SHOUT	    0x6874

#define NA_SE_VO_Z1_CRY_0	    0x6875
#define NA_SE_VO_Z1_CRY_LINK_DAMAGE 0x6875
#define NA_SE_VO_Z1_CRY_1	    0x6876
#define NA_SE_VO_Z1_OPENDOOR	    0x6877
#define NA_SE_VO_Z1_SURPRISE	    0x6878
#define NA_SE_VO_Z1_PAIN	    0x6879

#define NA_SE_VO_FR_SMILE_1	    0x6878
#define NA_SE_VO_FR_SMILE_2	    0x6879

#define NA_SE_VO_KZ_MOVE	    0x687a
#define NA_SE_VO_IN_JOY0	    0x687c
#define NA_SE_VO_IN_JOY1	    0x687d
#define NA_SE_VO_IN_JOY2	    0x687e

/* NEW CHARA VOICE */

#define NA_SE_VO_JMVO02		    0x6900
#define NA_SE_VO_JMVO04		    0x6901

#define NA_SE_VO_CDVO00		    0x6902
#define NA_SE_VO_CDVO01		    0x6903
#define NA_SE_VO_CDVO02		    0x6904
#define NA_SE_VO_CDVO03		    0x6905


#define NA_SE_VO_BBVO00		    0x6906
#define NA_SE_VO_BBVO01		    0x6907
#define NA_SE_VO_BBVO02		    0x6908
#define NA_SE_VO_BBVO03		    0x6909
#define NA_SE_VO_BBVO04		    0x690a
#define NA_SE_VO_BBVO05		    0x690b

#define NA_SE_VO_OBVO01		    0x690c

#define NA_SE_VO_ARVO00		    0x690d
#define NA_SE_VO_ARVO01		    0x690e

#define NA_SE_VO_MMVO00		    0x690f
#define NA_SE_VO_MMVO01		    0x6910
#define NA_SE_VO_MMVO02		    0x6911
#define NA_SE_VO_MMVO03		    0x6912
#define NA_SE_VO_MMVO04		    0x6913
#define NA_SE_VO_MMVO05		    0x6914

#define NA_SE_VO_ABVO00		    0x6915
#define NA_SE_VO_ABVO01		    0x6916

#define NA_SE_VO_NPVO00		    0x6917

#define NA_SE_VO_FPVO00		    0x6918
#define NA_SE_VO_FPVO01		    0x6919
#define NA_SE_VO_FPVO02		    0x691a
#define NA_SE_VO_FPVO03		    0x691b

#define NA_SE_VO_ROVO01		    0x691c
#define NA_SE_VO_ROVO02		    0x691d

#define NA_SE_VO_RYVO01		    0x691e
#define NA_SE_VO_RYVO02		    0x691f
#define NA_SE_VO_RYVO03		    0x6920
#define NA_SE_VO_RYVO04		    0x6921

#define NA_SE_VO_ANVO00		    0x6922
#define NA_SE_VO_ANVO01	    	    0x6923
#define NA_SE_VO_ANVO02		    0x6924
#define NA_SE_VO_ANVO03		    0x6925

#define NA_SE_VO_CRVO00		    0x6926
#define NA_SE_VO_CRVO01		    0x6927
#define NA_SE_VO_CRVO02		    0x6928
#define NA_SE_VO_CRVO03		    0x6929

#define NA_SE_VO_HNVO00		    0x692a
#define NA_SE_VO_HNVO01		    0x692b
#define NA_SE_VO_HNVO02		    0x692c

#define NA_SE_VO_RMVO00		    0x692d
#define NA_SE_VO_RMVO01		    0x692e
#define NA_SE_VO_RMVO02		    0x692f

#define NA_SE_VO_PMVO01		    0x6930
#define NA_SE_VO_PMVO02		    0x6931
#define NA_SE_VO_PMVO03		    0x6932

#define NA_SE_VO_DHVO00		    0x6933
#define NA_SE_VO_DHVO01		    0x6934
#define NA_SE_VO_DHVO02		    0x6935
#define NA_SE_VO_DHVO03		    0x6936
#define NA_SE_VO_DHVO04		    0x6937

#define NA_SE_VO_TFVO00		    0x6938

#define NA_SE_VO_ANVO04		    0x6939
#define NA_SE_VO_ANVO05		    0x693a
#define NA_SE_VO_PMVO00		    0x693b

/* not used */
#define NA_SE_VO_CHVO00		    0x6939
#define NA_SE_VO_CHVO01		    0x693a
#define NA_SE_VO_CHVO02		    0x693b
#define NA_SE_VO_CHVO03		    0x693c
#define NA_SE_VO_CHVO04		    0x693d
#define NA_SE_VO_CHVO05		    0x693e
#define NA_SE_VO_CHVO06		    0x693f
#define NA_SE_VO_CHVO07		    0x6940
#define NA_SE_VO_CHVO09		    0x6942

#define NA_SE_VO_CHVO08		    0x6941

#define NA_SE_VO_DPVO00		    0x6943
#define NA_SE_VO_DPVO01		    0x6944
#define NA_SE_VO_DPVO02		    0x6945

#define NA_SE_VO_SKVO00		    0x6946
#define NA_SE_VO_SKVO01		    0x6947

#define NA_SE_VO_KHVO00		    0x6948
#define NA_SE_VO_KHVO01		    0x6949
#define NA_SE_VO_KHVO02		    0x694a

#define NA_SE_VO_SHVO00		    0x694b
#define NA_SE_VO_SHVO01		    0x694c

#define NA_SE_VO_KAVO02		    0x694d
#define NA_SE_VO_KAVO03		    0x694e

#define NA_SE_VO_MTVO00		    0x694f

#define NA_SE_VO_TTVO00		    0x6950

#define NA_SE_VO_ITVO00		    0x6951
#define NA_SE_VO_ITVO01		    0x6952
#define NA_SE_VO_ITVO02		    0x6953

#define NA_SE_VO_KMVO00		    0x6954
#define NA_SE_VO_KMVO01		    0x6955

#define NA_SE_VO_JOVO00		    0x6956

#define NA_SE_VO_JYVO00		    0x6957

#define NA_SE_VO_DTVO00		    0x6958

#define NA_SE_VO_GUVO00		    0x6959

#define NA_SE_VO_KTVO00		    0x695a
#define NA_SE_VO_KTVO01		    0x695b
#define NA_SE_VO_KTVO03		    0x695c

#define NA_SE_VO_ZBVO00		    0x695d
#define NA_SE_VO_ZBVO01		    0x695e

#define NA_SE_VO_DAVO01		    0x695f
#define NA_SE_VO_SHVO04		    0x6960

/* not used */
#define NA_SE_VO_GBVO00		    0x695f
#define NA_SE_VO_GBVO01		    0x6960

#define NA_SE_VO_GBVO02		    0x6961
#define NA_SE_VO_GBVO03		    0x6962

#define NA_SE_VO_PFVO00		    0x6963
#define NA_SE_VO_PFVO01		    0x6964

#define NA_SE_VO_GAVO00		    0x6965
#define NA_SE_VO_GAVO01		    0x6966

#define NA_SE_VO_DJVO00		    0x6967
#define NA_SE_VO_DJVO01		    0x6968

#define NA_SE_VO_MSVO00		    0x6969
#define NA_SE_VO_MSVO01		    0x696a

#define NA_SE_VO_JPVO00		    0x696b

#define NA_SE_VO_HYVO00		    0x696c
#define NA_SE_VO_HYVO01		    0x696d

#define NA_SE_VO_BAVO00		    0x696e

#define NA_SE_VO_POVO00		    0x696f

#define NA_SE_VO_DAVO00		    0x6970
#define NA_SE_VO_DAVO02		    0x6971

#define NA_SE_VO_MKVO00		    0x6972
#define NA_SE_VO_MKVO01		    0x6973
#define NA_SE_VO_MKVO02		    0x6974
#define NA_SE_VO_MKVO03		    0x6975
#define NA_SE_VO_MKVO04		    0x6976

#define NA_SE_VO_TIVO00		    0x6977
#define NA_SE_VO_TIVO01		    0x6978
#define NA_SE_VO_TIVO02		    0x6979
#define NA_SE_VO_TIVO03		    0x697a
#define NA_SE_VO_TIVO04		    0x697b
#define NA_SE_VO_TIVO05		    0x697c

#define NA_SE_VO_OMVO00		    0x697d
#define NA_SE_VO_OMVO01		    0x697e
#define NA_SE_VO_OMVO02		    0x697f
#define NA_SE_VO_OMVO03		    0x6980
#define NA_SE_VO_OMVO04		    0x6981
#define NA_SE_VO_OMVO05		    0x6982
#define NA_SE_VO_OMVO06		    0x6983


#define NA_SE_VO_FAIRY_HELLO	    0x0000    /* 0x6841 */
#define NA_SE_VO_FAIRY_HEAR	    0x0000    /* 0x6842 */
#define NA_SE_VO_FAIRY_ENEMY	    0x0000    /* 0x6840 */

#define NA_SE_VO_NAVY_HELLO	    0x6841
#define NA_SE_VO_NAVY_HEAR	    0x6842
#define NA_SE_VO_NAVY_ENEMY	    0x6840

#define NA_SE_VO_NAVY_CALL	    0x6843
#define NA_SE_VO_CHAT_MESSAGE_CALL  0x6845
#define NA_SE_VO_BELL_MESSAGE	    0x6846
#define NA_SE_VO_MONDO_MESSAGE	    0x6847

#define NA_SE_VO_NARRATION_0	    0x6850

/* ********************************************
	    DEMO SPECIAL SEQUENCE SE
   ******************************************** */

#define NA_DEMO_SE_TIMETRIP	    0x00
#define NA_DEMO_SE_SEEK_TRANSFORM   0x01
#define NA_DEMO_SE_RUN_AROUND	    0x02
#define NA_DEMO_SE_FROL_MAGIC	    0x03
#define NA_DEMO_SE_NALE_MAGIC	    0x04
#define NA_DEMO_SE_RING_GATHER	    0x05
#define NA_DEMO_SE_DARK_CLOWD	    0x06
#define NA_DEMO_SE_KNOCK_DOWN	    0x07
#define NA_DEMO_SE_SHADEST_MOVE	    0x08
#define NA_DEMO_SE_SHADEST_APPEAR   0x09
#define NA_DEMO_SE_HIGH_SPEED_CAMERA   0x0a
#define NA_DEMO_SE_ENERGY_LINE_VANISH   0x0b
#define NA_DEMO_SE_BARRIER_BROKEN   0x0c
#define NA_DEMO_SE_TOWER_SINK	    0x0d
#define NA_DEMO_SE_LINK_NIGHTMARE   0x0e
#define NA_DEMO_SE_FUSHADEMO	    0x0f


/* ********************************************
	    NATURAL SOUND INIT FLAG
   ******************************************** */

#define NA_NS_INIT_SPOT00	    0x00
#define NA_NS_INIT_SPOT01	    0x01
#define NA_NS_INIT_SPOT02	    0x02
#define NA_NS_INIT_SPOT03	    0x03
#define NA_NS_INIT_SPOT04	    0x04
#define NA_NS_INIT_SPOT05	    0x05
#define NA_NS_INIT_SPOT06	    0x06
#define NA_NS_INIT_SPOT07	    0x07
#define NA_NS_INIT_SPOT08	    0x08
#define NA_NS_INIT_SPOT09	    0x09
#define NA_NS_INIT_SPOT10	    0x0a
#define NA_NS_INIT_SPOT11	    0x0b
#define NA_NS_INIT_SPOT12	    0x0c
#define NA_NS_INIT_SPOT13	    0x0d
#define NA_NS_INIT_SPOT14	    0x0e
#define NA_NS_INIT_SPOT15	    0x0f
#define NA_NS_INIT_SPOT16	    0x10
#define NA_NS_INIT_SPOT17	    0x11
#define NA_NS_INIT_SPOT18	    0x12
#define NA_NS_INIT_SPOT19	    0x13


#define NA_NS_INIT_FIELD	    0x00
#define NA_NS_INIT_JUNGLE	    0x01
#define NA_NS_INIT_SEA		    0x02
#define NA_NS_INIT_SNOWMOUNTAIN	    0x03
#define NA_NS_INIT_RUINS	    0x04
#define NA_NS_INIT_TOWN		    0x05
#define NA_NS_INIT_EVI		    0x06
#define NA_NS_INIT_RAINHOUSE	    0x07
#define NA_NS_INIT_FIELD_DAY_ONLY   0x08
#define NA_NS_INIT_JUNGLE_DAY_ONLY  0x09
#define NA_NS_INIT_GRAVE_YARD	    0x0a
#define NA_NS_INIT_GRASSLAND	    0x0b
#define NA_NS_INIT_ENDING_MORNING   0x0c
#define NA_NS_INIT_NO_SOUND	    0x12

/*** old ***/
/* #define NA_NS_INIT_FIELD	    0x00 */
#define NA_NS_INIT_GERUDO	    0x0a
#define NA_NS_INIT_SAND		    0x0b
#define NA_NS_INIT_MOUNTAIN	    0x0c
/* #define NA_NS_INIT_TOWN	    0x01 */
#define NA_NS_INIT_GRAVEYARD	    0x02
#define NA_NS_INIT_FOREST	    0x04
/* #define NA_NS_INIT_RAINHOUSE	    0x05 */
#define NA_NS_INIT_FISHING_SPOT	    0x06
#define NA_NS_INIT_LAST_GANON	    0x07

#define NA_NS_INIT_DEMO00	    0x02    /* THUNDER & RAIN */
#define NA_NS_INIT_DEMO01	    0x03    /* THUNDER & RAIN & STORM */


/* ********************************************
	    NATURAL SOUND CONTROL FLAG
   ******************************************** */
#define NA_NS_TRIG_THUNDER	    0x0f01
#define NA_NS_TRIG_LIGHTNING	    0x0f00
#define NA_NS_TRIG_RAIN		    0x0e01
#define NA_NS_TRIG_WIND		    0x0c01
#define NA_NS_TRIG_EVENINGBIRD	    0x0101
#define NA_NS_TRIG_NIGHTCREATURE    0x2401
#define NA_NS_TRIG_MORNINGBIRD	    0x5601

#define NA_NS_TRIG_EVENING	    0x0101
#define NA_NS_TRIG_NIGHTE	    0x2401
#define NA_NS_TRIG_NIGHT	    0x2401
#define NA_NS_TRIG_MORNING	    0x5601




#define NA_NS_VARI_WIND		    0x0c02

#define NA_NS_DIST_THUNDER	    0x0f05

#define NA_NS_POWR_RAIN		    0x0e04
#define NA_NS_POWR_WIND		    0x0c04

#define NA_NS_CTRL_START	    0x01
#define NA_NS_CTRL_STOP		    0x00
#define NA_NS_CTRL_TRIGGER	    0x00

#define NA_NS_CTRL_BREAZE	    0x00
#define NA_NS_CTRL_STORM	    0x01
#define NA_NS_CTRL_SANDSTORM	    0x01

#define NA_NS_CTRL_DIST_NEAR	    0x00
#define NA_NS_CTRL_DIST_MIDDLE	    0x24
#define NA_NS_CTRL_DIST_FAR	    0x38


/* ********************************************
	    BGM PATTERN DEFINE 
   ******************************************** */
#define NA_BGM_PTN_NORMAL	    0x00
#define NA_BGM_PTN_FIGHT	    0x01
#define NA_BGM_PTN_REST		    0x02
#define NA_BGM_PTN_FORCE_NORMAL	    0x03

#define NA_ENM_BGM_DIST_MAX	    (500.0f)
#define NA_ENM_BGM_DIST_MIN	    (150.0f)
#define NA_ENM_BGM_DIST_WIDTH	    (NA_ENM_BGM_DIST_MAX-NA_ENM_BGM_DIST_MIN)

#define NA_ENM_BGM_MUTE_VOL	    80
#define NA_ENM_BGM_MUTE_VOL1	    60
#define NA_ENM_BGM_MUTE_VOL2	    40
#define NA_ENM_BGM_MUTE_VOL3	    20
#define NA_ENM_BGM_MUTE_VOL4	    5


/* ********************************************
	    BGM FLAG
   ******************************************** */
   
#define NA_BGM_NO_ENTRY		    0xffff
#define NA_BGM_SE_SEQUENCE	    0x0000
#define NA_BGM_DUMMY_NO_BGM	    0x0000
#define NA_BGM_NA_SEQUENCE	    0x0001
#define NA_BGM_FIELD		    0x0002
#define NA_BGM_CHASE		    0x0003
#define NA_BGM_STALKID		    0x0004
#define NA_BGM_CLOCK_TOWER	    0x0005
#define NA_BGM_RUIN_DUNGEON_FRONT   0x0006
#define NA_BGM_RUIN_DUNGEON_REVERSE 0x0007
#define NA_BGM_FAILURE_0	    0x0008
#define NA_BGM_FAILURE_1	    0x0009
#define NA_BGM_OMENYA		    0x000a
#define NA_BGM_DEMO_CURE	    0x000b
#define NA_BGM_DAMP_AREA	    0x000c
#define NA_BGM_UFO		    0x000d
#define NA_BGM_JUNGLE_CREWS	    0x000e
#define NA_BGM_SHARP		    0x000f
#define NA_BGM_SEA_AREA		    0x0010
#define NA_BGM_IKANA_AREA	    0x0011
#define NA_BGM_DEKU_KING	    0x0012
#define NA_BGM_SNOW_AREA	    0x0013
#define NA_BGM_PIRATE_AREA	    0x0014
#define NA_BGM_FILE_SELECT	    0x0018  /*0x0057*/
#define NA_BGM_EVENT_CLEAR	    0x0019
#define NA_BGM_BGM00		    0x0002
#define NA_BGM_BGM01		    0x0019
#define NA_BGM_BGM02		    0x001a
#define NA_BGM_BGM03		    0x001a
#define NA_BGM_ENEMY		    0x081a

#define NA_BGM_BOSS00		    0x001b
#define NA_BGM_BOSS01		    0x001b  /* 0x0037 */  /*0x006b*/
#define NA_BGM_JUNGLE_DUNGEON	    0x001c
#define NA_BGM_MARKET		    0x001d
#define NA_BGM_OPENING		    0x001e
#define NA_BGM_LINK_HOUSE	    0x001f
#define NA_BGM_NORMAL_HOUSE	    0x001f
#define NA_BGM_GAME_OVER	    0x0020
#define NA_BGM_BOSS_CLEAR	    0x0021
#define NA_BGM_ITEM_GET		    0x0922
#define NA_BGM_SUCCESS		    0x0922
#define NA_BGM_GATE_OPEN	    0x0023  /*0x0059*/
#define NA_BGM_HEART_GET	    0x0924
#define NA_BGM_MINI_GAME_2	    0x0025  /*0x006c*/
#define NA_BGM_ZORA_RACE	    0x0025  /*0x006c*/
#define NA_BGM_GORON_RACE	    0x0026
#define NA_BGM_ORGEL_HOUSE 	    0x0027
#define NA_BGM_GODESS 		    0x0028
#define NA_BGM_HIME 		    0x0029
#define NA_BGM_SISTER_DANCER	    0x002a
#define NA_BGM_OPEN_TRE_BOX	    0x092b
#define NA_BGM_DRUGSTORE	    0x002c  /*0x0060*/
#define NA_BGM_KYOJIN_ROOM		    0x002d
#define NA_BGM_FUSHA		    0x002e  /*0x004c*/
#define NA_BGM_RONRON		    0x002f

#define NA_BGM_GORON		    0x0030
#define NA_BGM_MEETING		    0x0031

#define NA_BGM_OCA_EPONA	    0x0032  /*0x0045*/
#define NA_BGM_OCA_SUN		    0x0033  /*0x0047*/
#define NA_BGM_OCA_TIME_NORMAL	    0x0034  /*0x0048*/
#define NA_BGM_OCA_STORM	    0x0035  /*0x0049*/

#define NA_BGM_ZORA		    0x0036  /*0x0050*/
#define NA_BGM_MASK_GET		    0x0037
#define NA_BGM_MIDDLE_BOSS	    0x0038
#define NA_BGM_S_ITEM_GET	    0x0039
#define NA_BGM_TENMONDAI	    0x003a
#define NA_BGM_NORMAL_DUNGEON	    0x003b
#define NA_BGM_MILK_BAR		    0x003c
#define NA_BGM_APPEAR		    0x003d  /*0x0051*/

#define NA_BGM_MAYOIMORI	    0x003e
#define NA_BGM_SOUL_DUNGEON	    0x003f
#define NA_BGM_GORON_GOAL	    0x003f
#define NA_BGM_HORSE		    0x0040
#define NA_BGM_HORSE_GOAL	    0x0041
#define NA_BGM_INGO		    0x0042
#define NA_BGM_KOTAKE_KOUME	    0x0043  /*0x0061*/
#define NA_BGM_SHOP		    0x0044  /*0x0055*/
#define NA_BGM_OWL		    0x0045  /*0x005a*/
#define NA_BGM_MINI_GAME	    0x0046  /*0x004e*/

#define NA_BGM_OCA_BIGWING	    0x0047  /*0x0044*/
#define NA_BGM_OCA_CURE		    0x0048  /*0x0046*/
#define NA_BGM_OCA_TIME_SPEED	    0x0049  /*0x006d*/
#define NA_BGM_OCA_TIME_JUMP	    0x004a  /*0x006e*/

#define NA_BGM_DEMO_AWAKING	    0x004b  /*0x0025*/
#define NA_BGM_DEMO_LULLABY	    0x004c  /*0x0033*/
#define NA_BGM_DEMO_LULLABY_FULL	    0x004c  /*0x0033*/
#define NA_BGM_DEMO_TIDE		    0x004d  /*0x0034*/
#define NA_BGM_DEMO_SHELL	    0x004e  /*0x0035*/
#define NA_BGM_DEMO_PLEDGE	    0x004f  /*0x0036*/
#define NA_BGM_EXERCISE_HALL	    0x0050
#define NA_BGM_DEMO_LULLABY_HALF	    0x0051  /*0x0033*/
#define NA_BGM_OCA_YOUSEI	    0x0052
#define NA_BGM_FACEMASK		    0x0053
#define NA_BGM_QUARTET		    0x0054
#define NA_BGM_WING_WARP	    0x0055
#define NA_BGM_MILK_BAR_DUMMY	    0x0056
#define NA_BGM_TIME_LIMIT	    0x0057
#define NA_BGM_MIKAU_LIFF	    0x0058
#define NA_BGM_MIKAU_FIN	    0x0059
#define NA_BGM_FROG_SONG	    0x005a

#define NA_BGM_OCA_AWAKING	    0x005b
#define NA_BGM_OCA_LULLABY	    0x005c
#define NA_BGM_OCA_LULLABY_FULL	    0x005c
#define NA_BGM_OCA_TIDE		    0x005d
#define NA_BGM_OCA_SHELL	    0x005e
#define NA_BGM_OCA_PLEDGE	    0x005f
#define NA_BGM_LAST_DUNGEON	    0x0060
#define NA_BGM_OCA_LULLABY_HALF	    0x0061
#define NA_BGM_OCA_SESSION	    0x0062
#define NA_BGM_DEMO_SESSION	    0x0063
#define NA_BGM_ALLPART_SESSION	    0x0064
#define NA_BGM_SILVER_DUNGEON	    0x0065
#define NA_BGM_DEEPBLUE_DUNGEON	    0x0066
#define NA_BGM_DEMO_TIDE_SAX	    0x0067
#define NA_BGM_DEMO_TIDE_VOCAL	    0x0068
#define NA_BGM_MUJURA_1		    0x0069
#define NA_BGM_MUJURA_2		    0x006a
#define NA_BGM_MUJURA_3		    0x006b
#define NA_BGM_BASS_PLAY	    0x006c
#define NA_BGM_DRUMS_PLAY	    0x006d
#define NA_BGM_PIANO_PLAY	    0x006e
#define NA_BGM_IKANA_CASTLE	    0x006f
#define NA_BGM_GATHERING	    0x0070
#define NA_BGM_CAMARO_DANCE	    0x0071
#define NA_BGM_DONKEY_CART	    0x0072
#define NA_BGM_QUIZ		    0x0073
#define NA_BGM_END_DEMO		    0x0074
#define NA_BGM_OPENING_LOOP	    0x0075
#define NA_BGM_TITLE		    0x0076
#define NA_BGM_DUNGEON_APPEAR	    0x0077
#define NA_BGM_PURIFICATION_0	    0x0078
#define NA_BGM_PURIFICATION_1	    0x0079
#define NA_BGM_STANDBY		    0x007a
#define NA_BGM_INTO_THE_MOON	    0x007b
#define NA_BGM_GOODBYE_GIANT	    0x007c
#define NA_BGM_CHAT		    0x007d
#define NA_BGM_MOON_VANISH	    0x007e

#define NA_BGM_OCA_MUS		    0x0077
#define NA_BGM_DEMO_SE_SEQ	    0x0075



/*** not used ***/
#define NA_BGM_KAKARIKO_ADULT	    0x0019
#define NA_BGM_DUNGEON		    0x0018
#define NA_BGM_OPENING_GANON	    0x0023
#define NA_BGM_FIRE_DUNGEON	    0x002a
#define NA_BGM_FORST_DUNGEON	    0x002c
#define NA_BGM_HIRAL_GARDEN	    0x002d
#define NA_BGM_GANON_TOWER	    0x002e
#define NA_BGM_NARRATION_0	    0x002e
#define NA_BGM_SPIRIT_STONE	    0x0032
#define NA_BGM_OCA_FLAME	    0x0033
#define NA_BGM_OCA_WIND		    0x0034
#define NA_BGM_OCA_WATER	    0x0035
#define NA_BGM_OCA_SOUL		    0x0036
#define NA_BGM_OCA_DARKNESS	    0x0037
#define NA_BGM_KOKIRI		    0x003c
#define NA_BGM_MEDAL_GET	    0x0043

#define NA_BGM_NAVI		    0x004a
#define NA_BGM_DEKUNOKI		    0x004b
#define NA_BGM_HIRAL_DEMO	    0x004d
#define NA_BGM_SEAK		    0x004f
#define NA_BGM_MASTER_SWORD	    0x0053
#define NA_BGM_INTRO_GANON	    0x0054
#define NA_BGM_DARKNESS_DUNGEON	    0x005b
#define NA_BGM_AQUA_DUNGEON	    0x005c
#define NA_BGM_BRIDGE		    0x005d
#define NA_BGM_SARIA		    0x005e
#define NA_BGM_BYEBYE_SARIA	    0x005e
#define NA_BGM_SHEALED_CEREMONY	    0x005e
#define NA_BGM_ESCAPE		    0x0062
#define NA_BGM_UNDERGROUND	    0x0063
#define NA_BGM_GANON_BATTLE_1	    0x0064
#define NA_BGM_GANON_BATTLE_2	    0x0065
#define NA_BGM_STAFF_1		    0x0067
#define NA_BGM_STAFF_2		    0x0068
#define NA_BGM_STAFF_3		    0x0069
#define NA_BGM_STAFF_4		    0x006a

#define NA_BGM_OCA_SARIA	    0x0044
/*#define NA_BGM_OCA_EPONA	    0x0045*/
#define NA_BGM_OCA_ZELDA	    0x0046
#define NA_BGM_OCA_SUNMOON	    0x0047
#define NA_BGM_OCA_TIME		    0x0048
/* #define NA_BGM_OCA_STORM	    0x0049 */
#define NA_BGM_OCA_LIGHT	    0x0025

#define NA_BGM_FAIRY_DUNGEON	    0x001c
#define NA_BGM_BUYO_DANGEON 	    0x0026
#define NA_BGM_BUYO_DUNGEON 	    0x0026

#define NA_BGM_ICE_DUNGEON	    0x003b  /*0x0058*/
#define NA_BGM_KAKARIKO_KID 	    0x0027
#define NA_BGM_ADULT_LINK	    0x002a  /*0x0052*/
#define NA_BGM_MORINIG_FIELD	    0x0031
#define NA_BGM_OCA_RESERVE	    0x0060
#define NA_BGM_SHRINE_OF_TIME	    0x003a
#define NA_BGM_GERUDO		    0x003c  /*0x005f*/
#define NA_BGM_ENDING_TEST	    0x0056
#define NA_BGM_KENJA		    0x002d  /*0x0056*/


#if 0
//#define NA_BGM_OCA_LIGHT	    0x0925
//#define NA_BGM_OCA_WATER	    0x0025
//#define NA_BGM_OCA_WIND		    0x0025
//#define NA_BGM_OCA_FLAME	    0x0025
//#define NA_BGM_OCA_SOUL		    0x0025
//#define NA_BGM_OCA_DARKNESS	    0x0025
#endif

/* ********************************************
	    CHECK PLAYING BGM
   ******************************************** */

#define NA_BGM_CHK_NOW_PLAYING	    1
#define NA_BGM_CHK_NOT_ENTRY	    0


/* ********************************************
	    SOUND SPEC MODE
   ******************************************** */
   
#define NA_MODE_GROUND_SMALL	    0x00
#define NA_MODE_GROUND_MIDDLE	    0x01
#define NA_MODE_GROUND_LARGE	    0x02
#define NA_MODE_DUNGEON_SMALL	    0x03
#define NA_MODE_DUNGEON_LARGE	    0x04
#define NA_MODE_HOUSE_SMALL	    0x05
#define NA_MODE_HOUSE_LARGE	    0x06
#define NA_MODE_FOREST		    0x07
#define NA_MODE_DESERT		    0x08
#define NA_MODE_GROUND_CANYON	    0x09
#define NA_MODE_TITLE		    0x0a    /* FILE SELECT */
#define NA_MODE_TITLE_DEMO	    0x0b
#define NA_MODE_STAFFROLL	    0x0b    /* not use*/
#define NA_MODE_ENDINGDEMO	    0x0c    /* staff roll*/
#define NA_MODE_LHOUSE_FOREST	    0x0d
#define NA_MODE_MGROUND_SDUNGEON    0x0e


/* ********************************************
	    NARRATION SEQ DEFINE 
   ******************************************** */
#define NA_BGM_NARRATION_MUTE_VOL   64
#define NA_BGM_NARRATION_MUTE_TIME   25
#define NA_NAR_HIRAL		NA_BGM_NARRATION_0


/* ********************************************
	    OCARINA BGM INST 
   ******************************************** */

#define NA_BGM_OCAINST_LINK	    53
#define NA_BGM_OCAINST_GORON	    92
#define NA_BGM_OCAINST_ZORA	    93
#define NA_BGM_OCAINST_DEKUNUTS	    94


/* ********************************************
	    OCARINA DEFINE
   ******************************************** */
   
#define NA_OCA_NOT_CHECK	    0xff
#define NA_OCA_NOW_CHECK	    0xfe

#define NA_OCA_MELODY_MAX	    24	/*16	*/	/* 15 *//* 12 */
#define NA_OCA_LEARN_MELODY_MAX	    0x15	/*16	*/	/* 15 *//* 12 */
#define NA_OCA_REC_BUF_SIZE	108	/* 250 */
#define NA_OCA_REC_BUF_STC	8	/* 6 */
#define NA_OCA_REC_MEMORY_SIZE	(NA_OCA_REC_BUF_SIZE*NA_OCA_REC_BUF_STC)
#define NA_OCA_REC_BUF_SIZE2	16
#define NA_OCA_REC_MEMORY_SIZE2	(NA_OCA_REC_BUF_SIZE2*NA_OCA_REC_BUF_STC)

#define NA_OCA_BTN_A	    0
#define NA_OCA_BTN_CD	    1
#define NA_OCA_BTN_CR	    2
#define NA_OCA_BTN_CL	    3
#define NA_OCA_BTN_CU	    4

#define NA_OCA_CHK_STOP		0xff
#define NA_OCA_CHK_CHECK	0xfe
#define NA_OCA_CHK_MELO_0	0x00
#define NA_OCA_CHK_MELO_1	0x01

#define NA_OCA_CHK_AWAKING	0x00
#define NA_OCA_CHK_LULLABY	0x01
#define NA_OCA_CHK_LULLABY_FULL	0x01
#define NA_OCA_CHK_TIDE		0x02
#define NA_OCA_CHK_SHELL	0x03
#define NA_OCA_CHK_PLEDGE	0x04
#define NA_OCA_CHK_RESERVE	0x05
#define NA_OCA_CHK_SARIA	0x05

#define NA_OCA_CHK_TIME_NORMAL	0x06
#define NA_OCA_CHK_CURE		0x07
#define NA_OCA_CHK_EPONA	0x08
#define NA_OCA_CHK_BIGWING	0x09
#define NA_OCA_CHK_STORM	0x0a
#define NA_OCA_CHK_SUN		0x0b

#define NA_OCA_CHK_TIME_SPEED	0x0c
#define NA_OCA_CHK_TIME_JUMP	0x0d
#define	NA_OCA_CHK_LULLABY_HALF	0x0e
#define	NA_OCA_CHK_QUARTET_LINK	0x0f
#define	NA_OCA_CHK_QUARTET_DEKUNUTS 0x12
#define	NA_OCA_CHK_QUARTET_ZORA	0x11
#define	NA_OCA_CHK_QUARTET_GORON    0x10
#define	NA_OCA_CHK_SESSION_1    0x13
#define	NA_OCA_CHK_SESSION_2    0x14
#define NA_OCA_CHK_ZELDA	0x15

#define	NA_OCA_CHK_RECMELODY2	0x16
#define	NA_OCA_CHK_RANDOM	0x17
#define	NA_OCA_CHK_RECMELODY	NA_OCA_MELODY_MAX
#define	NA_OCA_CHK_NORMAL_MELODY    (NA_OCA_CHK_LULLABY_HALF+1)
#define	NA_OCA_CHK_FIXED_MELODY	(NA_OCA_CHK_RECMELODY2)	/* NA_OCA_CHK_ZELDA+1 */

#define NA_OCA_CHK_LEGEND	0x08
#define NA_OCA_CHK_GAME		0x0e


#define NA_OCA_CHK_ZELDA_WARP	NA_OCA_CHK_IMPA

#define NA_OCA_CHK_GRP_EVERY	0x17fff	/*0x7fff*/
#define NA_OCA_CHK_GRP_ALL2	0x3fff	/*0x1fff*/
#define NA_OCA_CHK_GRP_ALL	0x3fff
#define NA_OCA_CHK_GRP_ALLH	0x7ffd
#define NA_OCA_CHK_GRP_WARP	0x003f
#define NA_OCA_CHK_GRP_GROUND	0x8480
#define NA_OCA_CHK_GRP_ZELDA	0x0040
#define NA_OCA_CHK_MODE_STOP	0xffff

#define NA_OCA_INST_OCARINA	0x01
#define NA_OCA_INST_MALON	0x02
#define NA_OCA_INST_IMPA	0x03	/* not use */
#define NA_OCA_INST_HARP	0x04
#define NA_OCA_INST_STARU	0x05
#define NA_OCA_INST_WINDMILL	0x05	/* not use */
#define NA_OCA_INST_BELL	0x06
#define NA_OCA_INST_PICCOLO	0x06	/* not use */
#define NA_OCA_INST_FLUTE	0x06

#define NA_OCA_INST_ORGAN	0x05

#define NA_OCA_INST_GORON	0x07
#define NA_OCA_INST_ZORA	0x08
#define NA_OCA_INST_DEKUNUTS	0x09
#define NA_OCA_INST_MONKEY	0x0a
#define NA_OCA_INST_QUIET_DEKUNUTS  0x0b
#define NA_OCA_INST_ELDER_GORON	0x0c
#define NA_OCA_INST_OMENYA	0x0d
#define NA_OCA_INST_JAPAS	0x0e
#define NA_OCA_INST_GORONKID	0x0f
#define NA_OCA_INST_LOUD_ZORA	0x10

/*** Test Inst***/
#define NA_OCA_INST_HARPSICORD	0x07
#define NA_OCA_INST_STRINGS	0x08
#define NA_OCA_INST_TRAMPET	0x09
#define NA_OCA_INST_GLOCKEN	0x0a
#define NA_OCA_INST_HARMONICA	0x0b
#define NA_OCA_INST_CUITAR	0x0c
#define NA_OCA_INST_NAX		0x0f

#define NA_OCA_INST_ZORAKIDS	0x0c


#define NA_OCA_SEQ_PLAY		0x01
#define NA_OCA_SEQ_STOP		0x00

#define NA_OCA_REC_RUNNING	0x01
#define NA_OCA_REC_STOP		0x00
#define NA_OCA_REC_BAD		0xff

#define NA_OCA_GAME_MAX		0x01
#define NA_OCA_GAME_SHORTAGE	0x00

#define NA_OCA_FROG_NOTES	14

#define	NA_OCA_ERR_CODE_NOWCHECK    0
#define	NA_OCA_ERR_CODE_BADKEY	    1
#define	NA_OCA_ERR_CODE_BADBUTTON   NA_OCA_ERR_CODE_BADKEY
#define	NA_OCA_ERR_CODE_SHORT	    2
#define	NA_OCA_ERR_CODE_FAST	    NA_OCA_ERR_CODE_SHORT
#define	NA_OCA_ERR_CODE_LONG	    3
#define	NA_OCA_ERR_CODE_SLOW	    NA_OCA_ERR_CODE_LONG
#define	NA_OCA_ERR_CODE_BADSTICK    4
#define	NA_OCA_ERR_CODE_RIGHT	    5
#define	NA_OCA_ERR_CODE_NOCHECK	    0xff

#define NA_OCA_TEMPO_WIND	58
#define NA_OCA_TEMPO_FLAME	49
#define NA_OCA_TEMPO_WATER	58
#define NA_OCA_TEMPO_SOUL	73
#define NA_OCA_TEMPO_DARKNESS	58
#define NA_OCA_TEMPO_LIGHT	49
#define NA_OCA_TEMPO_SPIRIT	55
#define NA_OCA_TEMPO_EPONA	58
#define NA_OCA_TEMPO_ZELDA	41
#define NA_OCA_TEMPO_SUNMOON	20
#define NA_OCA_TEMPO_TIME	52
#define NA_OCA_TEMPO_STORM	36

/* old flag */
#define NA_OCA_CHK_WIND		0x00
#define NA_OCA_CHK_FLAME	0x01
#define NA_OCA_CHK_WATER	0x02
#define NA_OCA_CHK_SOUL		0x03
#define NA_OCA_CHK_DARKNESS	0x04
#define NA_OCA_CHK_LIGHT	0x05
#define NA_OCA_CHK_SPIRIT	0x06
/* #define NA_OCA_CHK_EPONA	0x07 */
/* #define NA_OCA_CHK_ZELDA	0x08 */
#define NA_OCA_CHK_SUNMOON	0x09
#define NA_OCA_CHK_TIME		0x0a
/* #define NA_OCA_CHK_STORM	0x0b	*/
#define NA_OCA_CHK_IMPA		0x09
#define NA_OCA_CHK_MYSTERY	0x0b


/* ********************************************
	    BGM SEND FLAG
   ******************************************** */
   
#define NA_BGM_SEND_FLAG_NULL	    0xff


/* ********************************************
	    CHECK FLAG
   ******************************************** */
   
#define NA_FLAG_NO_ENTRY	    0
#define NA_FLAG_NOW_PLAYING	    1


/* ********************************************
	    CHECK FLAG
   ******************************************** */
   
#define NA_SWITCH_OFF	    0
#define NA_SWITCH_ON	    1


/* ********************************************
	    SWITCH MUTE FLAG
   ******************************************** */
   
#define NA_SWITCH_MUTE_OFF	    0
#define NA_SWITCH_MUTE_ON	    1
#define NA_SWITCH_MUTE_RESTART	    2


/* ********************************************
	    SE WATER FLAG
   ******************************************** */
   
#define NA_WATER_MODE_ON	0x20
#define NA_WATER_MODE_OFF	0x00


/* ********************************************
	    SE TIMER LEVEL
   ******************************************** */
   
#define NA_TIMER_COUNT_LOW	0
#define NA_TIMER_COUNT_MIDDLE	1
#define NA_TIMER_COUNT_HIGH	2

#define NA_TIMER_TERM_WARNING	40
#define NA_TIMER_TERM_CAUTION	100


/* ********************************************
	    RIVER STREAM SPEED MACRO
   ******************************************** */
#define NA_RIVER_SPEED_SLOW	(0.7f)
#define NA_RIVER_SPEED_MIDDLE	(1.0f)
#define NA_RIVER_SPEED_FAST	(1.4f)

/* ********************************************
	    WATERFALL SPEED MACRO
   ******************************************** */
#define NA_WATERFALL_SPEED_SLOW	    (0.5f)
#define NA_WATERFALL_SPEED_NORMAL   (1.0f)


/* ********************************************
	    FROG SOUND
   ******************************************** */
#define NA_FROG_SOUND_A		2
#define NA_FROG_SOUND_CD	5
#define NA_FROG_SOUND_CR	9
#define NA_FROG_SOUND_CL	11
#define NA_FROG_SOUND_CU	14

#define NA_FROG_BIG_SOUND_A	(-10)
#define NA_FROG_BIG_SOUND_CD	(-7)
#define NA_FROG_BIG_SOUND_CR	(-3)
#define NA_FROG_BIG_SOUND_CL	(-1)
#define NA_FROG_BIG_SOUND_CU	2

/* ********************************************
	    FIVE LUPY SOUND
   ******************************************** */
#define NA_LUPY_COUNT_1		0
#define NA_LUPY_SOUND_2		2
#define NA_LUPY_SOUND_3		4
#define NA_LUPY_SOUND_4		5
#define NA_LUPY_SOUND_5		7


/* ********************************************
	    LEVEL MUTE VOLUME
   ******************************************** */
#define NA_LV_MUTE_VOL		90


/* ********************************************
	    FX LINE CHANGE
   ******************************************** */
#define NA_EXTRA_ECHO_ON	2
#define NA_EXTRA_ECHO_OFF	1


/* ********************************************
	    VRS DEFINE
   ******************************************** */
#define NA_VRS_WORD_ATONANJIKAN	    0
#define NA_VRS_WORD_HAICHIHZU	    1
#define NA_VRS_WORD_OKIROH	    2
#define NA_VRS_WORD_OSUWARI	    3
#define NA_VRS_WORD_MIRUKU	    4
#define NA_VRS_WORD_HAIYA	    5
#define NA_VRS_WORD_NULL	    0xffff
#define NA_VRS_WORD_ALL		    0xffff

#define NA_VRS_WORD_IMANANJI	    0
#define NA_VRS_WORD_HIRAKEGOMA	    1
#define NA_VRS_WORD_OHAYOU	    2
#define NA_VRS_WORD_KONNICHIWA	    3
#define NA_VRS_WORD_KONBANWA	    4

/* ********************************************
	    QUARTET BGM PART BIT
   ******************************************** */
   
#define NA_QUARTET_PART_LINK		    0x01
#define NA_QUARTET_PART_DEKUNUTS	    0x02
#define NA_QUARTET_PART_ZORA		    0x04
#define NA_QUARTET_PART_GORON		    0x08


/* ********************************************
	    Enemy Defines
   ******************************************** */
   
#include "audio_enemyflag.h"

