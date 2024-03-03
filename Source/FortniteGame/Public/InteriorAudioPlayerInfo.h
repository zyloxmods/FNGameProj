#pragma once
#include "CoreMinimal.h"
#include "EInteriorAudioBuildingDirection.h"
#include "EInteriorAudioQuadrant.h"
#include "EStructuralWallPosition.h"
#include "InteriorAudioDirectionScanInfo.h"
#include "InteriorAudioPlayerInfo.generated.h"

class ABuildingSMActor;
class UAmbientAudioDataAsset;

USTRUCT(BlueprintType)
struct FInteriorAudioPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAmbientAudioDataAsset* CurrentAmbientBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAmbientAudioDataAsset* PreviousAmbientBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInteriorAudioBuildingDirection, FInteriorAudioDirectionScanInfo> Directions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStructuralWallPosition, ABuildingSMActor*> StartingWalls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* CenterCellActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteriorAudioQuadrant Quadrant;
    
    FORTNITEGAME_API FInteriorAudioPlayerInfo();
};

