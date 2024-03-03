#pragma once
#include "CoreMinimal.h"
#include "ActiveMusicPackChangedDelegateDelegate.generated.h"

class UAthenaMusicPackItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActiveMusicPackChangedDelegate, const UAthenaMusicPackItemDefinition*, NewMusicPack, float, StartTimeOffset);

