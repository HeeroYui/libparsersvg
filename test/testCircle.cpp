/** @file
 * @author Edouard DUPIN
 * @copyright 2014, Edouard DUPIN, all right reserved
 * @license MPL v2.0 (see license file)
 */

#include <etest/etest.hpp>
#include <esvg/esvg.hpp>
#include "main.hpp"

TEST(TestCircle, fill) {
	etk::String data("<?xml version='1.0' encoding='UTF-8' standalone='no'?>"
	                 "<svg height='100' width='100'>"
	                 "	<circle cx='50' cy='50' r='40' fill='red' />"
	                 "</svg>");
	esvg::Document doc;
	doc.parse(data);
	etk::uri::writeAll(etk::Path("TestCircle_fill.svg"), data);
	doc.generateAnImage(etk::Path("TestCircle_fill.bmp"), g_visualDebug);
}

TEST(TestCircle, stroke) {
	etk::String data("<?xml version='1.0' encoding='UTF-8' standalone='no'?>"
	                 "<svg height='100' width='100'>"
	                 "	<circle cx='50' cy='50' r='40' stroke='green' stroke-width='3' />"
	                 "</svg>");
	esvg::Document doc;
	doc.parse(data);
	etk::uri::writeAll(etk::Path("TestCircle_stroke.svg"), data);
	doc.generateAnImage(etk::Path("TestCircle_stroke.bmp"), g_visualDebug);
}

TEST(TestCircle, fill_and_stroke) {
	etk::String data("<?xml version='1.0' encoding='UTF-8' standalone='no'?>"
	                 "<svg height='100' width='100'>"
	                 "	<circle cx='50' cy='50' r='40' stroke='green' stroke-width='3' fill='red' />"
	                 "</svg>");
	esvg::Document doc;
	doc.parse(data);
	etk::uri::writeAll(etk::Path("TestCircle_fill_and_stroke.svg"), data);
	doc.generateAnImage(etk::Path("TestCircle_fill_and_stroke.bmp"), g_visualDebug);
}
