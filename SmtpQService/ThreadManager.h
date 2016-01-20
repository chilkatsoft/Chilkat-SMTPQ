#pragma once

class SmtpThread;


#include <hash_map>
#include <memory>
#include <vector>
#include <CkString.h>
#include <CkStringArray.h>
#include <CkMailMan.h>
#include "SmtpqBase.h"

using namespace std;

class ThreadManager : public SmtpqBase
{
    private:

	CkStringArray m_deadEmlFiles;

	// Vector of files (paths) that need to be processed.
	// A thread has not yet started for files in this vector.
	vector<string> m_files;

	SmtpThread **m_threadSlot;
	CkMailMan **m_cachedMailman;

	string getAppSetting(const char *keyName, string defaultValue);
	int numThreadSlotsOccupied(void);

	CkMailMan *get_a_mailman(void);
	void cache_a_mailman(CkMailMan *pMailman);

	// Start a thread to process a single file.
	void startThread(SmtpThread *smtpThread);

	// Return true if the file is in m_files or m_threads.
	bool isFileScheduled(string filename);

	// Look for files that are not yet in either of m_files or m_threads.
	void scanForNewFiles(void);

	// Check for threads that have ended.
	void checkThreads(void);

	// Start new threads if possible.
	void startThreads(void);

	// Try deleting any abandoned .eml files
	void deleteDeadEmlFiles(void);


    public:
	ThreadManager();
	virtual ~ThreadManager();

	bool initAppSettings(void);
	void recreateThreadSlots(void);

	void run(bool bRunForever);

	void tmFinalize(void);
};


