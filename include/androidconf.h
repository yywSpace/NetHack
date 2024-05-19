/*	SCCS Id: @(#)androidconf.h	3.4	2011/03/31	*/
/* Copyright (c) Kenneth Lorber, Bethesda, Maryland, 1990, 1991, 1992, 1993. */
/* NetHack may be freely redistributed.  See license for details. */

#ifdef ANDROID
#ifndef ANDROIDCONF_H
#define ANDROIDCONF_H

#define NO_FILE_LINKS /* if no hard links */
#define SELF_RECOVER /* Allow the game itself to recover from an aborted game */

#ifdef getchar
#undef getchar
#endif
#define getchar nhgetch
#undef tgetch
#define tgetch nhgetch
#define getuid() 1

#undef SHELL /* we do not support the '!' command */

#ifdef DUMPLOG
#undef DUMPLOG_FILE
#define DUMPLOG_FILE "%n.%d.dumplog.txt"
#endif

#undef DLB

#undef MAIL
#undef DEF_PAGER
#undef DEF_MAILREADER

#define ASCIIGRAPH

#define NO_SIGNAL

// 用自己的存档选择实现，不用默认的
// #define SELECTSAVED

#define USER_SOUNDS
// #define CHANGE_COLOR

char ** get_aborted_games();

#endif /* ANDROIDCONF_H */
#endif /* ANDROID */
