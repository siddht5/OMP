/* ////////////////////////////////////////////////////////////////////////////   
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
//////////////////////////////////////////////////////////////////////////// */





//         //
//         //
//         //
// Headers ////////////////////////////////////////////////////////////////////
//         //
//         //
//         //

//              //
//              //
// Class Header ///////////////////////////////////////////////////////////////
//              //
//              //

#include "Errors.h"





//                 //
//                 //
// Program Headers ////////////////////////////////////////////////////////////
//                 //
//                 //

#include "../Base.h"

#include "../GUI/Elements/ChildWindows/ChildWindow.h"

#include "../GUI/Elements/ChildWindows/ChildWindows.h"





//                 //
//                 //
// Outside Headers ////////////////////////////////////////////////////////////
//                 //
//                 //

#include <ctime>

#include <fstream>

#include <gtkmm/textview.h>

#include <iostream>

#include <string>





//            //
//            //
//            //
// Namespaces /////////////////////////////////////////////////////////////////
//            //
//            //
//            //

using namespace std;





//        //
//        //
//        //
// Macros /////////////////////////////////////////////////////////////////////
//        //
//        //
//        //





//                 //
//                 //
//                 //
// Class Functions ////////////////////////////////////////////////////////////
//                 //
//                 //
//                 //

//             //
//             //
// Constructor ////////////////////////////////////////////////////////////////
//             //
//             //

Errors::Errors(Base& base_ref)

// Inherited Class

: Parts(base_ref)



// Member Variables

, errors_log_file_(new ofstream)

{

} 





//            //
//            //
// Destructor /////////////////////////////////////////////////////////////////
//            //
//            //

Errors::~Errors()
{

  // 
  delete errors_log_file_;

}





//                  //
//                  //
// Member Functions ///////////////////////////////////////////////////////////
//                  //
//                  //

void Errors::Write_Error(const char* error_c_str)
{

  // 
  string errors_log_file_str = base() . config_directory_c_str();



  // 
  errors_log_file_str += "/errors.log";

  //
  errors_log_file_ -> open(errors_log_file_str . c_str(), std::ofstream::app);



  // current date/time based on current system
  time_t time_now = time(0);
   
  // convert now to string form
  char* date_and_time_c_str = ctime(&time_now);



  // 
  string final_error_str;

  // 
  final_error_str += "Date: ";

  // 
  final_error_str += date_and_time_c_str;

  // 
  final_error_str += "Error: ";

  // 
  final_error_str += error_c_str;

  // 
  final_error_str += "\n\n\n";



  // 
  (*errors_log_file_) << final_error_str;


  // 
  errors_log_file_ -> close();



  // 
  ChildWindow* errors_window_ptr
    = windows() . Create_New_Window("Error(s)", nullptr);



  // 
  Gtk::TextView* errors_textview_ptr = Gtk::manage(new Gtk::TextView);  

  // 
  errors_window_ptr -> box()
    . pack_start(*errors_textview_ptr, Gtk::PACK_EXPAND_WIDGET);

  // 
  errors_textview_ptr -> set_editable(false);

  // 
  errors_textview_ptr -> get_buffer() -> set_text(final_error_str);



  // 
  errors_window_ptr -> Show();

}





//         //
//         //
// Getters ////////////////////////////////////////////////////////////////////
//         //
//         //

