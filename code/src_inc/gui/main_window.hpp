
// This is a guard, it is used to avoid multiple definitions of the same thing
#ifndef GARETH_GUI_MAIN_WINDOW_HPP__
#define GARETH_GUI_MAIN_WINDOW_HPP__
// Good to know :D

// This is an include with <> means look for it outside of this directory, with
// "" means look for it first in this directory
#include <gtkmm/window.h>

#include <string>

// this is definition of namespace gui inside namespace gareth
namespace gareth::gui
{
class main_window : public Gtk::Window
{
public:
	/**
	 * This type of comments are used for doxygen, quite useful
	 * ctor with title param.
	 * @param title
	 */
	main_window( std::string const& title )
		: Gtk::Window()
	{
		set_title( title );
	}

	// this is a virtual destructor
	virtual ~main_window() { }

protected:
	// stuff with protected access, look for inheritance.

private:
	// stuff with private access, look for inheritance.

}; // Not to forget the semicolon if it is forgotten the error message spat out by the compiler is a nightmare.
} // namespace gareth::gui

// this closes macro #ifdef, #ifndef or #if
#endif
