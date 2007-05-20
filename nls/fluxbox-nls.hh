// This file generated by nlsinfo -H -N FBNLS ../src ../util, on Mon Jun 21 00:15:24 2004

#ifndef FLUXBOX_NLS_HH
#define FLUXBOX_NLS_HH

namespace FBNLS {

enum {
	AlignSet = 1,
	AlignBottomCenter = 1,
	AlignBottomLeft = 2,
	AlignBottomRight = 3,
	AlignHorizontal = 4,
	AlignLeft = 5,
	AlignLeftBottom = 6,
	AlignLeftCenter = 7,
	AlignLeftTop = 8,
	AlignRelative = 9,
	AlignRight = 10,
	AlignRightBottom = 11,
	AlignRightCenter = 12,
	AlignRightTop = 13,
	AlignTopCenter = 14,
	AlignTopLeft = 15,
	AlignTopRight = 16,
	AlignVertical = 17,

	BaseDisplaySet = 2,
	BaseDisplayAborting = 1,
	BaseDisplayShuttingDown = 2,
	BaseDisplaySignalCaught = 3,

	CommonSet = 3,
	CommonAlpha = 1,
	CommonAutoHide = 2,
	CommonCompiled = 3,
	CommonCompiledOptions = 4,
	CommonCompiler = 5,
	CommonCompilerVersion = 6,
	CommonDefaultInitFile = 7,
	CommonDefaultKeyFile = 8,
	CommonDefaultLocalePath = 9,
	CommonDefaultMenuFile = 10,
	CommonDefaultStyle = 11,
	CommonDefaults = 12,
	CommonDisabled = 13,
	CommonError = 14,
	CommonFluxboxVersion = 15,
	CommonMaximizeOver = 16,
	CommonSvnRevision = 17,
	CommonVisible = 18,
	CommonBackgroundWarning = 19,

	ConfigmenuSet = 4,
	ConfigmenuAntiAlias = 1,
	ConfigmenuAutoRaise = 2,
	ConfigmenuClickRaises = 3,
	ConfigmenuClickFocus = 4,
	ConfigmenuDecorateTransient = 5,
	ConfigmenuDesktopWheeling = 6,
	ConfigmenuFocusLast = 7,
	ConfigmenuFocusModel = 8,
	ConfigmenuFocusNew = 9,
	ConfigmenuFullMax = 10,
	ConfigmenuImageDithering = 11,
	ConfigmenuOpaqueMove = 12,
// disabled, obsolete:	ConfigmenuSemiSloppyFocus = 13,
	ConfigmenuMouseFocus = 14,
	ConfigmenuWorkspaceWarping = 15,
	ConfigmenuForcePseudoTrans = 16,
	ConfigmenuMenuAlpha = 17,
	ConfigmenuTransparency = 18,
	ConfigmenuFocusedAlpha = 19,
	ConfigmenuUnfocusedAlpha = 20,
	ConfigmenuTabMenu = 21,
	ConfigmenuTabsInTitlebar = 22,
	ConfigmenuExternalTabWidth = 23,
	ConfigmenuMouseTabFocus = 24,
	ConfigmenuClickTabFocus = 25,
	ConfigmenuMaxMenu = 26,
	ConfigmenuMaxIgnoreInc = 27,
	ConfigmenuMaxDisableMove = 28,
	ConfigmenuMaxDisableResize = 29,

	EwmhSet = 5,
	EwmhOutOfMemoryClientList = 1,

	FbTkErrorSet = 6,
	FbTkErrorBigHeight = 1,
	FbTkErrorBigWidth = 2,
	FbTkErrorCantFallbackFont = 3,
	FbTkErrorColorAllocation = 4,
	FbTkErrorCreatePixmap = 5,
	FbTkErrorCreateXImage = 6,
	FbTkErrorFailedRead = 7,
	FbTkErrorNoRenderFormat = 8,
	FbTkErrorNoRenderPicture = 9,
	FbTkErrorNoRenderPixmap = 10,
	FbTkErrorNoRenderVisualFormat = 11,
	FbTkErrorOutOfMemory = 12,
	FbTkErrorOutOfMemoryBlue = 13,
	FbTkErrorOutOfMemoryGreen = 14,
	FbTkErrorOutOfMemoryRed = 15,
	FbTkErrorThemeItem = 16,
	FbTkErrorUnsupportedVisual = 17,
	FbTkErrorUsingDefault = 18,

