// OpenSpaceRenderingLibrary.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "OpenSpaceRenderingLibrary.h"
#include <string>

// This is an example of an exported variable
OPENSPACERENDERINGLIBRARY_API int nOpenSpaceRenderingLibrary=0;

// This is an example of an exported function.
OPENSPACERENDERINGLIBRARY_API int fnOpenSpaceRenderingLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.

OPENSPACERENDERINGLIBRARY_API signed int GLI_DRV_bBeginScene()
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API bool GLI_DRV_bEndScene()
{
	return false;
}

OPENSPACERENDERINGLIBRARY_API signed int GLI_DRV_bLockDevice(int* a1, int* a2)
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_bPrepareForGliWindowed(HWND hWnd)
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API bool GLI_DRV_bUnlockDevice()
{
	return false;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_bWindowedModeIsOptimized()
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_fn_lGetAllDisplayConfig(int(__cdecl* a1)(int, int, int, int, int))
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_fnl_EnumModes(LPVOID lpContext, int a2)
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_hChangeMode(int a1, int xRight, int yBottom, int a4)
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API signed int GLI_DRV_lGetDllInfo(const char* key, char* returnValue)
{

	std::string keyString = std::string(key);
	std::string returnString = "???";

	if (keyString == "Name") {
		returnString = "OpenSpaceRenderingLibrary";
	} else if (keyString == "Description") {
		returnString = "New implementation of the rendering library used for Rayman 2";
	} else if (keyString == "Version") {
		returnString = "4.2.0.69";
	} else if (keyString == "Code") {
		returnString = "OSRL";
	}

	strcpy_s(returnValue, returnString.length() + 1, returnString.c_str());

	return 1;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_lGetSizeOfTexture(int a1)
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API signed int GLI_DRV_lSetCommonData(const char* a1, int a2)
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API signed int GLI_DRV_lSetCommonFct(const char* a1, int(__cdecl* a2)(int))
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_vActivateGli(HWND hWnd, int a2)
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_vAddBlackPolygon(signed int a1, signed int a2, signed int a3, signed int a4)
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_vClearDevice(int a1, int a2, int a3)
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_vClearZBufferRegion()
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_vCloseDriver()
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API void GLI_DRV_vComputeFogEffect()
{
}

OPENSPACERENDERINGLIBRARY_API void GLI_DRV_vDoOpaqueTextureSelection(int a1)
{
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_vDownLoadTextures(int a1, int a2, int a3)
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_vFlipDevice()
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_vFlipDeviceWithSyncro()
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int* GLI_DRV_vGetStats(int* a1, int* a2)
{
	return nullptr;
}

OPENSPACERENDERINGLIBRARY_API void GLI_DRV_vNoBlackPolygon()
{
}

OPENSPACERENDERINGLIBRARY_API void GLI_DRV_vOptimizedWindowedMode()
{
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_vPrepareForGliFullScreen()
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API long GLI_DRV_vReadaptDisplay()
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_vSendSingleLineToClip()
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_vSendSpriteToClip(int a1, int a2, int a3, int a4, int a5)
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_vSendSpriteToClipWithColors(int a1, int a2, int a3, int a4, float a5, int a6)
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API void GLI_DRV_vSendSpriteToClipWithUV(int a1, int a2, int a3, int a4, float a5, int a6)
{
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_vSetClipWindow(float a1, int a2, int a3, int a4, int a5)
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_vSetZClip(float a1, int a2)
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_vUnLoadTextures()
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_vWrite16bBitmapToBackBuffer(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API unsigned int GLI_DRV_xClearViewingList()
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_xInitDriver(HWND hWnd, int a2, int xRight, int yBottom, int a5)
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_xSendElementTIToClip_TRIANGLES(int a1, int a2)
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API unsigned int GLI_DRV_xSendListToViewport()
{
	return 0;
}

OPENSPACERENDERINGLIBRARY_API int GLI_DRV_xSendSingleTriangleToClip_TRIANGLES(int a1, int a2, int a3)
{
	return 0;
}
