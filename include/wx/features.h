/* /////////////////////////////////////////////////////////////////////////// */
/*  Name:        wx/features.h */
/*  Purpose:     test macros for the features which might be available in some */
/*               wxWindows ports but not others */
/*  Author:      Vadim Zeitlin */
/*  Modified by: */
/*  Created:     18.03.02 */
/*  RCS-ID:      $Id$ */
/*  Copyright:   (c) 2002 Vadim Zeitlin <vadim@wxwindows.org> */
/*  Licence:     wxWindows licence */
/* /////////////////////////////////////////////////////////////////////////// */

/* THIS IS A C FILE, DON'T USE C++ FEATURES (IN PARTICULAR COMMENTS) IN IT */

#ifndef _WX_FEATURES_H_
#define _WX_FEATURES_H_

/*  radio menu items are currently only implemented in wxGTK and wxMSW */
#if defined(__WXGTK__) || defined(__WXMSW__)
    #define wxHAS_RADIO_MENU_ITEMS
#else
    #undef wxHAS_RADIO_MENU_ITEMS
#endif

/*  the raw keyboard codes are generated under wxGTK and wxMSW only */
#if defined(__WXGTK__) || defined(__WXMSW__)
    #define wxHAS_RAW_KEY_CODES
#else
    #undef wxHAS_RAW_KEY_CODES
#endif

/*  detect SmartPhone */
#ifdef WIN32_PLATFORM_WFSP
    #ifdef wxUSE_SMARTPHONE
    #undef wxUSE_SMARTPHONE
    #endif
    #define wxUSE_SMARTPHONE 1
#endif

/*  taskbar is only implemented in wxMSW and X11 ports */
#if defined(__WXMSW__) || \
        defined(__WXGTK__) || defined(__WXMOTIF__) || defined(__WXX11__)
    #define wxHAS_TASK_BAR_ICON
#else
    #undef wxHAS_TASK_BAR_ICON
#endif

/*  wxIconLocation appeared in the middle of 2.5.0 so it's handy to have a */
/*  separate define for it */
#define wxHAS_ICON_LOCATION

/*  same for wxCrashReport */
#ifdef __WXMSW__
    #define wxHAS_CRASH_REPORT
#else
    #undef wxHAS_CRASH_REPORT
#endif

#endif /*  _WX_FEATURES_H_ */

