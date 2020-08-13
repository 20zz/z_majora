 //   audio_enemyflag.h
//      programmed by M.Hikino and Mr.Maekawa.
///////////////////////////////////////////////////////////////////////////////

// Misc 
///////////////////////////////////////////////////////////////////////////////

// for level sound between two scenes.
extern void Na_SE_Start_KeepPosPtr(f32 *, u16);

// Restart Level SE(play back to start point.)
#define Na_SE_Restart(p,f)      Na_StopObjFlagSe((p),(f))

// After Touch Staffs
#define NA_STOP_WITH_AT         0   
#define Na_SE_Stop_AT(p,f)      Na_SetSeExclusiveData((p),(f),NA_STOP_WITH_AT)

// Fade Out Staffs
#define Na_SE_Start_forFO(p,f)  Na_StartVolumeSetSe((p),(f),1.0f)
#define Na_SE_Stop_FO(t) Na_SetMoveSoundWorkF32(&na_set_volume_param, 0.0f,(t))

// Fade In Staff
extern void Na_SE_Start_FI(f32 *, u16, u16);

// Staffs for Marching Step
extern u8 Na_SE_Check_March(void);
#define NA_SE_PRM_MARCH_START        1
#define NA_SE_PRM_MARCH_NOT_START    0
#define NA_SE_PRM_MARCH_CHECK        0 // not used now.
#define NA_SE_PRM_MARCH_INIT         1 // not used now.

// Misc Parameters
#define NA_SE_PRM_STALKIDS_PSYCHO    100    // f.o. frames
#define NA_SE_PRM_GOLON_SIRLOIN_EAT  1      // water mode
#define NA_SE_PRM_STALKIDS_IN1       100
#define NA_SE_PRM_STALKIDS_OUT1      150
#define NA_SE_PRM_STALKIDS_IN2       50
#define NA_SE_PRM_STALKIDS_OUT2      80
#define NA_SE_PRM_STALKIDS_IN3       80
#define NA_SE_PRM_LAST2_SHOUT_FO     60


// Enemies and some NPCs.
///////////////////////////////////////////////////////////////////////////////

// evil power //
#define NA_SE_EN_EVIL_POWER          0x3A8D
#define NA_SE_EN_EVIL_POWER2         NA_SE_EN_LAST3_DEAD_DEAD2
#define NA_SE_EN_EVIL_POWER_PREDEMO  0x3AD3
// moon //
#define NA_SE_EN_MOON_SCREAM1        0x3ABF // 「な、なんでも喰う、、」はこれ
#define NA_SE_EN_MOON_SCREAM2        0x3AC0 // 断末魔は BF-(C0-C1)(loop)-C2
#define NA_SE_EN_MOON_SCREAM3        0x3AC1
#define NA_SE_EN_MOON_SCREAM4        0x3AC2
// romani //
#define NA_SE_EN_ROMANI_WALK         0x3ABE

// some npcs (frog & fox) //
#define NA_SE_EN_NPC_APPEAR          0x3A86
#define NA_SE_EN_NPC_FADEAWAY        0x3A87

// for Common /////////////////////////////////////////////////////////////////
#define NA_SE_EN_COMMON_DEADLIGHT    0x31F7
#define NA_SE_EN_COMMON_ICE_BROKEN   NA_SE_EV_ICE_BROKEN_S
#define NA_SE_EN_COMMON_BURNING      NA_SE_EV_BURN_OUT
#define NA_SE_EN_COMMON_ICE_FREEZE   NA_SE_EV_ICE_FREEZE
#define NA_SE_EN_COMMON_FREEZE	    0x389E
#define NA_SE_EN_EXTINCT	          0x3878 // burn away
#define NA_SE_EN_COMMON_EXTINCT_LEV  0x321F
#define NA_SE_EN_CUTBODY             0x393B
// weakened
#define NA_SE_EN_COMMON_WEAKENED     0x301B
// elec_ball
#define NA_SE_EN_COMMON_E_BALL_THR   0x3852
#define NA_SE_EN_COMMON_E_BALL       0x304C
#define NA_SE_EN_COMMON_E_BALL_HIT   0x384E
// thunder 
#define NA_SE_EN_COMMON_THUNDER_THR  0x384D
#define NA_SE_EN_COMMON_THUNDER      0x314B
#define NA_SE_EN_COMMON_THUNDER_HIT  0x384E
// elec_ark 
#define NA_SE_EN_COMMON_ELEC_ARK     0x384F
// water_sound
#define NA_SE_EN_COMMON_WATER_DEEP   0x389C
#define NA_SE_EN_COMMON_WATER_MID    0x38C5
#define NA_SE_EN_COMMON_WATER_SLW    0x38C1

// Thiefbird //////////////////////////////////////////////////////////////////
#define NA_SE_EN_THIEFBIRD_VOICE     0x3A97
#define NA_SE_EN_THIEFBIRD_DAMAGE    0x3A98
#define NA_SE_EN_THIEFBIRD_DEAD      0x3A99

// Invader ////////////////////////////////////////////////////////////////////
#define NA_SE_EN_INVADER_DEAD        0x3A09
#define NA_SE_EN_INVADER_FLOAT       0x320A

// Piranha(mini) //////////////////////////////////////////////////////////////
#define NA_SE_EN_PIRANHA_EXIST       0x31F3
#define NA_SE_EN_PIRANHA_ATTACK      0x39F4
#define NA_SE_EN_PIRANHA_DEAD        0x39F5

// Didhand (Water) ////////////////////////////////////////////////////////////
#define NA_SE_EN_HANDW_GET           0x39FC
#define NA_SE_EN_HANDW_RELEASE       0x39FD

// Hiploop ////////////////////////////////////////////////////////////////////
#define NA_SE_EN_HIPLOOP_RUN         0x3179
#define NA_SE_EN_HIPLOOP_PAUSE       0x397A
#define NA_SE_EN_HIPLOOP_MASC_OFF    0x397B
#define NA_SE_EN_HIPLOOP_FOOT        0x317C
#define NA_SE_EN_HIPLOOP_DAMAGE      0x397D
#define NA_SE_EN_HIPLOOP_DEAD        0x397E
#define NA_SE_EN_HIPLOOP_FOOTSTEP    0x397F
#define NA_SE_EN_HIPLOOP_LAND        0x38DD

// Yuki_Majin /////////////////////////////////////////////////////////////////
#define NA_SE_EN_YMAJIN_HOLD_SNOW    0x3944
#define NA_SE_EN_YMAJIN_THROW        0x3A50
#define NA_SE_EN_YMAJIN_MINI_HOLD    0x3967
#define NA_SE_EN_YMAJIN_MINI_THROW   0x3968
#define NA_SE_EN_YMAJIN_MOVE         0x3169
#define NA_SE_EN_YMAJIN_MINI_MOVE    0x316A
#define NA_SE_EN_YMAJIN_SURFACE      0x396B
#define NA_SE_EN_YMAJIN_HIDE         0x396C
#define NA_SE_EN_YMAJIN_SPLIT        0x396D
#define NA_SE_EN_YMAJIN_UNITE        0x396E
#define NA_SE_EN_YMAJIN_DEAD_BREAK   0x396F
#define NA_SE_EN_YMAJIN_MINI_DAMAGE  0x39F9
#define NA_SE_EN_YMAJIN_DAMAGE       0x39FA

// Utsubo /////////////////////////////////////////////////////////////////////
#define NA_SE_EN_UTSUBO_APPEAR       0x3053
#define NA_SE_EN_UTSUBO_APPEAR_TRG   0x3963
#define NA_SE_EN_UTSUBO_BACK         0x3857
#define NA_SE_EN_UTSUBO_DEAD         0x38D0
#define NA_SE_EN_UTSUBO_DAMAGE       0x38D1
#define NA_SE_EN_UTSUBO_EAT          0x3943
#define NA_SE_EN_UTSUBO_BITE         0x38D7

// Frog ///////////////////////////////////////////////////////////////////////
#define NA_SE_EN_FROG_JUMP           0x395B
#define NA_SE_EN_FROG_GREET          0x395C
#define NA_SE_EN_FROG_HOLD_SLIME     0x395D
#define NA_SE_EN_FROG_THROW_SLIME    0x395E
#define NA_SE_EN_FROG_JUMP_MID       0x395F
#define NA_SE_EN_FROG_KICK           0x3966
#define NA_SE_EN_FROG_PUNCH1         0x3961
#define NA_SE_EN_FROG_PUNCH2         0x3962
#define NA_SE_EN_FROG_ABOVE          0x3963
#define NA_SE_EN_FROG_DOWN           0x3964
#define NA_SE_EN_FROG_JUMP_ABOVE     0x3965
#define NA_SE_EN_FROG_WALK           NA_SE_EV_MONKEY_WALK_WATER
#define NA_SE_EN_FROG_DEAD           0x38D6
#define NA_SE_EN_FROG_REAL           0x38D2
#define NA_SE_EN_FROG_DAMAGE         0x38D3

// Frog_only_for_him_with_big_pamet ///////////////////////////////////////////
#define NA_SE_EN_FROG_VOICE1         0x399F
#define NA_SE_EN_FROG_VOICE2         0x39A1
#define NA_SE_EN_FROG_RUNAWAY        0x39A9
#define NA_SE_EN_FROG_RUNAWAY2       0x39AC

// Pamet //////////////////////////////////////////////////////////////////////
#define NA_SE_EN_PAMET_VOICE         0x38F3
#define NA_SE_EN_PAMET_ROLL          0x30F4
#define NA_SE_EN_PAMET_WALK          0x38F5
#define NA_SE_EN_PAMET_ROAR          0x38F6
#define NA_SE_EN_PAMET_WAKEUP        0x38F7
#define NA_SE_EN_PAMET_REVERSE       0x38F8
#define NA_SE_EN_PAMET_DAMAGE        0x38F9
#define NA_SE_EN_PAMET_DEAD          0x38FA
#define NA_SE_EN_PAMET_LAND          0x38DD
#define NA_SE_EN_PAMET_CUTTER_ON     0x392B // 99.12.16
#define NA_SE_EN_PAMET_CUTTER_OFF    0x392D // 99.12.16

// Big_Pamet //////////////////////////////////////////////////////////////////
#define NA_SE_EN_B_PAMET_ROLL        0x319E
#define NA_SE_EN_B_PAMET_VOICE       0x39A2
#define NA_SE_EN_B_PAMET_REVERSE     0x39A3
#define NA_SE_EN_B_PAMET_BREAK       0x393F //99.11.25

// Big_Slime //////////////////////////////////////////////////////////////////
// New_Big_Slime 
#define NA_SE_EN_B_SLIME_JUMP1       0x392E
#define NA_SE_EN_B_SLIME_JUMP2       0x392F
#define NA_SE_EN_B_SLIME_EAT	       0x38D4 // refreshed 
#define NA_SE_EN_B_SLIME_COMBINE     0x3938
#define NA_SE_EN_B_SLIME_BREAK       0x38DB
#define NA_SE_EN_B_SLIME_PUNCH_MOVE  0x3139
#define NA_SE_EN_B_SLIME_REVERSE     0x38D8 // new 
// Old_Big_Slime.now_not_used. 
#define NA_SE_EN_B_SLIME_BOMB	       0x38D1 
#define NA_SE_EN_B_SLIME_FROG	       0x38D2 
#define NA_SE_EN_B_SLIME_LAUGH	    0x38D5 
#define NA_SE_EN_B_SLIME_FROG_DAMAGE 0x38D3 
#define NA_SE_EN_B_SLIME_FROG_DEAD   0x38D6 
#define NA_SE_EN_B_SLIME_JUMP	       0x38D0 
#define NA_SE_EN_B_SLIME_ATTACK      0x30D7 
#define NA_SE_EN_B_SLIME_FROG_WALK   0x3828 // -> NA_SE_EN_RIZA_ONGND 
#define NA_SE_EN_B_SLIME_AQUA        0x38B9 // 現在不使用(00/02/08) 

