#pragma once
#include "CoreMinimal.h"
#include "CreativeIslandMatchmakingSettings.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FCreativeIslandMatchmakingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumNumberOfPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumNumberOfPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetNumberOfPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowJoinInProgress;
    
    FCreativeIslandMatchmakingSettings();
};

