/**
 * @author Edouard DUPIN
 * 
 * @copyright 2011, Edouard DUPIN, all right reserved
 * 
 * @license APACHE v2.0 (see license file)
 */

#ifndef __ESVG_BASE_H__
#define __ESVG_BASE_H__

#include <etk/types.h>
#include <vector>
#include <etk/math/Vector2D.h>
#include <etk/math/Matrix2.h>
#include <etk/Color.h>

#include <exml/exml.h>
#include <esvg/Renderer.h>

namespace esvg {
	/**
	 * @brief Painting mode of the Object:
	 */
	enum paint {
		paint_none, //!< No painting.
		paint_color, //!< Painting a color.
		paint_gradientLinear, //!< Painting a linear gradient.
		paint_gradientRadial //!< Painting a radial gradient.
	};
	/**
	 * @brief Indicates what happens if the gradient starts or ends inside the bounds of the target rectangle.
	 */
	enum spread {
		spread_pad, //!< 'pad' spread.
		spread_reflect, //!< 'reflect' spread.
		spread_repead, //!< 'repead' spread.
	};
	
	enum cap {
		cap_butt,
		cap_round,
		cap_square
	};
	
	enum join {
		join_miter,
		join_round,
		join_bevel
	};
	
	class PaintState {
		public:
			PaintState();
			void clear();
		public:
			etk::Color<uint8_t,4> fill;
			etk::Color<uint8_t,4> stroke;
			float strokeWidth;
			bool flagEvenOdd; //!< Fill rules
			enum esvg::cap lineCap;
			enum esvg::join lineJoin;
			vec2 viewPort;
			float opacity;
	};
	
	class Base {
		protected:
			PaintState m_paint;
			mat2 m_transformMatrix; //!< specific render of the curent element
			const char * spacingDist(int32_t _spacing);
		public:
			Base() {};
			Base(PaintState _parentPaintState);
			virtual ~Base() { };
			virtual bool parse(const std::shared_ptr<exml::Element>& _element, mat2& _parentTrans, vec2& _sizeMax);
			
			virtual void draw(esvg::Renderer& _myRenderer, mat2& _basicTrans, int32_t _level=1);
			
			virtual void display(int32_t _spacing) { };
			void parseTransform(const std::shared_ptr<exml::Element>& _element);
			void parsePosition(const std::shared_ptr<const exml::Element>& _element, vec2 &_pos, vec2 &_size);
			float parseLength(const std::string& _dataInput);
			void parsePaintAttr(const std::shared_ptr<const exml::Element>& _element);
			etk::Color<uint8_t,4> parseColor(const std::string& _inputData);
	};
};

#endif

