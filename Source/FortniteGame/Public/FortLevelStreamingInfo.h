#pragma once
#include "CoreMinimal.h"
#include "EFortLevelStreamingState.h"
#include "FortLevelStreamingInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortLevelStreamingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortLevelStreamingState> LevelState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailedToLoad;
    
    FORTNITEGAME_API FFortLevelStreamingInfo();
};

