/** @file
 * @author Edouard DUPIN
 * @copyright 2011, Edouard DUPIN, all right reserved
 * @license MPL v2.0 (see license file)
 */

#include <esvg/render/Element.hpp>
#include <esvg/debug.hpp>

esvg::render::ElementCurveTo::ElementCurveTo(bool _relative, const vec2& _pos1, const vec2& _pos2, const vec2& _pos):
  Element(esvg::render::path_curveTo, _relative) {
	m_pos = _pos;
	m_pos1 = _pos1;
	m_pos2 = _pos2;
}



etk::String esvg::render::ElementCurveTo::display() const {
	return etk::String("pos=") + etk::toString(m_pos) + " pos1=" + etk::toString(m_pos1) + " pos2=" + etk::toString(m_pos2);
}