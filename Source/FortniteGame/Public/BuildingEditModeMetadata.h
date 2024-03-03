#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ConnectivityCube.h"
#include "BuildingEditModeMetadata.generated.h"

class UAIHotSpotConfig;
class UBuildingActorHotSpotConfig;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UBuildingEditModeMetadata : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSupportNextPieceAssist: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasNavigableOpening: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasCustomAttackLocation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildingActorHotSpotConfig* DefaultHotspotConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIHotSpotConfig* ShootingHotSpotConfig;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConnectivityCube ConnectivityCubeData;
    
public:
    UBuildingEditModeMetadata();
};

