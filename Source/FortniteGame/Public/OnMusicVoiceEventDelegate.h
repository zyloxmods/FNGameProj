#pragma once
#include "CoreMinimal.h"
#include "OnMusicVoiceEventDelegate.generated.h"

class UFortMusicVoice;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMusicVoiceEvent, UFortMusicVoice*, Voice);

