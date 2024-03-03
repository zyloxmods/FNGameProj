#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortSourceWorldAndOverlayWorld.h"
#include "FortLevelOverlayConfig.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortLevelOverlayConfig : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSourceWorldAndOverlayWorld> OverlayList;
    
public:
    UFortLevelOverlayConfig();
};

