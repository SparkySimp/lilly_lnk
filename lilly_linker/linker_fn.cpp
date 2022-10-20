#include "lilly_linker.h"

namespace lilly {
	string ___ERROR_MESSAGE;

	LResult link(string* files, int count) {
		___ERROR_MESSAGE = string("Not implemented.", 17);
		return LResult::OTHER;
	}

	bituple<std::FILE*, LResult> open_object_file(string fname) {
		std::FILE* objfile;
		if ((objfile = fopen(fname.c_str(), "rb")) == NULL) {
			___ERROR_MESSAGE = string("Failed to open \"", 17);
			___ERROR_MESSAGE.append(fname);
			___ERROR_MESSAGE.append("\": ");
			___ERROR_MESSAGE.append(strerror(errno));
			return bituple< std::FILE*, LResult >(nullptr, LResult::FAILED_FOPEN);
		}
	}
}
