/**
 * @author Edouard DUPIN
 * 
 * @copyright 2011, Edouard DUPIN, all right reserved
 * 
 * @license APACHE v2.0 (see license file)
 */

#include <esvg/render/Element.h>
#include <esvg/debug.h>


#undef __class__
#define __class__	"rerder::ElementStop"

esvg::render::ElementStop::ElementStop():
  Element(esvg::render::path_stop) {
	
}

std::string esvg::render::ElementStop::display() const {
	return "";
}

