#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortBuildingSoundsPerResourceType.h"
#include "FortBuildingAudioBank.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortBuildingAudioBank : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortBuildingSoundsPerResourceType Sounds[4];
    
    UFortBuildingAudioBank();
};

