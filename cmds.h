// Declared commands for DWM

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* rofi menu commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[]      	 	 = { "rofi", "-show", "run", NULL };
static const char *dmenuClipCmd[]      = { "rofi", "-theme", "arc-red-dark", "-modi", "clipboard:greenclip print", "-show", "clipboard", "-run-command", "{cmd}", NULL };
static const char *dmenuRecentCmd[]    = { "rofi", "-show", "run", "-theme", "arc-red-dark", NULL };

/* run app commands */
static const char *termcmd[]       		 = { "terminator", NULL };
static const char *googlechromecmd[]   = { "google-chrome-stable", NULL };
static const char *audaciouscmd[]  		 = { "audacious", NULL };
static const char *vscodecmd[]     		 = { "code", NULL };
static const char *nemocmd[]       		 = { "nemo", "--no-desktop", NULL };

/* system commands */
// TODO: rewrite on use bash scripts for take screenshots
static const char *gsacmd[]       		 = { "shutter", "-s", NULL };
static const char *gswcmd[]       		 = { "shutter", "-w", NULL };
static const char *gsfcmd[]       		 = { "shutter", "-f", NULL };
static const char *gsfccmd[]       		 = { "gnome-screenshot", "-a", NULL };

static const char *xkillcmd[]	         = { "xkill", NULL };
static const char *slock[]	  	       = { "slock", NULL };

// Scripts
// TODO: Update scripts
static const char *toggleTouchpad[]    = { "bash", HOME"/sh/toggleTouchPad.sh", NULL };
static const char *toggleTouchScreen[] = { "bash", HOME"/sh/toggleTouchScreen.sh", NULL };

/* audacious commands */
static const char *toggleAudacious[]   = { "audacious", "-t", NULL };
static const char *nextAudacious[]     = { "audacious", "-f", NULL };
static const char *rewAudacious[]      = { "audacious", "-r", NULL };

/* commands for buttons */
static const char *wallpaper[]	  	   = { "wallpaper.sh", NULL };
static const char *shutdowncmd[]       = { "sudo", "shutdown", "-h", "+0", NULL };
static const char *rebootcmd[]	       = { "sudo", "reboot", NULL };