// Slime //////////////////////////////////////////////////////////////////////
#define NA_SE_EN_SLIME_JUMP          0x38B9 // 人面スライム用 
#define NA_SE_EN_SLIME_JUMP1         0x38D9 // 顔無しスライム用 
#define NA_SE_EN_SLIME_JUMP2         0x38DA // 顔無しスライム用 
#define NA_SE_EN_SLIME_SURFACE       0x39FE // 人面スライム用
#define NA_SE_EN_SLIME_DAMAGE	       0x38BA
#define NA_SE_EN_SLIME_BREAK	       0x38BB
#define NA_SE_EN_SLIME_DEAD	       0x38BE
#define NA_SE_EN_SLIME_DEFENCE       0x38BF

// Konpeki_Boss ///////////////////////////////////////////////////////////////
#define NA_SE_EN_KONB_DEMO_MOVE      0x3140
#define NA_SE_EN_KONB_JUMP           0x3941
#define NA_SE_EN_KONB_SINK           0x3942
#define NA_SE_EN_KONB_GET            0x3943
#define NA_SE_EN_KONB_JUMP_LEV       0x324E
#define NA_SE_EN_KONB_DAMAGE         0x3945
#define NA_SE_EN_KONB_DEAD           0x3946
#define NA_SE_EN_KONB_DEAD2          0x3953
#define NA_SE_EN_KONB_DEAD_JUMP      0x3959
#define NA_SE_EN_KONB_DEAD_JUMP2     0x395A
#define NA_SE_EN_KONB_BOUND          0x3947
#define NA_SE_EN_KONB_BOUND2         0x3958
#define NA_SE_EN_KONB_INIT           0x3952
#define NA_SE_EN_KONB_BITE           0x3960
#define NA_SE_EN_KONB_EAT            0x3160 // not used now.
#define NA_SE_EN_KONB_PREATTACK      0x322D // 00.2.21
#define NA_SE_EN_KONB_WAIT           0x32AB
// mini fish
#define NA_SE_EN_KONB_MINI_ATTACK    NA_SE_EN_PIRANHA_ATTACK
#define NA_SE_EN_KONB_MINI_DEAD      0x3AB6
#define NA_SE_EN_KONB_MINI_APPEAR    0x3AD6

// Ice_Boss ///////////////////////////////////////////////////////////////////
#define NA_SE_EN_ICEB_BREAK_ROCK     0x393D
#define NA_SE_EN_ICEB_BREAK_ROCK2    0x393E
#define NA_SE_EN_ICEB_FOOTSTEP       0x394A
#define NA_SE_EN_ICEB_CRY            0x394C
#define NA_SE_EN_ICEB_STEAM_LONG     0x394D // not used now
#define NA_SE_EN_ICEB_STEAMS_DEMO    0x394E
#define NA_SE_EN_ICEB_STEAM_DEMO_UP  0x394F
#define NA_SE_EN_ICEB_DEAD           0x3950
#define NA_SE_EN_ICEB_DAMAGE         0x3951

// Bee ////////////////////////////////////////////////////////////////////////
#define NA_SE_EN_BEE_FLY             0x304A
#define NA_SE_EN_BEE_DEAD            NA_SE_EN_CUTBODY

// Kusamushi //////////////////////////////////////////////////////////////////
#define NA_SE_EN_KUSAMUSHI_SKIP      0x387F
#define NA_SE_EN_KUSAMUSHI_HIDE      0x3935
#define NA_SE_EN_KUSAMUSHI_VIBE      0x3849

// Golden_Staltura ////////////////////////////////////////////////////////////
#define NA_SE_EN_STALTURA_APPEAR     0x39C2
#define NA_SE_EN_STALTURA_BOUND      0x39E9

// Eyegole ////////////////////////////////////////////////////////////////////
#define NA_SE_EN_EYEGOLE_DEMO_EYE    0x3993 // by Mae.(same with Goma demo eye)
#define NA_SE_EN_EYEGOLE_EYE         0x3911 // 99.11.26
#define NA_SE_EN_EYEGOLE_BEAM        0x311B // 99.11.26
#define NA_SE_EN_EYEGOLE_WALK        0x3A06 // 99.11.29(same with prestaff)
#define NA_SE_EN_EYEGOLE_ATTACK      0x387B // 99.11.29(same with prestaff)
#define NA_SE_EN_EYEGOLE_DAMAGE      0x3847 // 99.11.29(same with prestaff)
#define NA_SE_EN_EYEGOLE_DEAD        0x3846 // 99.11.29(same with prestaff)
#define NA_SE_EN_EYEGOLE_STAND       0x3A07 // 00.02.10
#define NA_SE_EN_EYEGOLE_SIT         0x3A08 // 00.02.10

// Golon //////////////////////////////////////////////////////////////////////

// imitation_sound 
#define NA_SE_EN_GOLON_JUMP          0x38B5
#define NA_SE_EN_GOLON_SIT_IMT       0x38B1 
#define NA_SE_EN_GOLON_STAND_IMT     0x3867
#define NA_SE_EN_GOLON_CIRCLE        0x39D0
#define NA_SE_EN_GOLON_CIRCLE_OFF    0x39D1
// imitation_sounds_by_Mr.Mae
#define NA_SE_EN_GOLON_LAND          0x387B 
#define NA_SE_EN_GOLON_HARD          0x387B
#define NA_SE_EN_GOLON_WALK          0x38B8
#define NA_SE_EN_GOLON_LAND_BIG      0x3879

// voice 
#define NA_SE_EN_GOLON_COLD          0x38B4
// voice_by_Mr.Mae
#define NA_SE_EN_GOLON_WAKE_UP       0x38FC // ouuoo 
#define NA_SE_EN_GOLON_WAKE_UP_BIG   0x38FC
#define NA_SE_EN_GOLON_EYE_BIG       0x391C
#define NA_SE_EN_GOLON_GOOD_BIG      0x391D // with echo
#define NA_SE_EN_GOLON_CRY           0x39EB // vibrato 
#define NA_SE_EN_GOLON_SIT_DOWN      0x38FD // ouuuu (voice sound)
#define NA_SE_EN_GOLON_SIT_DOWN_BIG  0x38FD
#define NA_SE_EN_GOLON_SNORE1        0x3A1A
#define NA_SE_EN_GOLON_SNORE2        0x3A1B
#define NA_SE_EN_GOLON_VOICE_GENERAL 0x3ABB

// dalmani
#define NA_SE_EN_DALMANI_FLOAT       NA_SE_EN_SHARP_FLOAT
#define NA_SE_EN_DALMANI_A           0x3ACD // voice in message
#define NA_SE_EN_DALMANI_B           0x3ACE // voice in message
#define NA_SE_EN_DALMANI_C           0x3ACF // voice in message
#define NA_SE_EN_DALMANI_D           0x3AD0 // voice in message

// golon_race 
#define NA_SE_EN_GOLON_ROLLING	    0x30F0
#define NA_SE_EN_GOLON_READY	       0x30F1
#define NA_SE_EN_GOLON_DASH	       0x38F2

// golonkid
#define NA_SE_EN_GOLON_KID_CRY       0x30EA
#define NA_SE_EN_GOLON_KID_SOB       0x38E9
#define NA_SE_EN_GOLONKID_WALK       0x39F8
#define NA_SE_EN_GOLONKID_SOB_TALK   0x3A17
#define NA_SE_EN_GOLONKID_YAWN       0x3A18
#define NA_SE_EN_GOLONKID_SNORE      0x3A19

// sirloin_golon
#define NA_SE_EN_GOLON_SIRLOIN_ROLL  0x3203
#define NA_SE_EN_GOLON_SIRLOIN_EAT   0x3205
#define NA_SE_EN_GOLON_VOICE_EATFULL 0x3A04

// daigolon
#define NA_SE_EN_DAIGOLON_SLEEP1     0x39AD
#define NA_SE_EN_DAIGOLON_SLEEP2     0x3907
#define NA_SE_EN_DAIGOLON_SLEEP3     0x30FE

// celebration
#define NA_SE_EN_IWAIGORON_SOLO      0x3ABD
#define NA_SE_EN_IWAIGORON_EVERYBODY 0x3ABC

// Mizu_Dukubaba //////////////////////////////////////////////////////////////
#define NA_SE_EN_MIZUBABA1_MOUTH     0x3860 // same as deku Jr. 
#define NA_SE_EN_MIZUBABA1_ATTACK    0x3861 // same as deku Jr. 
#define NA_SE_EN_MIZUBABA1_DAMAGE    0x381E
#define NA_SE_EN_MIZUBABA2_DAMAGE    0x3807
#define NA_SE_EN_MIZUBABA2_VOICE     0x3006
#define NA_SE_EN_MIZUBABA_DEAD       0x381F
#define NA_SE_EN_MIZUBABA_TRANSFORM  0x3825
#define NA_SE_EN_MIZUBABA2_WALK      0x3027
#define NA_SE_EN_MIZUBABA2_ATTACK    0x3837

// Flying Amos ////////////////////////////////////////////////////////////////
#define NA_SE_EN_FAMOS_FALL          NA_SE_EN_LAST1_FALL
#define NA_SE_EN_FAMOS_REVERSE1      0x3A91
#define NA_SE_EN_FAMOS_REVERSE2      0x3A92
#define NA_SE_EN_FAMOS_VOICE         NA_SE_EN_AMOS_VOICE
#define NA_SE_EN_FAMOS_DAMAGE        NA_SE_EN_AMOS_DAMAGE
#define NA_SE_EN_FAMOS_DEAD          NA_SE_EN_AMOS_DEAD
#define NA_SE_EN_FAMOS_FLOAT         0x3293
#define NA_SE_EN_FAMOS_FLOAT_REVERSE 0x3294
// Amos //
#define NA_SE_EN_AMOS_WALK	         0x3844
#define NA_SE_EN_AMOS_WAVE	         0x3845
#define NA_SE_EN_AMOS_DEAD	         0x3846
#define NA_SE_EN_AMOS_DAMAGE	      0x3847
#define NA_SE_EN_AMOS_VOICE	      0x3848
#define NA_SE_EN_AMOS_FREEZE	      0x389E

// Last_Boss_(1st) ////////////////////////////////////////////////////////////
#define NA_SE_EN_LAST1_FLOAT         0x31E4
#define NA_SE_EN_LAST1_ATTACK        0x39D4
#define NA_SE_EN_LAST1_FALL          0x31D7

#define NA_SE_EN_LAST1_DAMAGE1       0x39D5
#define NA_SE_EN_LAST1_DAMAGE2       0x39D6
#define NA_SE_EN_LAST1_DEAD          0x3A02

#define NA_SE_EN_LAST1_BEAM          0x31D3
#define NA_SE_EN_LAST1_BLOW          0x39D2
#define NA_SE_EN_LAST1_TRANSFORM     0x393C // 99.11.25
#define NA_SE_EN_LAST1_DEMO_BREAK    0x393D // 99.11.25
#define NA_SE_EN_LAST1_DEMO_WALL     0x393E // 99.11.25
#define NA_SE_EN_LAST1_DEMO_EYE      0x393F // 99.11.25
#define NA_SE_EN_LAST1_ATTACK_2ND    0x39E5 // 99.11.26
#define NA_SE_EN_LAST1_ROLLING       0x31E6 // 99.11.30
#define NA_SE_EN_LAST1_GROW_HEAD     0x3888 // 99.12.01
#define NA_SE_EN_LAST1_BEAM2         0x3A1E

// Followers_of_1st_Mujura ////////////////////////////////////////////////////
#define NA_SE_EN_FOLLOWERS_BEAM        0x320B
#define NA_SE_EN_FOLLOWERS_DAMAGE      0x3A0C
#define NA_SE_EN_FOLLOWERS_DEAD        0x3A0D
#define NA_SE_EN_FOLLOWERS_STAY        0x3A67

