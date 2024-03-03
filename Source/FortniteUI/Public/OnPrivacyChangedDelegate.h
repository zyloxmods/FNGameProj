#pragma once
#include "CoreMinimal.h"
#include "Party/PartyTypes.h"
#include "OnPrivacyChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPrivacyChanged, EPartyType, PrivacyType, bool, bAllowFriendsOfFriends);

