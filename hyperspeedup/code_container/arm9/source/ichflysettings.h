//functions

//#define standalone

#define arm9advsound

#define nogfxsoundstruggler

#define priosound

//#define sounddebugeraddv

#define uppern_read_emulation

//#define noichflydebugger

//#define debugpatch

//#define asmspeedup


//#define capture_and_pars

//#define antyflicker //only work with capture_and_pars

//#define skipper //only work with capture_and_pars

//#define skipperval 5 //only work with capture_and_pars and skipper

#define ownfilebuffer

//#define fullsync


//extra settings for ownfilebuffer
#define chucksizeinsec 1 //1,2,4,8
#define buffslots 255

#define chucksize 0x200*chucksizeinsec
//settings





//#define ichflytestkeypossibillity

//#define powerpatches //do some hacky things that give the emulator more Vb in some cases.




#define gba_handel_IRQ_correct

//#define HBlankdma //only if hblanc irq is on

//#define forceHBlankirqs

#define advanced_irq_check


//debug

#define usebuffedVcout

#define unsecamr7com

//#define printsaveread

//#define printsavewrite

#define directcpu //rename anothercpu.cpp to anothercpu.h

//#define print_uppern_read_emulation

#define ichflyDebugdumpon

//#define countpagefalts

//#define showdebug

//#define lastdebug

//#define checkclearaddr

//#define checkclearaddr20 //break clock and some other things only work with checkclearaddr

//#define checkclearaddrrw

//#define printreads

//#define printsoundwrites

//#define dmawriteprint

//#define soundwriteprint

//#define printsoundtimer



//outdated




#define unsave //save only work without directcpu

#define patch_VERSION //is set even if this is not defined

#define releas //non releas no more working 

//#define BREAKswisupport //flag dose nothing is no more sup

//#define emulate_cpu_speed // pu current is 0x020E6000 try to reach 0x020E6000