// Last_Boss_(2nd) ////////////////////////////////////////////////////////////
// orig voices
#define NA_SE_EN_LAST2_VOICE_BALLET    0x3A68
#define NA_SE_EN_LAST2_VOICE_UAUOO1    0X3A69
#define NA_SE_EN_LAST2_VOICE_UAUOO2    0X3A6A
#define NA_SE_EN_LAST2_VOICE_SURPRISED 0x3A6B
#define NA_SE_EN_LAST2_DAMAGE          0x3A6C // with cutbody
#define NA_SE_EN_LAST2_DAMAGE2         0x3A6D // with cutbody
#define NA_SE_EN_LAST2_DEAD            0x3A6E // with cutbody
// edited voices
#define NA_SE_EN_LAST2_BALLET          0x325E
#define NA_SE_EN_LAST2_MOONWALK        0x325F
#define NA_SE_EN_LAST2_UAUOO           0x3A6F
#define NA_SE_EN_LAST2_KOSSAK_A        NA_SE_EN_LAST2_VOICE_UAUOO1
#define NA_SE_EN_LAST2_KOSSAK_B        NA_SE_EN_LAST2_VOICE_UAUOO2
#define NA_SE_EN_LAST2_GYM_A           NA_SE_EN_LAST2_VOICE_UAUOO2
#define NA_SE_EN_LAST2_GYM_B           0x3A70
// comical sound for comical animation
#define NA_SE_EN_LAST2_WAIT            0x31DC // pantmime
#define NA_SE_EN_LAST2_JUMP            0x39DD // jump
// general
#define NA_SE_EN_LAST2_WALK            0x31DB // comocal sound (lev)
#define NA_SE_EN_LAST2_WALK2           0x39E3 // real sound (tri)
#define NA_SE_EN_LAST2_FIRE            0x39D9 
#define NA_SE_EN_LAST2_BIRD            0x31DE
#define NA_SE_EN_LAST2_BIRD2           0x31DF
#define NA_SE_EN_LAST2_LAND            0x38DD
#define NA_SE_EN_LAST2_SURPRISED       NA_SE_EN_LAST2_VOICE_SURPRISED 
// transformation demo
#define NA_SE_EN_LAST2_HEARTBEAT       0x31BC
#define NA_SE_EN_LAST2_PUMP_UP         0x39BA
#define NA_SE_EN_LAST2_GROW_HEAD       0x39BB
#define NA_SE_EN_LAST2_QUAKE           NA_SE_EV_ICE_PILLAR_RISING_TRG // -> env
#define NA_SE_EN_LAST2_SHOUT           0x39B9

// Last_Boss_(3rd) ////////////////////////////////////////////////////////////
// voices
#define NA_SE_EN_LAST3_VOICE_KICK    0x3A53
#define NA_SE_EN_LAST3_VOICE_KOMA    0x3A54 // to use
#define NA_SE_EN_LAST3_VOICE_ROD     0x3A55 // to use
#define NA_SE_EN_LAST3_VOICE_THROW   0x3A56 // to use
#define NA_SE_EN_LAST3_VOICE_LAUGH   0x3A57
#define NA_SE_EN_LAST3_VOICE_TWINROD NA_SE_EN_LAST3_VOICE_LAUGH // to use
#define NA_SE_EN_LAST3_VOICE_DAMAGE  0x3A58
#define NA_SE_EN_LAST3_VOICE_DAMAGE2 0x3A59
#define NA_SE_EN_LAST3_VOICE_DEAD    0x3A5A
// general sounds
#define NA_SE_EN_LAST3_ROD_HOP       0x39CD
#define NA_SE_EN_LAST3_ROD_HOP2      0x39CE
#define NA_SE_EN_LAST3_ROD_WIND      0x39CA
#define NA_SE_EN_LAST3_ROD_FLOOR     0x39CB
#define NA_SE_EN_LAST3_ROD_DANCE     0x31CC
#define NA_SE_EN_LAST3_KICK          NA_SE_EN_LAST3_VOICE_KICK
#define NA_SE_EN_LAST3_DAMAGE        NA_SE_EN_LAST3_VOICE_DAMAGE
#define NA_SE_EN_LAST3_DAMAGE2       NA_SE_EN_LAST3_VOICE_DAMAGE2 // 00.2.28new
#define NA_SE_EN_LAST3_DEAD          NA_SE_EN_LAST3_VOICE_DEAD    // 00.2.28new
#define NA_SE_EN_LAST3_COIL_ATTACK   0x39F1    
#define NA_SE_EN_LAST3_GET_LINK      0x39E7
#define NA_SE_EN_LAST3_ROD_SOFT      0x39EC
#define NA_SE_EN_LAST3_ROD_MID       0x39ED
#define NA_SE_EN_LAST3_ROD_HARD      0x39EF
#define NA_SE_EN_LAST3_ROD_FAILED    NA_SE_EN_LAST3_ROD_MID
#define NA_SE_EN_LAST3_WALK          0x39E3
// for_dead_demo
#define NA_SE_EN_LAST3_DEAD_ROD      0x39B8
#define NA_SE_EN_LAST3_DEAD_WIND1    0x39AF
#define NA_SE_EN_LAST3_DEAD_WIND2    0x39B4
#define NA_SE_EN_LAST3_DEAD_WIND3    0x39B5
#define NA_SE_EN_LAST3_DEAD_FLOAT    0x39BF
#define NA_SE_EN_LAST3_DEAD_LIGHTS   0x39B6
#define NA_SE_EN_LAST3_DEAD_DEAD1    0x39AA
#define NA_SE_EN_LAST3_DEAD_DEAD2    0x39AB
#define NA_SE_EN_LAST3_KOMA          0x322C

// Stalkids ///////////////////////////////////////////////////////////////////
// radioactress voices
#define NA_SE_EN_STAL01_LAUGH        0x3A75 // 1
#define NA_SE_EN_STAL02_LAUGH_SHORT  0x3A76 // 2
#define NA_SE_EN_STAL03_LAUGH_BIG    0x3A77 // 3
#define NA_SE_EN_STAL04_ANGER        0x3A78 // 1
#define NA_SE_EN_STAL05_CYNICAL      0x3A79
#define NA_SE_EN_STAL06_SURPRISED    0x3A7A
#define NA_SE_EN_STAL07_ANTONISHED   0x3A7B // 1
#define NA_SE_EN_STAL08_CRY_BIG      0x3A7C // 1
#define NA_SE_EN_STAL09_SCREAM       0x3A7D 
#define NA_SE_EN_STAL10_LAUGH_SHY    0x3A7E 
#define NA_SE_EN_STAL11_LAUGH_SHY2   0x3A7F 
#define NA_SE_EN_STAL12_LAUGH_KIDLY  0x3A80

#define NA_SE_EN_STAL20_CALL_MOON    0x3A81 // 1
#define NA_SE_EN_STAL20_CALL_MOON2   0x3A82 // 1 same with _CALL_MOON.

#define NA_SE_EN_STAL21_PSYCHO_VOICE 0x3A83 // 1
#define NA_SE_EN_STAL22_LAUGH_KID_L  0x3A8C // 1
#define NA_SE_NE_STAL23_COLD         0x328E // 1 (level)
#define NA_SE_EN_STAL24_SCREAM2      0x3A9D // for demo of Thikai No Gourei
// prorogue_demo
#define NA_SE_EN_STALKIDS_JUMP       0x3908
#define NA_SE_EN_STALKIDS_FADEOUT    0x3909
#define NA_SE_EN_STALKIDS_DOWN       0x3909 /* same as above */
#define NA_SE_EN_STALKIDS_LAUGH      0x390A
#define NA_SE_EN_STALKIDS_SHAKEHEAD  0x390B //
#define NA_SE_EN_STALKIDS_LAUGH2     0x390B /* same as above */
#define NA_SE_EN_STALKIDS_ONGND      0x390C
#define NA_SE_EN_STALKIDS_SURPRISED  0x390D
#define NA_SE_EN_STALKIDS_WALK       0x390E //
#define NA_SE_EN_STALKIDS_REVERSE    0x390F //
#define NA_SE_EN_STALKIDS_FLOAT      0x3910
#define NA_SE_EN_STALKIDS_PSYCHO     NA_SE_SY_STALKIDS_PSYCHO //0x3911(old)
#define NA_SE_EN_STALKIDS_MASK_ON    0x3913 //
#define NA_SE_EN_STALKIDS_MASK_OFF   0x3915 //
#define NA_SE_EN_STALKIDS_RIDE       0x3916
#define NA_SE_EN_STALKIDS_LAUGH_MID  0x391E
#define NA_SE_EN_STALKIDS_LAUGH_MD2  0x3925
#define NA_SE_EN_STALKIDS_BODY       0x3A9A
#define NA_SE_EN_STALKIDS_BODY_LEV   0x329B
// ending
#define NA_SE_EN_STALKIDS_TURN_END   NA_SE_EN_STALKIDS_RIDE
#define NA_SE_EN_STALKIDS_TURN_END2  NA_SE_EN_STALKIDS_MASK_OFF
#define NA_SE_EN_STALKIDS_NOSE       0x3adc
// demo of last day
#define NA_SE_EN_STALKIDS_TURN       0x3920
#define NA_SE_EN_STALKIDS_PRESLAP    0x3920
#define NA_SE_EN_STALKIDS_SLAP       0x38EE
#define NA_SE_EN_STALKIDS_SCREAM     0x3922 // SCREAM
#define NA_SE_EN_STALKIDS_OTEDAMA1   0x392A
#define NA_SE_EN_STALKIDS_OTEDAMA2   0x3923
#define NA_SE_EN_STALKIDS_STRETCH    0x3924
#define NA_SE_EN_STALKIDS_DOWN_K     0x3A84
// demo of old days
#define NA_SE_EN_STALKIDS_UP         NA_SE_EN_NUTS_UP
#define NA_SE_EN_STALKIDS_GASAGOSO   0x3A8F
#define NA_SE_EN_STALKIDS_TAKE_MASK  NA_SE_EN_STALKIDS_MASK_ON
// demo of Thikai No Gourei
#define NA_SE_EN_STALKIDS_SHOULDER   NA_SE_EN_STALKIDS_MASK_OFF
#define NA_SE_EN_STALKIDS_HEAD       NA_SE_EN_STALKIDS_RIDE
#define NA_SE_EN_STALKIDS_HEAD2      0x3A9B
#define NA_SE_EN_STALKIDS_EARTHQUAKE 0x3A9E
#define NA_SE_EN_STALKIDS_HEADACHE   0x3AC3

// demo after bigman stopping the moon
#define NA_SE_EN_STALKIDS_PULLED     0x3AA0
#define NA_SE_EN_STALKIDS_FALL       NA_SE_EN_STALKIDS_MASK_ON
#define NA_SE_EN_MASK_FLOAT          0x329F
// general(not used now?)
#define NA_SE_EN_STALKIDS_CAUGHT     0x3912
#define NA_SE_EN_STALKIDS_DAMAGE     0x3921

// for other monster sequences
#define NA_SE_EN_STALKIDS_TRAN       0x38CC /* bubble_up */
#define NA_SE_EN_STALKIDS_APPEAR     0x3873 /* po_appear */

// Dek-nuts ///////////////////////////////////////////////////////////////////
#define NA_SE_EN_NUTS_VOICE          0x3889 // voice
#define NA_SE_EN_NUTS_UP	          0x387C
#define NA_SE_EN_NUTS_DOWN	          0x387D
#define NA_SE_EN_NUTS_THROW	       0x387E
#define NA_SE_EN_NUTS_WALK	          0x387F
#define NA_SE_EN_NUTS_DAMAGE	       0x3880 // voice
#define NA_SE_EN_NUTS_DEAD	          0x3881 // voice
#define NA_SE_EN_NUT_FAINT	          0x3882 // voice
#define NA_SE_EN_NUTS_FREEZE	       0x389E
#define NA_SE_EN_NUTS_CUTBODY	       0x393B /* not used now? */

// Nemuri Nuts //
#define NA_SE_EN_NEMURI_SLEEP        0x3201
#define NA_SE_EN_NEMURI_WALK_WATER   NA_SE_EV_MONKEY_WALK_WATER

// Akindo Nuts //
#define NA_SE_EN_AKINDO_FLY          0x3285

// Dekuhime //
#define NA_SE_EN_DEKUHIME_WALK       0x3980
#define NA_SE_EN_DEKUHIME_JUMP       0x3980
#define NA_SE_EN_DEKUHIME_TURN       0x3981
#define NA_SE_EN_DEKUHIME_GREET      0x3982
#define NA_SE_EN_DEKUHIME_GREET2     0x3983
#define NA_SE_EN_DEKUHIME_VOICE_SAD  0x398B // voice
#define NA_SE_EN_DEKUHIME_VOICE_JOY  0x398C // voice
#define NA_SE_EN_DEKUHIMA_VOICE_HURY 0x39A7 // voice

