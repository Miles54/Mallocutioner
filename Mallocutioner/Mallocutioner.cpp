// Mallocutioner, Mallocutes a computer.
// Check license.txt for License.

#include <iostream>
#include <cinttypes>
#include <string>
#include <thread>
#define PointerCount 0x80000
void* Pointers[PointerCount];
int main(int argc, char* argv[]) {
	std::cout << "Mallocutioner, Memory allocation \"Tool\"." << std::endl << std::flush;
	bool Commit = false;
	bool DontFree = false;
	bool DontFill = false;
	bool Copyright = false;
	bool License = false;
	bool Hold = false;
	std::string Path = argv[0];
	for (int argi = 1; argi < argc; argi++) {
		std::string arg = argv[argi];
		if (arg == "Understood") {
			Commit = true;
		}
		if (arg == "DontFree") {
			DontFree = true;
		}
		if (arg == "DontFill") {
			DontFill = true;
		}
		if (arg == "Copyright") {
			Copyright = true;
		}
		if (arg == "License") {
			License = true;
		}
		if (arg == "Hold") {
			DontFree = true;
			Hold = true;
		}
	}
	if (Copyright) {
		std::cout << "Copyright (c) Ethan Miles Hardt" << std::endl << std::flush;
		std::cout << "Use Command \"License\" for more information" << std::endl << std::flush;
		std::cout << std::endl << std::flush;
		return 0;
	}
	if (License) {
		std::cout << "Custom License." << std::endl << std::flush;
		std::cout << "" << std::endl << std::flush;
		std::cout << "Copyright (c) 2025 Ethan Miles Hardt" << std::endl << std::flush;
		std::cout << "" << std::endl << std::flush;
		std::cout << "Permission is granted, free of charge, to use, modify, study, reverse engineer," << std::endl << std::flush;
		std::cout << "and redistribute the source code under the following terms: " << std::endl << std::flush;
		std::cout << "	1: Source code redistributions must carry the same license." << std::endl << std::flush;
		std::cout << "	2: Source code redistributions must not be separated from any copyright notice." << std::endl << std::flush;
		std::cout << "	3: Source code redistributions must not falsly imply or state endorsement." << std::endl << std::flush;
		std::cout << "	4: Source code must not be used for training AI" << std::endl << std::flush;
		std::cout << "" << std::endl << std::flush;
		std::cout << "Permission is granted to compile the source code and/or release the resulting binary program under the following terms:" << std::endl << std::flush;
		std::cout << "" << std::endl << std::flush;
		std::cout << "	1: Binary distributions must either be packaged with copyright information, " << std::endl << std::flush;
		std::cout << "		or must have functionality to produce such information on request." << std::endl << std::flush;
		std::cout << "	2: Binary distributions must not falsly imply or state endorsement." << std::endl << std::flush;
		std::cout << "	3: Binaries must not be used for training AI" << std::endl << std::flush;
		std::cout << "" << std::endl << std::flush;
		std::cout << "If any term or section is unenforcable, the effective license is all enforcable terms and sections," << std::endl << std::flush;
		std::cout << "except if the disclaimer is unenforcable, then no license is granted." << std::endl << std::flush;
		std::cout << "" << std::endl << std::flush;
		std::cout << "Disclaimer:" << std::endl << std::flush;
		std::cout << "THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR" << std::endl << std::flush;
		std::cout << "IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY," << std::endl << std::flush;
		std::cout << "FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE" << std::endl << std::flush;
		std::cout << "AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER" << std::endl << std::flush;
		std::cout << "LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM," << std::endl << std::flush;
		std::cout << "OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE" << std::endl << std::flush;
		std::cout << "SOFTWARE." << std::endl << std::flush;
		return 0;
	}

	if (!Commit) {
		std::cout << "Warning!" << std::endl << std::flush;
		std::cout << "This tool will do something dumb:" << std::endl << std::flush;
		std::cout << "It will allocate all the memory that it can." << std::endl << std::flush;
		std::cout << std::endl << std::flush;
#ifdef WIN32
		std::cout << "This usually results in many programs failing." << std::endl << std::flush;
		std::cout << "You may need to restart your computer to regain normal activity." << std::endl << std::flush;
#endif
#ifdef __linux__
		std::cout << "By default, overcommit is active which might allow normal operation" << std::endl << std::flush;
		std::cout << "while this program is running." << std::endl << std::flush;
		std::cout << "I make no promises. Good luck." << std::endl << std::flush;
#endif
		std::cout << std::endl << std::flush;
		std::cout << "If you unserstand and wish to continue," << std::endl << std::flush;
		std::cout << "re-run this program with argument \"Understood\"." << std::endl << std::flush;
		std::cout << "otherwise, you may wish to delete this program." << std::endl << std::flush;
		std::cout << "This program should drop no extra files or config," << std::endl << std::flush;
		std::cout << "so deletion should be clean and simple." << std::endl << std::flush;
		std::cout << "(This program can be found at: " << Path << ")" << std::endl << std::flush;
		std::cout << std::endl << std::flush;
		std::cout << "Please note I take no responsibility for any damage done," << std::endl << std::flush;
		std::cout << "or any work lost." << std::endl << std::flush;
		std::cout << "While this program specifically does one thing (many malloc() calls)," << std::endl << std::flush;
		std::cout << "Many programs do not like it when they do not have memory." << std::endl << std::flush;
		std::cout << "Excersise caution." << std::endl << std::flush;
		std::cout << std::endl << std::flush;
		return 0;
	} else {
		std::cout << "Excellent, Let's begin." << std::endl << std::flush;
	}
	void* Balloon = malloc(262144); // For ending operations.



	for (uint64_t Index = 0; Index < PointerCount; Index++) {
		Pointers[Index] = nullptr;
	}
	std::cout << "For Stability, Mallocutioner practices radio silence until it finishes." << std::endl << std::flush;
	uint64_t Index			= 0;
	uint64_t Size			= 0x8000'0000'0000'0000;
	uint64_t Allocate		= 0;
	uint64_t Allocations	= 0;
	bool Full = false;
	while (true) {
		uint8_t* Ptr = (uint8_t*) malloc(Size);
		if (Ptr != nullptr) {
			Allocate += Size;
			Allocations++;
			bool Stored = false;
			if (!DontFill) {
				for (uint64_t FillIndex = 0; FillIndex < Size; FillIndex++) {
					Ptr[FillIndex] = uint8_t(rand() % 256);
				}
			}

			Pointers[Index++] = Ptr;
			if (Index == PointerCount) {
				Full = false;
				break;
			}
		} else {
			Size = Size >> 1;
			if (Size == 0) {
				Full = true;
				break;
			}
		}
	}
	/*///
	void** FreePtr = InitialPointer;
	while (FreePtr != nullptr) {
		void** Carry = FreePtr;
		FreePtr = (void**) *FreePtr;
		free(Carry);
	}
	//*///
	free(Balloon); // Pop the Balloon to gain some working memory again.

	if (!DontFree) {
		for (uint64_t freeIndex = 0; freeIndex < PointerCount; freeIndex++) {
			void* Ptr = Pointers[freeIndex];
			if (Ptr != nullptr) {
				free(Ptr);
			}
		}
	}
	std::cout << "Bytes Mallocuted: " << std::to_string(Allocate) << std::endl << std::flush;
	std::cout << "Mallocutions: " << std::to_string(Allocations) << std::endl << std::flush;
	if (Full) {
		std::cout << "Mallocuted all free bytes (at some moment in time)" << std::endl << std::flush;
	} else {
		std::cout << "Hit pointer array." << std::endl << std::flush;
	}
	if (DontFree) {
		std::cout << "As per request, we have not freed the memory" << std::endl << std::flush;
		std::cout << "Perhaps you are testing your system's memory management." << std::endl << std::flush;
	}
	std::this_thread::sleep_for(std::chrono::seconds(1));
	if (Hold) {
		std::cout << "Press Ctrl-C to end this program." << std::endl << std::flush;
		while (true) {
			std::this_thread::sleep_for(std::chrono::milliseconds(5));
		}
	}

	return 0;
}