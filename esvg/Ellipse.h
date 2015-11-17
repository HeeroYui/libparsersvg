/**
 * @author Edouard DUPIN
 * 
 * @copyright 2011, Edouard DUPIN, all right reserved
 * 
 * @license APACHE v2.0 (see license file)
 */

#ifndef __ESVG_ELLIPSE_H__
#define __ESVG_ELLIPSE_H__

#include <esvg/Base.h>

namespace esvg {
	class Ellipse : public esvg::Base {
		private:
			vec2 m_c; //!< Center property of the ellipse
			vec2 m_r; //!< Radius property of the ellipse
		public:
			Ellipse(PaintState _parentPaintState);
			~Ellipse();
			virtual bool parse(const std::shared_ptr<exml::Element>& _element, mat2& _parentTrans, vec2& _sizeMax);
			virtual void display(int32_t _spacing);
			virtual void aggDraw(esvg::Renderer& _myRenderer, mat2& _basicTrans, int32_t _level);
	};
};

#endif