// Dekunuts_General(add)
#define NA_SE_EN_NUTS_JUMP           0x398D
#define NA_SE_EN_NUTS_CLOTHES        0x398E
// Sitsuji-nuts
#define NA_SE_EN_SITSUJI_VOICE       0x398F
// King-nuts 
#define NA_SE_EN_KINGNUTS_VOICE      0x39A8
#define NA_SE_EN_KINGNUTS_DAMAGE     0x39F6
// Zako-muts 
#define NA_SE_EN_ZAKONUTS_VOICE      NA_SE_EN_NUT_FAINT
// Akindo
#define NA_SE_EN_AKINDONUTS_HIDE    0x3987
// Deknuts_in_Links_Nightmare //
#define NA_SE_EN_DEKNUTS_DANCE1      0x3918
#define NA_SE_EN_DEKNUTS_DANCE2      0x3919
#define NA_SE_EN_DEKNUTS_DANCE       0x3117
#define NA_SE_EN_DEKNUTS_DANCE_BIG   0x391A
#define NA_SE_EN_DEKNUTS_RUSH        0x3873

// maskget demo
#define NA_SE_EN_BIGNUTS_WALK        0x3AC4
/* not used now */
#define NA_SE_EN_DEKNUTS_DANCE_BIG1  0x391A
#define NA_SE_EN_DEKNUTS_DANCE_BIG2  0x391B
#define NA_SE_EN_DEKNUTS_DANCE_BIG3  0x391E


// 3 Stalfoses (bosu, debu, yase) /////////////////////////////////////////////
// voices //
#define NA_SE_EN_BOSU_ATTACK         0x3A30
#define NA_SE_EN_BOSU_CYNICAL        0x3A31
#define NA_SE_EN_BOSU_LAUGH          0x3A32
#define NA_SE_EN_BOSU_LAUGH_DEMO     0x3A33

#define NA_SE_EN_DEBU_ATTACK         0x3A34
#define NA_SE_EN_DEBU_LAUGH          0x3A35
#define NA_SE_EN_DEBU_PAUSE          0x3A36

#define NA_SE_EN_YASE_ATTACK         0x3A37
#define NA_SE_EN_YASE_LAUGH          0x3A38
#define NA_SE_EN_YASE_PAUSE          0x3A39

#define NA_SE_EN_BOSU_DAMAGE         0x3A3A // with cutbody
#define NA_SE_EN_DEBU_DAMAGE         0x3A3B // with cutbody
#define NA_SE_EN_YASE_DAMAGE         0x3A3C // with cutbody

#define NA_SE_EN_BOSU_DEAD           0x3A3D // with cutbody
#define NA_SE_EN_DEBU_DEAD           0x3A3E // with cutbody
#define NA_SE_EN_YASE_DEAD           0x3A3F // with cutbody

#define NA_SE_EN_DEBU_LAUGH_SHORT    0x3A46 // voice only
#define NA_SE_EN_BOSU_DEAD_VOICE     0x3A5B // voice only
#define NA_SE_EN_DEBU_DEAD_VOICE     0x3A5C // voice only
#define NA_SE_EN_YASE_DEAD_VOICE     0x3A5D // voice only

// voices_with_karakara_sound //
#define NA_SE_EN_BOSU_LAUGH_K        0x3A47 // 0x3A32(used voice)
#define NA_SE_EN_BOSU_LAUGH_DEMO_K   0x3A45 // 0x3A33(used voice)
#define NA_SE_EN_BOSU_LAUGH_BITE     NA_SE_EN_BOSU_LAUGH_DEMO_K
#define NA_SE_EN_BOSU_ATTACK_K       0x3A4C // 0x3A30(used voice)
#define NA_SE_EN_DEBU_LAUGH_K        0x3A42 // 0x3A35(used voice)
#define NA_SE_EN_DEBU_LAUGH_SHORT_K  0x3A41 // 0x3A35(used voice)
#define NA_SE_EN_DEBU_PAUSE_K        0x3A40 // 0x3A36(used voice)
#define NA_SE_EN_YASE_LAUGH_K        0x3A44 // 0x3A38(used voice)
#define NA_SE_EN_YASE_PAUSE_K        0x3A43 // 0x3A39(used voice)

// voices_with_wind_sound //
#define NA_SE_EN_BOSU_ATTACK_W       0x3A4A // 0x3A30(used voice)
#define NA_SE_EN_DEBU_ATTACK_W       0x3A48 // 0x3A34(used voice)
#define NA_SE_EN_YASE_ATTACK_W       0x3A49 // 0x3A37(used voice)

// for clear demo //
#define NA_SE_EN_DEBU_PAUSEx2        0x3A88
#define NA_SE_EN_YASE_PAUSEx2        0x3A89
#define NA_SE_EN_DEBU_HEAD_UP        0x3A8A
#define NA_SE_EN_YASE_HEAD_UP        0x3A8B
#define NA_SE_EN_YASE_LAUGH_K_LEV    0x3244 // 0x3A38(used voice)

// other_new_flags //
#define NA_SE_EN_BOSU_HEAD_MID       0x3A20
#define NA_SE_EN_BOSU_HEAD_SHORT     0x3A21
#define NA_SE_EN_BOSU_DEMO_HEAD      NA_SE_EN_BOSU_HEAD_MID
#define NA_SE_EN_BOSU_WALK           0x3A26
#define NA_SE_EN_BOSU_SIT            0x3A29
#define NA_SE_EN_BOSU_STAND          0x3A2A
#define NA_SE_EN_BOSU_HAND           0x3A2B
#define NA_SE_EN_BOSU_SHOCK          0x3A2E
#define NA_SE_EN_BOSU_SHIT           0x3A2F
#define NA_SE_EN_BOSU_SWORD          0x3A4D
#define NA_SE_EN_BOSU_TALK           0x3A90
#define NA_SE_EN_BOSU_REACTION       NA_SE_EN_BOSU_STAND // Dokuro Masc Demo
#define NA_SE_EN_BOSU_STAND_RAPID    0x3A9C              // Dokuro Masc Demo
#define NA_SE_EN_BOSU_HAND_UP        NA_SE_EN_BOSU_STAND // Dokuro Masc Demo

#define NA_SE_EN_DEBU_HEAD_MID       0x3A22
#define NA_SE_EN_DEBU_HEAD_SHORT     0x3A23
#define NA_SE_EN_DEBU_WALK           0x3A27

#define NA_SE_EN_YASE_HEAD_MID       0x3A24
#define NA_SE_EN_YASE_HEAD_SHORT     0x3A25
#define NA_SE_EN_YASE_WALK           0x3A28
#define NA_SE_EN_STAL_FREEZE_LIGHTS  0x3A4B
#define NA_SE_EN_BOSU_HEAD_BITE      0x3251
#define NA_SE_EN_BOSU_HEAD_FLOAT     0x3252

// by_Mae. //
#define NA_SE_EN_STAL_WARAU	       0x3838
#define NA_SE_EN_STAL_SAKEBI	       0x3839
#define NA_SE_EN_STAL_DAMAGE	       0x383A
#define NA_SE_EN_STAL_DEAD	          0x383B
#define NA_SE_EN_STAL_JUMP	          0x386C
#define NA_SE_EN_STAL_WALK	          0x383D
#define NA_SE_EN_STAL_DOWN	          0x387A
#define NA_SE_EN_STAL_LAND	          0x387B
#define NA_SE_EN_STAL_FREEZE	       0x389E

// Kita ///////////////////////////////////////////////////////////////////////
#define NA_SE_EN_KITA_SALUTE         0x3AA1
#define NA_SE_EN_KTIA_WALK           0x3AA2
#define NA_SE_EN_KITA_PAUSE          0x3AC5
#define NA_SE_EN_KTIA_PAUSE_K        0x3AA3
#define NA_SE_EN_KITA_LAUGH_K        0x3AA4
#define NA_SE_EN_KITA_DAMAGE         0x3AA5
#define NA_SE_EN_KITA_DEAD           0x3AA6
#define NA_SE_EN_KITA_BREAK          0x3AA9
#define NA_SE_EN_KITA_ATTACK_W       0x3AAA
#define NA_SE_EN_KITA_BREAK_LAND     NA_SE_EN_LAST3_WALK

// Stalbaby ///////////////////////////////////////////////////////////////////
#define NA_SE_EN_STALKID_WALK        0x3830
#define NA_SE_EN_STALKID_ATTACK      0x3831
#define NA_SE_EN_STALKID_DAMAGE      0x3832
#define NA_SE_EN_STALKID_DEAD        0x3833
#define NA_SE_EN_STALKID_APPEAR      0x3986
#define NA_SE_EN_STALKID_HIDE        0x3987
#define NA_SE_EN_STALKID_FREEZE      0x389E
// in message
#define NA_SE_EN_STALBABY_LAUGH      0x3AA7
#define NA_SE_EN_STALBABY_SURPRISED  0x3AA8

// Dai_Octa ///////////////////////////////////////////////////////////////////
#define NA_SE_EN_DAIOCTA_LAND        0x38C3 /* up on water */
#define NA_SE_EN_DAIOCTA_SINK        0x38C4 /* into water */
#define NA_SE_EN_DAIOCTA_BACUME      0x38BE /* bacume attack sound */
#define NA_SE_EN_DAIOCTA_REVERSE     0x3896 /* reverse link */
#define NA_SE_EN_DAIOCTA_DAMAGE      0x38AF /* damage */
#define NA_SE_EN_DAIOCTA_DEAD        0x38AC /* dead */
#define NA_SE_EN_DAIOCTA_DEAD2       0x38AD /* dead and to be small */
/* now not under used. -> */
#define NA_SE_EN_DAIOCTA_MAHI        0x3904
#define NA_SE_EN_DAIOCTA_SPLASH      0x3105
#define NA_SE_EN_DAIOCTA_VOICE       0x3906
#define NA_SE_EN_DAIOCTA_JUMP        0x386C
#define NA_SE_EN_DAIOCTA_LAND_WATER  0x39ED
/* <- */

// Koume //////////////////////////////////////////////////////////////////////
#define NA_SE_EN_KOUME_ILL           0x3900
#define NA_SE_EN_KOUME_DRINK         0x3902
#define NA_SE_EN_KOUME_REGAIN        0x3901
#define NA_SE_EN_KOUME_MAGIC         0x3906
#define NA_SE_EN_KOUME_AWAY          0x3905
#define NA_SE_EN_KOUME_LAUGH         0x3903
#define NA_SE_EN_KOUME_FLY           0x3904 /* not used */
#define NA_SE_EN_KOUME_DAMAGE        0x3AD4
#define NA_SE_EN_KOUME_DAMAGE2       0x3AD5

// Kotake /////////////////////////////////////////////////////////////////////
#define NA_SE_EN_KOTAKE_SURPRISED    0x39FB
#define NA_SE_EN_KOTAKE_SLEEP        0x31FF
#define NA_SE_EN_KOTAKE_SURPRISED2   0x3A00
// flying demo //
#define NA_SE_EN_KOTAKE_ROLL         0x3A95
#define NA_SE_EN_KOTAKE_FLY          0x3296

// Ansatsusya /////////////////////////////////////////////////////////////////
#define NA_SE_EN_ANSATSUSYA_ENTRY    0x3812
#define NA_SE_EN_ANSATSUSYA_CRYING   0x39C0 /* now recieved,but not played. */
#define NA_SE_EN_ANSATSUSYA_SKIP     0x39C1
#define NA_SE_EN_ANSATSUSYA_MOVING   0x31BD /* level */
#define NA_SE_EN_ANSATSUSYA_DASH     0x3812 /* 0x39C2(its old) is not used by anyone. */
#define NA_SE_EN_ANSATSUSYA_DASH_2   0x39BE
#define NA_SE_EN_ANSATSUSYA_JUMP     0x39C3 // for little boss type
#define NA_SE_EN_ANSATSUSYA_FALL     0x39C4 // for little boss type
#define NA_SE_EN_ANSATSUSYA_DAMAGE   0x39C5
#define NA_SE_EN_ANSATSUSYA_DEAD     0x39C6
#define NA_SE_EN_ANSATSUSYA_SWORD    0x39C7
#define NA_SE_EN_ANSATSUSYA_LAUGH    0x3AC6
#define NA_SE_EN_ANSATSUSYA_APPEAR   NA_SE_EN_PO_ROLL
#define NA_SE_EN_ANSATSUSYA_ONGND    0x3AD9
#define NA_SE_EN_ANSATSUSYA_ROCK     0x3ADA


