///////////////////////////////////////////////////////////////////////////////   
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//  The developer(s) of the OMP audio player hereby grant(s) permission
//  for non-GPL compatible GStreamer plugins to be used and distributed
//  together with GStreamer and OMP. This permission is above and beyond
//  the permissions granted by the GPL license by which OMP is covered.
//  If you modify this code, you may extend this exception to your version
//  of the code, but you are not obligated to do so. If you do not wish to do
//  so, delete this exception statement from your version.
//
//  Libraries used by OMP:
//
//    - boost: http://www.boost.org/
//
//    - clastfm: http://liblastfm.sourceforge.net/ 
//
//    - gstreamer: https://gstreamer.freedesktop.org/ 
//
//    - gtkmm: https://www.gtkmm.org/en/
//
//    - libconfig: http://www.hyperrealm.com/libconfig/
//
//    - standard C and C++ libraries
//
//    - taglib: http://taglib.org/
//
///////////////////////////////////////////////////////////////////////////////





Version: 0.0.1





COMPILING:

  Run this from the main folder, which has Makefile: time make -j6 -f Makefile

  **NOTE** Change -j6 to -j3 if you have a dual-core processor. Change it to 
    -j9 for a 6-core processor and keep it at -j6 for a quad-core. Following a
    pattern of an additonal 3 for every two cores(1.5 for every 1 core) is 
    an acceptable practice.

  ./MAKEFILE_COMPILE is a script of the command above. You may change it
  at your conveinence.

  You'll have to have everything used by the program before compiling. The
  version numbers listed below are what have been tested on Arch and are known
  to work.

  Dependencies Include:

    - gtkmm3
    - GTK3+
    - GStreamer
         - gstream
         - gst-libav
         - gst-plugins-bad(optional)
         - gst-plugins-good
         - gst-plugins-base
         - gst-plugins-base-libs
         - gst-plugins-ugly(optional)
    - libconfig
    - taglib
    - libclastfm 







KNOWN BUGS:

  - File browser has no OK or Cancel buttons.
  - Damaged files crash the program when metadata is read.
  - Left-clicking a row, holding it, holding shift, and then dragging breaks
    shit.
  - Double clicking while paused just stop playback.
  - Holding shifting while dragging breaks shit.
  - Dragging glitches sometimes on drug row.
  - Resizing artwork occassionally crashes program.
  - Scrobbling might not be disablable.
