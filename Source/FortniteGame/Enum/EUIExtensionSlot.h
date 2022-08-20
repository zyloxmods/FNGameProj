#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EUIExtensionSlot : uint8 
{
	TopRightCorner,
	GameInfoBox,
	Quickbar,
	QuickbarUnderlay,
	UpperCenter,
	CrosshairRight,
	UnderSquadInfo,
	FullScreenMap,
	BelowRespawnWidget,
	BelowCompass,
	UnderTeammateStatus,
	ControllerBindingCallout,
	AboveStormMessageSlot,
	CustomMinigameCallouts,
	UnderLocalPlayerInfo,
	InventoryScreenReplacement,
	Reticle,
	KillfeedSlot,
	PrioritizedContextualSlot,
	RightOfTeammateStatus,
	TeammateStatusPortraitOverlay,
	MobileHUDBottomRight,
	InventoryScreenTab,
	InventoryPanelSubTab,
	MiniMapOverlay,
	EUIExtensionSlot_MAX,
};
