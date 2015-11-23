/**
 * @author Edouard DUPIN
 * 
 * @copyright 2014, Edouard DUPIN, all right reserved
 * 
 * @license APACHE v2.0 (see license file)
 */

#include <test-debug/debug.h>
#include <vector>
#include <gtest/gtest.h>
#include <etk/etk.h>

#undef __class__
#define __class__ "esvg::test"

bool g_visualDebug = false;


int main(int _argc, const char *_argv[]) {
	::testing::InitGoogleTest(&_argc, const_cast<char **>(_argv));
	etk::init(_argc, _argv);
	for (int32_t iii=0; iii<_argc ; ++iii) {
		std::string data = _argv[iii];
		#ifdef DEBUG
		if (data == "--visual-test") {
			TEST_PRINT("visual-test=enable");
			g_visualDebug = true;
		} else 
		#endif
		if (    data == "-h"
		     || data == "--help") {
			TEST_PRINT("esvg-test - help : ");
			TEST_PRINT("    " << _argv[0] << " [options]");
			#ifdef DEBUG
				TEST_PRINT("        --visual-test   Enable decoration in logged file in debug mode only");
			#else
				TEST_PRINT("        No optiions ...");
			#endif
			return -1;
		}
	}
	//etk::initDefaultFolder("esvg-test");
	return RUN_ALL_TESTS();
}