// Wizrope ////////////////////////////////////////////////////////////////////
#define NA_SE_EN_WIZ_UNARI	          0x38A4
#define NA_SE_EN_WIZ_RUN	          0x30A5
#define NA_SE_EN_WIZ_VOICE	          0x30A6
#define NA_SE_EN_WIZ_LAUGH	          0x38A7
#define NA_SE_EN_WIZ_ATTACK	       0x38A8
#define NA_SE_EN_WIZ_DAMAGE	       0x38A9
#define NA_SE_EN_WIZ_DEAD	          0x38AA
#define NA_SE_EN_WIZ_EXP	          0x30AB
#define NA_SE_EN_WIZ_DISAPPEAR	    0x3877
#define NA_SE_EN_WIZ_LAUGH2          0x38B0

// bakuo //////////////////////////////////////////////////////////////////////
#define NA_SE_EN_BAKUO_APPEAR        0x39C9
#define NA_SE_EN_BAKUO_VOICE         0x38FB
#define NA_SE_EN_BAKUO_ROLL          0x3005
#define NA_SE_EN_BAKUO_DEAD          0x39C8

// Deku-Baba //////////////////////////////////////////////////////////////////
#define NA_SE_EN_DEKU_MOUTH	       0x385C
#define NA_SE_EN_DEKU_ATTACK	       0x385D
#define NA_SE_EN_DEKU_DAMAGE	       0x385E
#define NA_SE_EN_DEKU_DEAD	          0x385F
#define NA_SE_EN_DEKU_JR_MOUTH	    0x3860
#define NA_SE_EN_DEKU_JR_ATTACK	    0x3861
#define NA_SE_EN_DEKU_JR_DEAD	       0x3862
#define NA_SE_EN_DEKU_SCRAPE	       0x3863
#define NA_SE_EN_DEKU_FALL	          0x387B
#define NA_SE_EN_DEKU_FREEZE	       0x389E
#define NA_SE_EN_DEKU_WAKEUP	       0x39E2

// Odoruwa ////////////////////////////////////////////////////////////////////
#define NA_SE_EN_MIBOSS_RHYTHM       0x3010 // at entry
#define NA_SE_EN_MIBOSS_FALL         0x3008 // at entry
#define NA_SE_EN_MIBOSS_DASH         0x380A 
#define NA_SE_EN_MIBOSS_GND1         0x380C 
#define NA_SE_EN_MIBOSS_GND2         0x380E 
#define NA_SE_EN_MIBOSS_UNARI        0x380F /* Perhaps not used at there now,
															 but it is used in GOMA. */
#define NA_SE_EN_MIBOSS_SWORD        0x3811 
#define NA_SE_EN_MIBOSS_SWORD2       0x3812 
#define NA_SE_EN_MIBOSS_JUMP1        0x3813 
#define NA_SE_EN_MIBOSS_JUMP2        0x3014

#define NA_SE_EN_MB_MOTH_FLY         0x319B /* new (00/01/18) */
#define NA_SE_EN_MB_MOTH_DEAD        0x399C /* new (00/01/18) */
#define NA_SE_EN_MB_INSECT_WALK      0x319D /* new (00/01/18) */
#define NA_SE_EN_MB_INSECT_DEAD      0x3807 /* new (00/01/18) */

#define NA_SE_EN_MIBOSS_VOICE1       0x3015 /* Trg->Lev.(00/01/18) */
#define NA_SE_EN_MIBOSS_VOICE2       0x3016 /* Trg->Lev.(00/01/18) */ 
#define NA_SE_EN_MIBOSS_VOICE3       0x3017 /* Trg->Lev.(00/01/18) */

#define NA_SE_EN_MIBOSS_ROLLING      0x381D
#define NA_SE_EN_MIBOSS_DAMAGE       0x3809 
#define NA_SE_EN_MIBOSS_FAINT        0x381C // now only used in in_boss.
#define NA_SE_EN_MIBOSS_DEAD         0x380B // and 38AF
#define NA_SE_EN_MIBOSS_FREEZE       0x3A4F // dmg.voice & common freeze

// Bubble /////////////////////////////////////////////////////////////////////
#define NA_SE_EN_BUBLE_WING          0x38C8
#define NA_SE_EN_BUBLE_MOUTH         0x38C9
#define NA_SE_EN_BUBLE_LAUGH         0x38CA
#define NA_SE_EN_BUBLE_BITE          0x38CB
#define NA_SE_EN_BUBLE_UP            0x38CC
#define NA_SE_EN_BUBLE_DOWN          0x38CD
#define NA_SE_EN_BUBLE_DEAD          0x38CE
#define NA_SE_EN_BUBLE_LAND          0x387B
#define NA_SE_EN_BUBLE_FREEZE        0x389E
#define NA_SE_EN_BUBLE_DAMAGE        0x38E3

// Inisie_Boss ////////////////////////////////////////////////////////////////
#define NA_SE_EN_INBOSS_SAND         0x3018
#define NA_SE_EN_INBOSS_ROAR         0x3819
#define NA_SE_EN_INBOSS_DAMAGE       0x381A
#define NA_SE_EN_INBOSS_DEAD_PRE     0x381A
#define NA_SE_EN_INBOSS_DEAD_PRE2    0x3A0E
#define NA_SE_EN_INBOSS_DEAD         0x3A1D

// Ikurame ////////////////////////////////////////////////////////////////////
#define NA_SE_EN_IKURA_JUMP1         0x3A0F
#define NA_SE_EN_IKURA_JUMP2         0x3A10
#define NA_SE_EN_IKURA_DAMAGE        0x3A11
#define NA_SE_EN_IKURA_DEAD          0x3A12
#define NA_SE_EN_IKURA_COMBINE       0x38D4
#define NA_SE_EN_ME_DEMO_EYE         0x3993
#define NA_SE_EN_ME_DAMAGE           0x3A13
#define NA_SE_EN_ME_DEAD             0x3A14
#define NA_SE_EN_ME_EXIST            0x3215
#define NA_SE_EN_ME_ATTACK           0x3216

// Bublefall //////////////////////////////////////////////////////////////////
#define NA_SE_EN_BUBLEFALL_APPEAR   0x3A1C
#define NA_SE_EN_BUBLEFALL_FIRE     0x30CF /* by Mae */

// Pirate(old:gerudo soldier) /////////////////////////////////////////////////

// radioactress voice for demo
#define NA_SE_EN_PIRATE_COOL_LAUGH  0x3A71
#define NA_SE_EN_PIRATE_CYNICAL     0x3A72
#define NA_SE_EN_PIRATE_DAMM_BREATH 0x3A73
#define NA_SE_EN_PIRATE_SHOUT       0x3A74
#define NA_SE_EN_PIRATE_BREATH      0x39B7
#define NA_SE_EN_PIRATE_ATTACK      0x3998
#define NA_SE_EN_PIRATE_DAMAGE      0x3999
#define NA_SE_EN_PIRATE_DEAD        0x399A

// voices for battle 
#define NA_SE_EN_GERUDOFT_ATTACK    NA_SE_EN_PIRATE_ATTACK
#define NA_SE_EN_GERUDOFT_BREATH    NA_SE_EN_PIRATE_BREATH
#define NA_SE_EN_GERUDOFT_DAMAGE    NA_SE_EN_PIRATE_DAMAGE
#define NA_SE_EN_GERUDOFT_DEAD      NA_SE_EN_PIRATE_DEAD 

// common
#define NA_SE_EN_PIRATE_SWORD       NA_SE_EN_BOSU_SWORD
#define NA_SE_EN_PIRATE_ONGND       0x3A66

#define NA_SE_EN_GERUDOFT_DOWN      0x387A
#define NA_SE_EN_GERUDOFT_WALK      0x39A0
#define NA_SE_EN_GERUDOFT_JUMP      0x386C
#define NA_SE_EN_GERUDOFT_FREEZE    0x389E
#define NA_SE_EN_GERUDOFT_LAUGH     0x39B9

// Sharp(Musician of Po) //////////////////////////////////////////////////////
#define NA_SE_EN_SHARP_FLOAT        0x3260
#define NA_SE_EN_SHARP_REACTION     0x3A61
#define NA_SE_EN_SHARP_ROLL1        NA_SE_EN_LAST3_DEAD_WIND2
#define NA_SE_EN_SHARP_ROLL2        NA_SE_EN_LAST3_DEAD_WIND3
#define NA_SE_EN_SHARP_DISAPPEAR    NA_SE_EN_PO_DISAPPEAR

// Death //////////////////////////////////////////////////////////////////////
#define NA_SE_EN_DEATH_FLOAT        NA_SE_EN_SHARP_FLOAT
#define NA_SE_EN_DEATH_BAT_FLY      NA_SE_EV_BAT_FLY
#define NA_SE_EN_DEATH_SCYTHE       0x3AAC
#define NA_SE_EN_DEATH_ROLL         0x3AAD
#define NA_SE_EN_DEATH_SCYTHE_LEV   0x3AAE
#define NA_SE_EN_DEATH_SCYTHE_ONGND 0x3AAF
#define NA_SE_EN_DEATH_VOICE        0x3AB0
#define NA_SE_EN_DEATH_DAMAGE       0x3AB1
#define NA_SE_EN_DEATH_DEAD         0x3AB2
#define NA_SE_EN_DEATH_ATTACK       0x3AB3
#define NA_SE_EN_DEATH_APPEAR       0x3AB4
#define NA_SE_EN_DEATH_HEARTBREAK   0x3AB5

// Bat ////////////////////////////////////////////////////////////////////////
#define NA_SE_EN_BAT_ATTACK		   0x3840
#define NA_SE_EN_BAT_FLY		      0x3841
#define NA_SE_EN_BAT_DEAD	    	   0x3842

// Po Commons /////////////////////////////////////////////////////////////////
#define NA_SE_EN_PO_LAUGH	         0x38EC
#define NA_SE_EN_PO_CRY  	         0x38ED
#define NA_SE_EN_PO_ROLL 	         0x38EE
#define NA_SE_EN_PO_LAUGH2  	      0x38EF
#define NA_SE_EN_PO_SISTER_DEAD	   0x3886
#define NA_SE_EN_PO_KANTERA	      0x3870
#define NA_SE_EN_PO_FLY	            0x3071
#define NA_SE_EN_PO_AWAY	         0x3072
#define NA_SE_EN_PO_APPEAR	         0x3873
#define NA_SE_EN_PO_DISAPPEAR	      0x3874
#define NA_SE_EN_PO_DAMAGE	         0x3875
#define NA_SE_EN_PO_DEAD	         0x3876
#define NA_SE_EN_PO_DEAD2	         0x3877

// Redead /////////////////////////////////////////////////////////////////////
// by Mae.
#define NA_SE_EN_REDEAD_LAND        0x387A
#define NA_SE_EN_REDEAD_ATTACK      0x38E8
#define NA_SE_EN_REDEAD_AIM         0x38E5
#define NA_SE_EN_REDEAD_CRY         0x38E4
#define NA_SE_EN_REDEAD_DAMAGE      0x38E6
#define NA_SE_EN_REDEAD_DEAD        0x38E7
// for demo
#define NA_SE_EN_REDEAD_WEAKENED1   0x3A62 // 00.2.29(new)
#define NA_SE_EN_REDEAD_WEAKENED_L1 0x3263 // 00.3.01(new)
#define NA_SE_EN_REDEAD_WEAKENED2   0x3A64 // 00.2.29(new)
#define NA_SE_EN_REDEAD_WEAKENED_L2 0x3265 // 00.2.29(new)
// half redead
#define NA_SE_EN_HALF_REDEAD_LOOP     0x32B7
#define NA_SE_EN_HALF_REDEAD_SURPRISE 0x3AB8
#define NA_SE_EN_HALF_REDEAD_SCREAME  0x32B9
#define NA_SE_EN_HALF_REDEAD_TRANS    0x3ABA
#define NA_SE_EN_HALF_REDEAD_WALK     NA_SE_EN_GOLON_WALK
// new
#define NA_SE_EN_REDEAD_REVERSE       0x3ADB

