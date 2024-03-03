#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SavedSpectatorCameraState.h"
#include "SavedPlayerSpectatorCameraData.generated.h"

USTRUCT(BlueprintType)
struct FSavedPlayerSpectatorCameraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, FSavedSpectatorCameraState> PlayerToCameraStateMap;
    
    FORTNITEGAME_API FSavedPlayerSpectatorCameraData();
};

