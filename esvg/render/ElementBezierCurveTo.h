/**
 * @author Edouard DUPIN
 * 
 * @copyright 2011, Edouard DUPIN, all right reserved
 * 
 * @license APACHE v2.0 (see license file)
 */
#pragma once

#include <etk/types.h>
#include <etk/math/Vector2D.h>
#include <esvg/render/Element.h>

namespace esvg {
	namespace render {
		class ElementBezierCurveTo : public esvg::render::Element {
			public:
				ElementBezierCurveTo(bool _relative, const vec2& _pos1, const vec2& _pos);
			public:
				virtual std::string display() const;
		};
	}
}