// Flags by Mr.Maekawa ////////////////////////////////////////////////////////

// Bomchu /////////////////////////////////////////////////////////////////////
#define NA_SE_EN_BOMCHU_VOICE       0x3854
#define NA_SE_EN_BOMCHU_AIM         0x3855
#define NA_SE_EN_BOMCHU_RUN         0x3056
#define NA_SE_EN_BOMCHU_WALK        0x3828

// Batta //////////////////////////////////////////////////////////////////////
#define NA_SE_EN_BATTA_FLY          0x30A0
#define NA_SE_EN_BATTA_ATTACK       0x38A1
#define NA_SE_EN_BATTA_DAMAGE       0x38A2
#define NA_SE_EN_BATTA_DEAD         0x38A3

#define NA_SE_EN_DODO_J_WALK	      0x3800
#define NA_SE_EN_DODO_J_CRY	      0x3801
#define NA_SE_EN_DODO_J_FIRE	      0x3002
#define NA_SE_EN_DODO_J_DAMAGE	   0x3803
#define NA_SE_EN_DODO_J_DEAD	      0x3804
#define NA_SE_EN_DODO_K_CRY	      0x3805
#define NA_SE_EN_DODO_K_DAMAGE      0x3806
#define NA_SE_EN_DODO_K_DEAD	      0x3807
#define NA_SE_EN_DODO_K_WALK	      0x3808
#define NA_SE_EN_DODO_K_FIRE	      0x3009

#define NA_SE_EN_GOMA_WALK	         0x380A
#define NA_SE_EN_GOMA_HIGH	         0x380B
#define NA_SE_EN_GOMA_CLIM	         0x380C
#define NA_SE_EN_GOMA_DOWN	         0x380D
#define NA_SE_EN_GOMA_CRY1	         0x380E
#define NA_SE_EN_GOMA_CRY2	         0x380F
#define NA_SE_EN_GOMA_DAM1	         0x3810
#define NA_SE_EN_GOMA_DAM2	         0x3811
#define NA_SE_EN_GOMA_DEAD	         0x3812
#define NA_SE_EN_GOMA_UNARI	      0x3813
#define NA_SE_EN_GOMA_BJR_EGG1	   0x3814
#define NA_SE_EN_GOMA_BJR_EGG2	   0x3815
#define NA_SE_EN_GOMA_BJR_WALK	   0x3816
#define NA_SE_EN_GOMA_BJR_CRY	      0x3817
#define NA_SE_EN_GOMA_BJR_DAM1	   0x3818
#define NA_SE_EN_GOMA_BJR_DAM2	   0x3819
#define NA_SE_EN_GOMA_BJR_DEAD	   0x381A
#define NA_SE_EN_GOMA_BJR_FREEZE    0x381F
#define NA_SE_EN_GOMA_BJR_LAND      0x39E3
#define NA_SE_EN_GOMA_BJR_LAND2     0x39E4
#define NA_SE_EN_GOMA_DEMO_EYE	   0x381B
#define NA_SE_EN_GOMA_LAST	         0x301C
#define NA_SE_EN_GOMA_UNARI2	      0x381D
#define NA_SE_EN_GOMA_FAINT	      0x301E

#define NA_SE_EN_GOMA_JR_WALK	      0x395C
#define NA_SE_EN_GOMA_JR_CRY	      0x395D
#define NA_SE_EN_GOMA_JR_DAM1	      0x395E
#define NA_SE_EN_GOMA_JR_DAM2	      0x395F
#define NA_SE_EN_GOMA_JR_DEAD	      0x3960
#define NA_SE_EN_GOMA_JR_FREEZE	   0x389E
#define NA_SE_EN_GOMA_JR_LAND       0x39E5
#define NA_SE_EN_GOMA_JR_LAND2      0x39E6
#define NA_SE_EN_GOMA_EGG1	         0x3961
#define NA_SE_EN_GOMA_EGG2	         0x3962

#define NA_SE_EN_DODO_M_CRY	      0x3820
#define NA_SE_EN_DODO_M_DEAD	      0x3821
#define NA_SE_EN_DODO_M_MOVE	      0x3822
#define NA_SE_EN_DODO_M_DOWN	      0x3823
#define NA_SE_EN_DODO_M_UP	         0x3824
#define NA_SE_EN_DODO_M_GND	      0x387B
#define NA_SE_EN_DODO_M_FREEZE	   0x389E
#define NA_SE_EN_DODO_M_EAT	      0x3826

#define NA_SE_EN_RIZA_CRY	         0x3829
#define NA_SE_EN_RIZA_ATTACK	      0x382A
#define NA_SE_EN_RIZA_DAMAGE	      0x382B
#define NA_SE_EN_RIZA_WARAU	      0x382C
#define NA_SE_EN_RIZA_DEAD	         0x382D
#define NA_SE_EN_RIZA_WALK	         0x382E
#define NA_SE_EN_RIZA_JUMP	         0x382F
#define NA_SE_EN_RIZA_ONGND	      0x3828
#define NA_SE_EN_RIZA_DOWN	         0x387A
#define NA_SE_EN_RIZA_FREEZE	      0x389E

#define NA_SE_EN_FFLY_ATTACK	      0x3840
#define NA_SE_EN_FFLY_FLY	         0x3841
#define NA_SE_EN_FFLY_DEAD	         0x3842
#define NA_SE_EN_FFLY_FREEZE	      0x389E

#define NA_SE_EN_DODO_K_COLI	      0x384C
#define NA_SE_EN_DODO_K_COLI2	      0x384D
#define NA_SE_EN_DODO_K_ROLL	      0x304E
#define NA_SE_EN_DODO_K_BREATH	   0x304F
#define NA_SE_EN_DODO_K_DRINK	      0x3850
#define NA_SE_EN_DODO_K_DOWN	      0x3051
#define NA_SE_EN_DODO_K_OTAKEBI	   0x3852
#define NA_SE_EN_DODO_K_END	      0x3853
#define NA_SE_EN_DODO_K_LAST	      0x3054
#define NA_SE_EN_DODO_K_LAVA	      0x3855

#define NA_SE_EN_DODO_J_BREATH	   0x3058
#define NA_SE_EN_DODO_J_TAIL	      0x3859
#define NA_SE_EN_DODO_J_DOWN	      0x387A
#define NA_SE_EN_DODO_J_FREEZE	   0x389E
#define NA_SE_EN_DODO_J_EAT	      0x385B
#define NA_SE_EN_DODO_J_LAND	      0x387A


#define NA_SE_EN_TAIL_FLY	         0x3064
#define NA_SE_EN_TAIL_CRY	         0x3865
#define NA_SE_EN_TAIL_DEAD	         0x3866
#define NA_SE_EN_TAIL_FREEZE	      0x389E

#define NA_SE_EN_STALTU_DOWN	      0x3868
#define NA_SE_EN_STALTU_UP	         0x3869
#define NA_SE_EN_STALTU_LAUGH	      0x386A
#define NA_SE_EN_STALTU_DAMAGE	   0x386B
#define NA_SE_EN_STALTU_FREEZE	   0x389E
#define NA_SE_EN_STALTU_WAVE	      0x39E0
#define NA_SE_EN_STALTU_DOWN_SET    0x39E1

#define NA_SE_EN_STALWALL_LAND	   0x387B
#define NA_SE_EN_STALWALL_LAUGH	   0x39F2
#define NA_SE_EN_STALWALL_DEAD	   0x3885

#define NA_SE_EN_TEKU_JUMP	         0x386C
#define NA_SE_EN_TEKU_LAND	         0x387B
#define NA_SE_EN_TEKU_DEAD	         0x386E
#define NA_SE_EN_TEKU_DAMAGE	      0x386D
#define NA_SE_EN_TEKU_WALK	         0x386F
#define NA_SE_EN_TEKU_WALK_WATER    0x3835
#define NA_SE_EN_TEKU_JUMP_WATER    0x388E
#define NA_SE_EN_TEKU_LAND_WATER    0x388A
#define NA_SE_EN_TEKU_LAND_WATER2   0x388F
#define NA_SE_EN_TEKU_FREEZE        0x389E
#define NA_SE_EN_TEKU_REVERSE       0x3888



#define NA_SE_EN_STALTU_ROLL	      0x3884
#define NA_SE_EN_STALTU_DEAD	      0x3885

#define NA_SE_EN_FALL_AIM	         0x3890
#define NA_SE_EN_FALL_UP	         0x3891
#define NA_SE_EN_FALL_CATCH	      0x3892
#define NA_SE_EN_FALL_LAND	         0x3893
#define NA_SE_EN_FALL_WALK	         0x3894
#define NA_SE_EN_FALL_DAMAGE	      0x3895
#define NA_SE_EN_FALL_DEAD	         0x3896
#define NA_SE_EN_FALL_FREEZE	      0x389E
#define NA_SE_EN_FALL_LAND2         0x387B

#define NA_SE_EN_BIRI_FLY	         0x3898
#define NA_SE_EN_BIRI_JUMP	         0x3899
#define NA_SE_EN_BIRI_SPARK	      0x309A
#define NA_SE_EN_BIRI_DEAD	         0x389B
#define NA_SE_EN_BIRI_BUBLE	      0x389C
#define NA_SE_EN_BIRI_LAND	         0x387B
#define NA_SE_EN_BIRI_FREEZE	      0x389E

#define NA_SE_EN_BARI_ROLL	         0x389D
#define NA_SE_EN_BARI_FAINT	      0x389E
#define NA_SE_EN_BARI_DEAD	         0x389F
#define NA_SE_EN_BARI_SPLIT	      0x3887
#define NA_SE_EN_BARI_LAND	         0x387B
#define NA_SE_EN_BARI_SPARK	      0x309A
#define NA_SE_EN_BARI_DAMAGE	      0x38DC

#define NA_SE_EN_FANTOM_TRANSFORM   0x38A1
#define NA_SE_EN_FANTOM_THUNDER	   0x38A2
#define NA_SE_EN_FANTOM_SPARK	      0x38A3
#define NA_SE_EN_FANTOM_FLOAT	      0x30A4
#define NA_SE_EN_FANTOM_MASIC1	   0x38A5
#define NA_SE_EN_FANTOM_MASIC2	   0x38A6
#define NA_SE_EN_FANTOM_FIRE	      0x30A7
#define NA_SE_EN_FANTOM_HIT_THUNDER 0x38A8
#define NA_SE_EN_FANTOM_ATTACK	   0x38A9
#define NA_SE_EN_FANTOM_STICK       0x38AA
#define NA_SE_EN_FANTOM_EYE         0x38AB
#define NA_SE_EN_FANTOM_LAST        0x38AC
#define NA_SE_EN_FANTOM_THUNDER_GND 0x38AD
#define NA_SE_EN_FANTOM_DAMAGE      0x38AE
#define NA_SE_EN_FANTOM_DEAD        0x38AF
#define NA_SE_EN_FANTOM_LAUGH       0x38B0
#define NA_SE_EN_FANTOM_DAMAGE2     0x38B1
#define NA_SE_EN_FANTOM_VOICE       0x38B2
#define NA_SE_EN_FANTOM_ST_LAUGH    0x39D6

#define NA_SE_EN_MORIBLIN_WALK      0x38B8
#define NA_SE_EN_MORIBLIN_SLIDE     0x38B9
#define NA_SE_EN_MORIBLIN_ATTACK    0x38BA
#define NA_SE_EN_MORIBLIN_VOICE     0x38BB
#define NA_SE_EN_MORIBLIN_SPEAR_AT  0x38BC
#define NA_SE_EN_MORIBLIN_SPEAR_NORM 0x38BD
#define NA_SE_EN_MORIBLIN_DEAD      0x38BE
#define NA_SE_EN_MORIBLIN_DASH      0x38BF
#define NA_SE_EN_MORIBLIN_LAND      0x387A
#define NA_SE_EN_MORIBLIN_FREEZE    0x389E

