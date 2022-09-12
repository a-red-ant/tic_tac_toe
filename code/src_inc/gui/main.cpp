
#include "main_window.hpp"

int main( int argc, char** argv )
{
	auto app = Gtk::Application::create( argc, argv, "gareth.co.uk" );

	gareth::gui::main_window w( "Tic Tac Toe" );

	auto ret = app->run( w );

	return ret;
}
