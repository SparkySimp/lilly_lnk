// lilly_linker.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <filesystem>
#include <string>

#include <ImageHlp.h>


/// <summary>
/// The main namespace for the linker Lilly.
/// </summary>
namespace lilly {
	using std::string;

	/// <summary>
	/// Represents a 2-tuple.
	/// 
	/// A 2-tuple (also called a bituple) is a tuple with 2 elements.
	/// </summary>
	/// <typeparam name="T1">The type of the first element in the tuple. </typeparam>
	/// <typeparam name="T2">The type of the second element in the tuple. </typeparam>
	template <typename T1, typename T2> class bituple {
	public:
		/// <summary>
		/// The first item of the tuple.
		/// </summary>
		T1 i1;
		/// <summary>
		/// The second item in the tuple.
		/// </summary>
		T2 i2;

		/// <summary>
		/// Instantiates a 2-tuple.
		/// </summary>
		/// <param name="i1">First element of the tuple.</param>
		/// <param name="i2">Second element of the tuple.</param>
		bituple(T1 i1, T2 i2) {
			this->i1 = i1;
			this->i2 = i2;
		}
	};

	/// <summary>
	/// Represents an operation result.
	/// </summary>
	enum class LillyResult {
		/// <summary>
		/// Operation succeeded.
		/// </summary>
		SUCCESS = 0,
		/// <summary>
		/// A file open operation failed. 
		/// </summary>
		FAILED_FOPEN = -1,

		/// <summary>
		/// Represents another (unknown) case.
		/// </summary>
		OTHER = -2,

		/// <summary>
		/// Repr
		/// </summary>
		MALFORMED_OBJECT_FILE = -3
	};

	typedef LillyResult LResult;
	/// <summary>
	/// Links the given files.
	/// </summary>
	/// <param name="files">The names of the files to link. </param>
	/// <param name="count">The count of the files (adheres to C conventions). </param>
	/// <returns>The operation result.</returns>
	LResult link(string* files, int count);

	/// <summary>
	/// Gets the description of the last error.
	/// </summary>
	/// <param name=""></param>
	/// <returns>A string describing what happened in the last error.</returns>
	string desc_err(void);

	/// <summary>
	/// 
	/// </summary>
	/// <param name="fname"></param>
	/// <returns></returns>
	bituple<std::FILE*, LResult> open_object_file(string fname);
};