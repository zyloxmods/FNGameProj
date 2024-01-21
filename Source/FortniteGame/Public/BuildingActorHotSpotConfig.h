#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BuildingActorHotSpotDirection.h"
#include "BuildingActorHotSpotConfig.generated.h"

class UAIHotSpotConfig;

UCLASS(Blueprintable)
class UBuildingActorHotSpotConfig : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingActorHotSpotDirection DirectionSetup[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingActorHotSpotDirection DefaultSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIHotSpotConfig* ExtraTypeConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasDirectionalSetup: 1;
    
public:
    UBuildingActorHotSpotConfig();
};