#define NA_SE_EN_OCTAROCK_THROW     0x387E
#define NA_SE_EN_OCTAROCK_ROCK      0x38C0
#define NA_SE_EN_OCTAROCK_FLOAT     0x38C1
#define NA_SE_EN_OCTAROCK_JUMP      0x38C2
#define NA_SE_EN_OCTAROCK_LAND      0x38C3
#define NA_SE_EN_OCTAROCK_SINK      0x38C4
#define NA_SE_EN_OCTAROCK_BUBLE     0x38C5
#define NA_SE_EN_OCTAROCK_DEAD1     0x38C6
#define NA_SE_EN_OCTAROCK_DEAD2     0x38C7

#define NA_SE_EN_VALVAISA_APPEAR    0x30D0
#define NA_SE_EN_VALVAISA_ROAR      0x38D1
#define NA_SE_EN_VALVAISA_MAHI1     0x38D2
#define NA_SE_EN_VALVAISA_MAHI2     0x38D3
#define NA_SE_EN_VALVAISA_KNOCKOUT  0x38D4
#define NA_SE_EN_VALVAISA_DAMAGE1   0x38D5
#define NA_SE_EN_VALVAISA_DAMAGE2   0x38D6
#define NA_SE_EN_VALVAISA_ROCK      0x38D7
#define NA_SE_EN_VALVAISA_LAND      0x3927
#define NA_SE_EN_VALVAISA_DEAD      0x38D9
#define NA_SE_EN_VALVAISA_BURN      0x30DA
#define NA_SE_EN_VALVAISA_FIRE      0x30DB
#define NA_SE_EN_VALVAISA_LAND2     0x3889
#define NA_SE_EN_VALVAISA_SW_NAIL   0x38D8

#define NA_SE_EN_MONBLIN_HAM_LAND   0x39EF
#define NA_SE_EN_MONBLIN_HAM_DOWN   0x38E1
#define NA_SE_EN_MONBLIN_HAM_UP     0x38E2
#define NA_SE_EN_MONBLIN_GNDWAVE    0x30E0
#define NA_SE_EN_MONBLIN_FREEZE     0x389E

#define NA_SE_EN_PO_BIG_GET	      0x3883
#define NA_SE_EN_PO_BIG_AWAY	      0x38EC
#define NA_SE_EN_PO_BIG_CRY	      0x31E8

#define NA_SE_EN_MOFER_APPEAR  	   0x30F0
#define NA_SE_EN_MOFER_ATTACK  	   0x30F1
#define NA_SE_EN_MOFER_WAVE  	      0x38F2
#define NA_SE_EN_MOFER_CATCH  	   0x38F3
#define NA_SE_EN_MOFER_CORE_DAMAGE  0x39EC
#define NA_SE_EN_MOFER_CUT          0x38F4
#define NA_SE_EN_MOFER_MOVE_DEMO    0x30F5
#define NA_SE_EN_MOFER_BUBLE_DEMO   0x38F6
#define NA_SE_EN_MOFER_CORE_JUMP    0x38F7
#define NA_SE_EN_MOFER_DEAD         0x30F8
#define NA_SE_EN_MOFER_LASTVOICE    0x38F9
#define NA_SE_EN_MOFER_CORE_ROLL    0x30FA
#define NA_SE_EN_MOFER_CORE_FLY     0x38FB
#define NA_SE_EN_MOFER_CORE_LAND    0x38DD
#define NA_SE_EN_MOFER_CORE_MOVE_WT 0x38DE
#define NA_SE_EN_MOFER_CORE_SMJUMP  0x38DF

#define NA_SE_EN_DEADHAND_BITE      0x3900
#define NA_SE_EN_DEADHAND_WALK      0x3901
#define NA_SE_EN_DEADHAND_GRIP      0x3902
#define NA_SE_EN_DEADHAND_HAND_AT   0x3903
#define NA_SE_EN_DEADHAND_HIDE      0x39A8
#define NA_SE_EN_DEADHAND_DAMAGE    0x39A9
#define NA_SE_EN_DEADHAND_HAND_DEAD 0x39AA
#define NA_SE_EN_DEADHAND_DEAD      0x39AB
#define NA_SE_EN_DEADHAND_LAND      0x387A
#define NA_SE_EN_DEADHAND_LAUGH     0x39A7
#define NA_SE_EN_DEADHAND_FREEZE    0x389E

#define NA_SE_EN_LAST_DAMAGE        0x388B


#define NA_SE_EN_STALWALL_ROLL	   0x388C
#define NA_SE_EN_STALWALL_DASH	   0x388D

#define NA_SE_EN_STALGOLD_ROLL	   0x39DA
#define NA_SE_EN_STALGOLD_UP	      0x3824
#define NA_SE_EN_STALGOLD_UP_CRY    0x39EA
#define NA_SE_EN_STALGOLD_LAND      0x387B

#define NA_SE_EN_MUSI_LAND	         0x39A0
#define NA_SE_EN_MUSI_SINK	         0x39E9
#define NA_SE_EN_MUSI_WALK	         0x39F0

#define NA_SE_EN_TWINROBA_APPEAR_MS     0x390C
#define NA_SE_EN_TWINROBA_TRANSFORM     0x390D
#define NA_SE_EN_TWINROBA_MS_FIRE       0x310E
#define NA_SE_EN_TWINROBA_FIRE_EXP      0x310F
#define NA_SE_EN_TWINROBA_SHOOT_FREEZE  0x3111
#define NA_SE_EN_TWINROBA_MS_FREEZE     0x3112
#define NA_SE_EN_TWINROBA_MASIC_SET     0x3913
#define NA_SE_EN_TWINROBA_LAUGH         0x39B0
#define NA_SE_EN_TWINROBA_SHOOT_VOICE   0x39B3
#define NA_SE_EN_TWINROBA_DAMAGE_VOICE  0x3916
#define NA_SE_EN_TWINROBA_REFL_FIRE     0x3117
#define NA_SE_EN_TWINROBA_REFL_FREEZE   0x3118
#define NA_SE_EN_TWINROBA_YOUNG_LAUGH   0x39B9
#define NA_SE_EN_TWINROBA_YOUNG_DAMAGE  0x391A
#define NA_SE_EN_TWINROBA_YOUNG_DEAD    0x391B
#define NA_SE_EN_TWINROBA_FB_FLY        0x391E
#define NA_SE_EN_TWINROBA_FLY           0x311F
#define NA_SE_EN_TWINROBA_FADEOUT_DEMO  0x3877
#define NA_SE_EN_TWINROBA_FADEOUT2_DEMO 0x38CD
#define NA_SE_EN_TWINROBA_AP_LB_DEMO    0x38A5
#define NA_SE_EN_TWINROBA_FLY_LB_DEMO   0x30A7
#define NA_SE_EN_TWINROBA_HIT_LB_DEMO   0x38A8
#define NA_SE_EN_TWINROBA_LB_VOICE_DEMO 0x39B3
#define NA_SE_EN_TWINROBA_FLY_DEMO      0x317B
#define NA_SE_EN_TWINROBA_UNARI         0x3120
#define NA_SE_EN_TWINROBA_ROLL          0x3921
#define NA_SE_EN_TWINROBA_SHOOT_FIRE    0x3122
#define NA_SE_EN_TWINROBA_THROW_MASIC   0x3923
#define NA_SE_EN_TWINROBA_POWERUP       0x3910
#define NA_SE_EN_TWINROBA_YOUNG_SHOOTVC 0x39B8
#define NA_SE_EN_TWINROBA_YOUNG_DAMAGE2 0x39B7
#define NA_SE_EN_TWINROBA_LAUGH2        0x39B1
#define NA_SE_EN_TWINROBA_SENSE         0x39B4
#define NA_SE_EN_TWINROBA_DIE           0x39B5
#define NA_SE_EN_TWINROBA_YOUNG_WINK    0x39BB
#define NA_SE_EN_TWINROBA_CUTBODY       0x3914
#define NA_SE_EN_TWINROBA_FIGHT         0x31E7

#define NA_SE_EN_DARUNIA_HIT_BREAST     0x3124
#define NA_SE_EN_DARUNIA_HIT_LINK       0x3925
#define NA_SE_EN_DARUNIA_LAND           0x3879

#define NA_SE_EN_IRONNACK_WALK             0x3928
#define NA_SE_EN_IRONNACK_SWING_AXE        0x3929
#define NA_SE_EN_IRONNACK_ARMOR_DEMO       0x392A
#define NA_SE_EN_IRONNACK_APPEAR_AXE_DEMO  0x390D
#define NA_SE_EN_IRONNACK_FINGER_DEMO      0x3939
#define NA_SE_EN_IRONNACK_GRIP_AXE_DEMO    0x392A
#define NA_SE_EN_IRONNACK_WAVE_DEMO        0x3938
#define NA_SE_EN_IRONNACK_STAGGER_DEMO     0x392B
#define NA_SE_EN_IRONNACK_ARMOR_OFF_DEMO   0x392C
#define NA_SE_EN_IRONNACK_ARMOR_LAND1_DEMO 0x392D
#define NA_SE_EN_IRONNACK_ARMOR_LAND2_DEMO 0x392E
#define NA_SE_EN_IRONNACK_ARMOR_LAND3_DEMO 0x392F
#define NA_SE_EN_IRONNACK_ARMOR_HIT        0x393A
#define NA_SE_EN_IRONNACK_DAMAGE           0x3AD7 // new 00.03.22
#define NA_SE_EN_IRONNACK_DEAD             0x3AD8 // new 00.03.22
#define NA_SE_EN_IRONNACK_BREAK_PILLAR     0x39AD
#define NA_SE_EN_IRONNACK_HIT_GND          0x39AE
#define NA_SE_EN_IRONNACK_FREEZE           0x389E
#define NA_SE_EN_IRONNACK_DASH             0x39B3
#define NA_SE_EN_IRONNACK_WAKEUP           0x39C2
#define NA_SE_EN_IRONNACK_PULLOUT          0x39B2
#define NA_SE_EN_IRONNACK_BREAK_PILLAR2    0x39AC
#define NA_SE_EN_IRONNACK_CUTBODY          0x393B
#define NA_SE_EN_IRONNACK_WAKEUP_DEMO      0x39C2
#define NA_SE_EN_IRONNACK_DEAD_DEMO        0x39C0

#define NA_SE_EN_GANON_ATTACK_DEMO       0x30B4
#define NA_SE_EN_GANON_FIRE_DEMO         0x38B5
#define NA_SE_EN_GANON_HIT_THUNDER_DEMO  0x38A8

#define NA_SE_EN_CHICKEN_FLUTTER    0x38FF

#define NA_SE_EN_FLOORMASTER_ATTACK     0x3930
#define NA_SE_EN_FLOORMASTER_SM_WALK    0x3931
#define NA_SE_EN_FLOORMASTER_SM_DEAD    0x3932
#define NA_SE_EN_FLOORMASTER_RESTORE    0x3133
#define NA_SE_EN_FLOORMASTER_EXPAND     0x3934
#define NA_SE_EN_FLOORMASTER_SPLIT      0x3935
#define NA_SE_EN_FLOORMASTER_SM_STICK   0x3136
#define NA_SE_EN_FLOORMASTER_DEAD       0x3896
#define NA_SE_EN_FLOORMASTER_DAMAGE     0x3895
#define NA_SE_EN_FLOORMASTER_WALK       0x3894
#define NA_SE_EN_FLOORMASTER_LAND       0x3893
#define NA_SE_EN_FLOORMASTER_LAND2      0x387B
#define NA_SE_EN_FLOORMASTER_SLIDING    0x3034
#define NA_SE_EN_FLOORMASTER_SM_LAND    0x3937
#define NA_SE_EN_FLOORMASTER_SM_LAND2   0x387B
#define NA_SE_EN_FLOORMASTER_FREEZE     0x389E
#define NA_SE_EN_FLOORMASTER_SM_FREEZE  0x389E