	FluxboxSet = 7,
	FluxboxBadRCFile = 1,
	FluxboxCantLoadGroupFile = 2,
	FluxboxCantLoadRCFile = 3,
	FluxboxCantLoadRCFileTrying = 4,
	FluxboxCantMapWindow = 5,
	FluxboxErrorCreatingDirectory = 6,
	FluxboxErrorNoScreens = 7,
	FluxboxErrorRegexp = 8,
	FluxboxFatalSingleton = 9,
	FluxboxNoDisplay = 10,
	FluxboxWarningLocale = 11,
	FluxboxWarningLocaleModifiers = 12,

	GnomeSet = 8,
	GnomeOutOfMemoryClientList = 1,

	KeysSet = 9,
	KeysBadLine = 1,
	KeysBadMerge = 2,
	KeysInvalidKeyMod = 3,

	MenuSet = 10,
	MenuConfiguration = 1,
	MenuDefaultRootMenu = 2,
	MenuExit = 3,
	MenuIcons = 4,
	MenuLayer = 5,
	MenuOnHead = 6,
	MenuPlacement = 7,
	MenuReconfigure = 8,
	MenuRestart = 9,
	MenuErrorEndEncoding = 10,

	RememberSet = 11,
	RememberDecorations = 1,
	RememberDimensions = 2,
	RememberJumpToWorkspace = 3,
	RememberLayer = 4,
	RememberMenuItemName = 5,
	RememberPosition = 6,
	RememberSaveOnClose = 7,
	RememberShaded = 8,
	RememberSticky = 9,
	RememberUnknown = 10,
	RememberWorkspace = 11,
	RememberHead = 12,
	RememberAlpha = 13,

	ScreenSet = 12,
	ScreenAnotherWMRunning = 1,
	ScreenGeometryFormat = 2,
	ScreenManagingScreen = 3,
	ScreenGeometrySpacing = 4,

	SlitSet = 13,
	SlitClientsMenu = 1,
	SlitCycleDown = 2,
	SlitCycleUp = 3,
	SlitDirection = 4,
	SlitLayer = 5,
	SlitOnHead = 6,
	SlitPlacement = 7,
	SlitSlit = 8,
	SlitSaveSlitList = 9,

	ToolbarSet = 14,
	ToolbarEditWkspcName = 1,
	ToolbarIconbarMode = 2,
	ToolbarIconbarModeAllWindows = 3,
	ToolbarIconbarModeIcons = 4,
	ToolbarIconbarModeNone = 5,
	ToolbarIconbarModeWorkspace = 6,
	ToolbarIconbarModeWorkspaceIcons = 7,
	ToolbarLayer = 8,
	ToolbarOnHead = 9,
	ToolbarPlacement = 10,
	ToolbarToolbar = 11,
	ToolbarWidthPercent = 12,
	ToolbarClock24 = 13,
	ToolbarClock12 = 14,
	ToolbarClockEditFormat = 15,
	ToolbarShowIcons = 16,
	ToolbarIconbarModeNoIcons = 17,
	ToolbarIconbarModeWorkspaceNoIcons = 18,

	WindowSet = 15,
	WindowUnnamed = 1,

	WindowmenuSet = 16,
	WindowmenuClose = 1,
	WindowmenuIconify = 2,
	WindowmenuLayer = 3,
	WindowmenuLower = 4,
	WindowmenuMaximize = 5,
	WindowmenuRaise = 6,
	WindowmenuSendTo = 7,
	WindowmenuShade = 8,
	WindowmenuStick = 9,
	WindowmenuKill = 10,
	WindowmenuDefaultAlpha = 11,

	WorkspaceSet = 17,
	WorkspaceDefaultNameFormat = 1,
	WorkspaceMenuTitle = 2,
	WorkspaceNewWorkspace = 3,
	WorkspaceRemoveLast = 4,

	fbsetrootSet = 18,
	fbsetrootMustSpecify = 1,
	fbsetrootNoPixmapAtoms = 2,
	fbsetrootUsage = 3,

	mainSet = 19,
	mainDISPLAYRequiresArg = 1,
	mainErrorBadAlloc = 2,
	mainErrorBadCast = 3,
	mainErrorOutOfRange = 4,
	mainErrorRuntime = 5,
	mainErrorStandardException = 6,
	mainErrorUnknown = 7,
	mainLOGRequiresArg = 8,
	mainLogFile = 9,
	mainLoggingTo = 10,
	mainRCRequiresArg = 11,
	mainScreenRequiresArg = 12,
	mainUsage = 13,
	mainWarnDisplayEnv = 14,

	LayerSet = 20,
	LayerAboveDock = 1,
	LayerBottom = 2,
	LayerDesktop = 3,
	LayerDock = 4,
	LayerNormal = 5,
	LayerTop = 6,

	dummy_not_used = 0 // just for the end

}; // end enum

}; // end namespace FBNLS

#endif // FLUXBOX_NLS_HH
