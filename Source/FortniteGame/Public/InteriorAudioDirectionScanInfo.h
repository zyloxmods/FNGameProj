#pragma once
#include "CoreMinimal.h"
#include "InteriorAudioBuildingInfo.h"
#include "InteriorAudioDirectionScanInfo.generated.h"

class ABuildingSMActor;
class UAudioComponent;

USTRUCT(BlueprintType)
struct FInteriorAudioDirectionScanInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteriorAudioBuildingInfo Building;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SourceBusComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* SourceBusActor;
    
    FORTNITEGAME_API FInteriorAudioDirectionScanInfo();
};

