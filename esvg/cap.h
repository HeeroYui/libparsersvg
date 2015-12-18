/**
 * @author Edouard DUPIN
 * 
 * @copyright 2011, Edouard DUPIN, all right reserved
 * 
 * @license APACHE v2.0 (see license file)
 */

#ifndef __ESVG_CAP_H__
#define __ESVG_CAP_H__

#include <etk/types.h>

namespace esvg {
	enum cap {
		cap_butt,
		cap_round,
		cap_square
	};
	/**
	 * @brief Debug operator To display the curent element in a Human redeable information
	 */
	std::ostream& operator <<(std::ostream& _os, enum esvg::cap _obj);
}

#endif

