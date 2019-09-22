#ifndef DLL_H
#define DLL_H
#include <iostream>
#include <windows.h>

class DLL
{
    public:
        std::string fileName;
        HMODULE handle;

        FARPROC ModPreInitialize;
        FARPROC ModInitialize;
        FARPROC ModMajorVersion;
        FARPROC ModMinorVersion;

        // Callbacks
        FARPROC HandleChat;

        DLL(std::string fileName);
        HMODULE Load();
        virtual ~DLL();

    protected:

    private:
};

#endif // DLL_H
