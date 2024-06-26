#pragma once

/*
	Default config.
	Can be configured instead of using launch arguments.
*/

// Current								Default
inline bool starthidden = false;		// false
inline bool searchbar = true;			// true
inline int icon_size = 32;				// 32
inline int dock_icon_size = 64;			// 64
inline int app_margin = 4;				// 4
inline bool name_under_icon = false;	// false
inline bool scroll_bars = false;		// false
inline ulong max_name_length = 30;		// 30
inline int items_per_row = 1;			// 1
inline int width = 400;					// 400
inline int height = 600;				// 600
inline int main_monitor = 0;			// 0
inline bool layer_shell = true;			// true
inline bool fill_screen = false;		// false
inline std::string dock_items = "";		// ""

// Build time configuration				Description
#define RUNTIME_CONFIG					// Allow the use of runtime arguments
