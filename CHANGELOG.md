# Changelog
All notable changes to this project will be documented in this file.



## [0.0.9] - April 22nd, 2018

### Added
- A confirmation dialog for deleting a playlist is now displayed so a playlist
  is not accidentally deleted.
- Tooltips have been added to most of the parts of the program the might be
  useful.
- Time left in track is now visible in the upper right part of OMP next to
  the seekbar.

### Changed
- The tagview is now designed slightly different and has more information.
- Many placeholder buttons and parts for future features have been removed
  until their feature is implemented.
- The create and delete playlist buttons of the playlist combobox are now
  attached to the playlist combobox.
- General code clean-up.

### Fixed
- The right-click playlist menu delete option is no longer clickable when the
  playlist is Library or Queue.
- Info bar telling user that a playlist already exists disappears properly now.
- The spinbutton of 4 parts of the configuration GUI can now be used.



## [0.0.8] - April 8th, 2018

### Added
- Added a Fixed section to the CHANGELOG.
- Add and remove playlist buttons are not in a playlist's right-click menu.

### Changed
- CHANGELOG date format was changed for clarification.
- Removed the section of the CHANGELOG was removed. Things removed will now be
  listed in the Changed section.
- Removed the useless Edit button in the playlist right-click menu until 
  advanced editing is added starting with version 0.3.0.
- All bug fixes listed in the CHANGELOG have been moved to a new section called
  Fixed.
- Reorganized the playlist right-click menu.
- Cleaned up the over 3 years-old code for playlist removal in order to
  make it possible to remove a playlist from something other than a playlist
  combobox.
- The initial time listed in the status bar upon opening OMP is now formatted
  properly. 

### Fixed
- Fixed a bug that caused a playlist combobox to not saved its position after
  a playlist is removed.
- Renaming a playlist with a playlist combobox is now working again.



## [0.0.7] - March 18th, 2018

### Added
- Error logging for files that fail to open with OMP.
- Add playlist right-click menu option. 

### Changed
- Makefile organized.
- General code clean-up.
- All mentions of Boost removed.
- Other minor text changes.

### Fixed
- A crash caused by OMP trying to convert an empty string to an int has
  been fixed. It happened when a metadata field exists, is empty, and is 
  an integer. This produced an exception that is now caught too. 
  Thanks to aladar42 on GitHub helping me find and solve this bug!



## [0.0.6] - March 4th, 2018

### Added
- Configurable keyboard shortcuts.

### Changed
- Windows now use the GUIElement base class and have had their code cleaned up.



## [0.0.5] - February 18th, 2018 

### Added
- Playlist column orders now saved.
- Playlist column positions now saved and are fixed to where user sets them.
- Tab position now saved.
- Last chosen configuration GUI column now saved.
- Tabs are now hideable via the View menu or the GUI section of the
  configuration GUI.

### Changed
- Queue bug that caused a crash is now fixed.
- Fixed blank space of a track row being clicked or drug not working as 
  expected.



## [0.0.4] - January 28th, 2018

### Added
- Database for tracks that failed to scrobble.
- Button to reattempt failed scrobbles.
- Button to clear failed scrobbles.

### Changed
- Playlist views now save what playlist was used last.
- Lock status of playlist is now saved.
- Playlist ComboBox position is now saved.
- Boost build requirement removed.

### Fixed
- Scrobbling now confirmed as fully disableable.


## [0.0.3] - January 21st, 2018

### Added
- Detects if the currently loaded cover image has been deleted and continues
  searching for a new one if it has been deleted.
- Added underlines to the names of the metadata in the TagView.
- Added support for the album artist tag and the date tag.
- About window with version number and contributors.

### Changed
- "Base" changed to "OMP" in MenuBar for Quit MenuItem and About MenuItem.
- TagView ellipsizes a line if it's too long to display in its allocated space.
- General code clean-up, sylization, and code commenting.
- No longer possible to open multiple instances of OMP.
- Removed the & from the File Chooser & Playlist tab.

### Fixed
- A crash after changing the output sink and then restarting playback fixed.
- The cause of an occasional crash when artwork is resizing or first
  rendering.
- Abug caused playback to still follow the last selected row that isn't 
  the playing track after clicking the status bar to select the playing row 
  when Playback Follows Cursor is on.



## [0.0.2] - January 14th, 2018

### Added
- CHANGELOG.md added.
- Search of columns using Ctrl+f.
- Window size remembered.
- Tab with two side-by-side playlists added.
- Tab with a file chooser and a playlist side-by-side added.
- Pane positions remembered.
- Added a number to the status bar indicating that number of selected rows
  in all playlists views of the program.

### Changed
- Fix crash if CUESHEET has extra MODE/2xxx track.
- MAKEFILE_COMPILE install elements moved to install section of Makefile.
- Prevent extra newline in genre metadata if GENRE in the CUESHEET is empty.
- Prevent extra newline in date metadata if DATE in the CUESHEET is empty.
- Changed old name to new name in copyright statement at the top of files.
- General code clean-up and stylization.
- MAKEFILE_COMPILE removed.

### Fixed
- OMP no longer crashes if a CUESHEET has extra an MODE/2xxx track.
- Copy, Cut, Delete, and Paste menu items in the playlist menu now work.



## [0.0.1] - December 31st, 2017

### Added
- First public source and build release.
- Plays mp3, FLAC, Ogg, Ogg FLAC, ALAC, APE, and AAC(m4a).
- Gapless playback.
- CUESHEET support (embedded and external)
- Playlists saved in SQLite3 database.
- Multi-row drag and drop.
- Copy, cut, and pasting of rows. (No clipboard history)
- Random track next and track shuffling.
- Playlist and track looping.
- Stop after current track.
- Playback follows the cursor(selected track).
- Cursor does or doesn't follow the cursor.
- ALSA, Pulseaudio, JACK, or automatic audio sink selection.
- Last.fm scrobbling and track updating.
- Front cover image support.
- Playback of a track can start at the pregap.
