/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Blex Mono Nerd Font:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
/*                             fg         bg       */
	[SchemeNorm] =			{ "#cbe3e7", "#1b182c" },
	[SchemeNormHighlight] =	{ "#62d196", "#1b182c" },
	[SchemeSel]=			{ "#1b182c", "#906cff" },
	[SchemeSelHighlight] =	{ "#1b182c", "#906cff" },
	[SchemeOut] =			{ "#ff5458", "#1b182c" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 0;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