#define NA_SE_EN_BALINADE_LEVEL     0x313C
#define NA_SE_EN_BALINADE_DAMAGE    0x393D
#define NA_SE_EN_BALINADE_FAINT     0x393E
#define NA_SE_EN_BALINADE_BREAK     0x393F
#define NA_SE_EN_BALINADE_DEAD      0x3940
#define NA_SE_EN_BALINADE_STICK     0x3941
#define NA_SE_EN_BALINADE_THUNDER   0x3942
#define NA_SE_EN_BALINADE_BL_SPARK  0x3143
#define NA_SE_EN_BALINADE_BL_DEAD   0x3944
#define NA_SE_EN_BALINADE_BREAK2    0x3945
#define NA_SE_EN_BALINADE_HIT_RINK  0x3946

#define NA_SE_EN_BALINADE_HAND_DOWN    0x3958
#define NA_SE_EN_BALINADE_HAND_UP      0x3959
#define NA_SE_EN_BALINADE_HAND_DAMAGE  0x395A
#define NA_SE_EN_BALINADE_HAND_DEAD    0x395B

#define NA_SE_EN_AWA_BOUND          0x3948
#define NA_SE_EN_AWA_BREAK          0x3949

#define NA_SE_EN_EIER_DAMAGE        0x394C
#define NA_SE_EN_EIER_DEAD          0x394D
#define NA_SE_EN_EIER_FAINT         0x389E
#define NA_SE_EN_EIER_FLUTTER       0x394E
#define NA_SE_EN_EIER_FLY           0x314F
#define NA_SE_EN_EIER_UP            0x38C2
#define NA_SE_EN_EIER_DOWN          0x38C4
#define NA_SE_EN_EIER_LAND          0x387B
#define NA_SE_EN_EIER_ATTACK        0x39A2
#define NA_SE_EN_EIER_CRY           0x39A3

#define NA_SE_EN_SHADEST_TAIKO_LOW     0x3950
#define NA_SE_EN_SHADEST_TAIKO_HIGH    0x3951
#define NA_SE_EN_SHADEST_CLAP          0x3952
#define NA_SE_EN_SHADEST_FLY_ATTACK    0x3953
#define NA_SE_EN_SHADEST_HAND_WAVE     0x3964
#define NA_SE_EN_SHADEST_CATCH         0x3965
#define NA_SE_EN_SHADEST_GRIP          0x3965
#define NA_SE_EN_SHADEST_HAND_FLY      0x3167
#define NA_SE_EN_SHADEST_SHAKEHAND     0x3968
#define NA_SE_EN_SHADEST_DAMAGE        0x3969
#define NA_SE_EN_SHADEST_DAMAGE_HAND   0x396A
#define NA_SE_EN_SHADEST_DISAPPEAR     0x396B
#define NA_SE_EN_SHADEST_MOVE          0x318D
#define NA_SE_EN_SHADEST_FREEZE        0x396E
#define NA_SE_EN_SHADEST_DEAD          0x396F
#define NA_SE_EN_SHADEST_LAST          0x318C
#define NA_SE_EN_SHADEST_PRAY          0x398E
#define NA_SE_EN_SHADEST_LAND          0x3966


#define NA_SE_EN_OWL_FLUTTER        0x3926

#define NA_SE_EN_PIHAT_UP           0x3954
#define NA_SE_EN_PIHAT_FLY          0x3155
#define NA_SE_EN_PIHAT_DAMAGE       0x3956
#define NA_SE_EN_PIHAT_LAND         0x3957
#define NA_SE_EN_PIHAT_FREEZE       0x389E
#define NA_SE_EN_PIHAT_SM_FLY       0x3184
#define NA_SE_EN_PIHAT_SM_DEAD      0x3985
#define NA_SE_EN_PIHAT_SM_FREEZE    0x389E

#define NA_SE_EN_BROB_WAVE          0x394A
#define NA_SE_EN_BROB_FREEZE        0x389E

#define NA_SE_EN_BIMOS_ROLL_HEAD    0x3170
#define NA_SE_EN_BIMOS_LAZER        0x3171
#define NA_SE_EN_BIMOS_LAZER_GND    0x3172
#define NA_SE_EN_BIMOS_AIM          0x3973
#define NA_SE_EN_BIMOS_FREEZE       0x389E

#define NA_SE_EN_BUBLEWALK_WALK     0x3974
#define NA_SE_EN_BUBLEWALK_AIM      0x3975
#define NA_SE_EN_BUBLEWALK_REVERSE  0x3976
#define NA_SE_EN_BUBLEWALK_DAMAGE   0x3977
#define NA_SE_EN_BUBLEWALK_DEAD     0x3978
#define NA_SE_EN_BUBLEWALK_JUMP     0x386C
#define NA_SE_EN_BUBLEWALK_LAND     0x387B
#define NA_SE_EN_BUBLEWALK_FREEZE   0x389E

#define NA_SE_EN_YUKABYUN_FLY       0x3179
#define NA_SE_EN_YUKABYUN_BREAK     0x38C0

#define NA_SE_EN_FLAME_KICK         0x397C
#define NA_SE_EN_FLAME_RUN          0x317D
#define NA_SE_EN_FLAME_ROLL         0x317E
#define NA_SE_EN_FLAME_MAN_RUN      0x397F
#define NA_SE_EN_FLAME_MAN_DAMAGE   0x3980
#define NA_SE_EN_FLAME_LAUGH        0x3981
#define NA_SE_EN_FLAME_MAN_SLIDE    0x3982
#define NA_SE_EN_FLAME_FIRE_ATTACK  0x3183
#define NA_SE_EN_FLAME_MAN_JUMP     0x386C
#define NA_SE_EN_FLAME_MAN_LAND     0x387B
#define NA_SE_EN_FLAME_FREEZE       0x389E
#define NA_SE_EN_FLAME_MAN_SURP     0x398B
#define NA_SE_EN_FLAME_DAMAGE       0x397A

#define NA_SE_EN_RIVA_APPEAR        0x3986
#define NA_SE_EN_RIVA_HIDE          0x3987
#define NA_SE_EN_RIVA_DAMAGE        0x3988
#define NA_SE_EN_RIVA_DEAD          0x3989
#define NA_SE_EN_RIVA_MOVE          0x398A
#define NA_SE_EN_RIVA_FREEZE        0x389E
#define NA_SE_EN_RIVA_BIG_APPEAR    0x39EE

#define NA_SE_EN_LIKE_WALK          0x3990
#define NA_SE_EN_LIKE_UNARI         0x3991
#define NA_SE_EN_LIKE_DRINK         0x3992
#define NA_SE_EN_LIKE_EAT           0x3993
#define NA_SE_EN_LIKE_THROW         0x3994
#define NA_SE_EN_LIKE_DAMAGE        0x3995
#define NA_SE_EN_LIKE_DEAD          0x3996
#define NA_SE_EN_LIKE_FREEZE        0x389E

#define NA_SE_EN_ANUBIS_FIRE        0x319C
#define NA_SE_EN_ANUBIS_FIREBOMB    0x399D
#define NA_SE_EN_ANUBIS_DAMAGE      0x393B
#define NA_SE_EN_ANUBIS_DEAD        0x399F

#define NA_SE_EN_LIGHT_ARROW_HIT    0x3836

#define NA_SE_EN_FREEZAD_BREATH     0x31A4
#define NA_SE_EN_FREEZAD_DAMAGE     0x39A5
#define NA_SE_EN_FREEZAD_DEAD       0x39A6

#define NA_SE_EN_TUBOOCK_FLY        0x3037

#define NA_SE_EN_GANON_LAUGH        0x39C7
#define NA_SE_EN_GANON_VOICE_DEMO   0x39C8
#define NA_SE_EN_GANON_THROW        0x39C9
#define NA_SE_EN_GANON_AT_RETURN    0x39CA
#define NA_SE_EN_GANON_HIT_GND      0x39CB
#define NA_SE_EN_GANON_DAMAGE1      0x39CC
#define NA_SE_EN_GANON_DAMAGE2      0x39CD
#define NA_SE_EN_GANON_DOWN         0x39CE
#define NA_SE_EN_GANON_RESTORE      0x39CF
#define NA_SE_EN_GANON_DEAD         0x39D0
#define NA_SE_EN_GANON_BREATH       0x39D1
#define NA_SE_EN_GANON_TOKETU       0x39D2
#define NA_SE_EN_GANON_CASBREAK     0x39D3
#define NA_SE_EN_GANON_BIGMASIC     0x39D4
#define NA_SE_EN_GANON_DARKWAVE     0x39D5
#define NA_SE_EN_GANON_LAUGH_MID    0x39D6

#define NA_SE_EN_GANON_THROW_MASIC  0x3825
#define NA_SE_EN_GANON_DD_THUNDER   0x3827
#define NA_SE_EN_GANON_FLOAT        0x3056
#define NA_SE_EN_GANON_DARKWAVE_M   0x3057
#define NA_SE_EN_GANON_SPARK        0x3867
#define NA_SE_EN_GANON_FIRE         0x30A0
#define NA_SE_EN_GANON_HIT_THUNDER  0x390B
#define NA_SE_EN_GANON_HIT_GND_IMP  0x3915
#define NA_SE_EN_GANON_CUTBODY      0x3919
#define NA_SE_EN_GANON_WAVE_GND     0x3147
#define NA_SE_EN_GANON_BODY_SPARK   0x3163
#define NA_SE_EN_GANON_CHARGE_MASIC 0x316C
#define NA_SE_EN_GANON_THROW_BIG    0x396D
#define NA_SE_EN_MGANON_ROAR        0x398F
#define NA_SE_EN_MGANON_SWORD       0x3997
#define NA_SE_EN_MGANON_DAMAGE      0x399B
#define NA_SE_EN_MGANON_WALK        0x3879
#define NA_SE_EN_MGANON_DEAD1       0x399E
#define NA_SE_EN_MGANON_BREATH      0x39AF
#define NA_SE_EN_MGANON_DEAD2       0x39A1
#define NA_SE_EN_MGANON_STAND       0x39D8
#define NA_SE_EN_MGANON_UNARI       0x39D9
#define NA_SE_EN_MGANON_SWDIMP      0x39DF

#define NA_SE_EN_SHELL_MOUTH        0x3849
#define NA_SE_EN_SHELL_DEAD         0x384A
#define NA_SE_EN_SHELL_LAND         0x387B

#define NA_SE_EN_NYU_MOVE           0x30E9
#define NA_SE_EN_NYU_HIT_STOP       0x38EA
#define NA_SE_EN_NYU_LAND           0x387B
#define NA_SE_EN_NYU_DEAD           0x394B


#define NA_SE_EN_WOLFOS_CRY         0x383E
#define NA_SE_EN_WOLFOS_ATTACK      0x383F
#define NA_SE_EN_WOLFOS_DAMAGE      0x3843
#define NA_SE_EN_WOLFOS_DEAD        0x384B
#define NA_SE_EN_WOLFOS_WALK        0x385A
#define NA_SE_EN_WOLFOS_FREEZE      0x389E
#define NA_SE_EN_WOLFOS_JUMP        0x386C
#define NA_SE_EN_WOLFOS_APPEAR      0x383C

#define NA_SE_EN_KAICHO_CRY         0x38B6
#define NA_SE_EN_KAICHO_ATTACK      0x38B7
#define NA_SE_EN_KAICHO_DAMAGE      0x38B3
#define NA_SE_EN_KAICHO_DEAD        0x38EB
#define NA_SE_EN_KAICHO_FLUTTER     0x3897
#define NA_SE_EN_KAICHO_FREEZE      0x389E

#define NA_SE_EN_MIMICK_BREATH      0x31F1

#define NA_SE_EN_KDOOR_WAVE         0x39DB
#define NA_SE_EN_KDOOR_HIT          0x39DC
#define NA_SE_EN_KDOOR_BREAK        0x39DD
#define NA_SE_EN_KDOOR_HIT_GND      0x39DE


#define NA_SE_EN_SUISEN_EAT         0x3850
#define NA_SE_EN_SUISEN_DEAD        0x3851
#define NA_SE_EN_SUISEN_DRINK       0x3992
#define NA_SE_EN_SUISEN_THROW       0x3994
#define NA_SE_EN_SUISEN_BOUND       0x38C5

#define NA_SE_EN_KUROSUKE_MOVE		0x30BC
#define NA_SE_EN_KUROSUKE_ATTACK	0x38BD
#define NA_SE_EN_KUROSUKE_DEAD		0x3876



