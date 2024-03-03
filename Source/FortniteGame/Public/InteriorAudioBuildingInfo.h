#pragma once
#include "CoreMinimal.h"
#include "InteriorAudioBuildingInfo.generated.h"

class ABuildingSMActor;

USTRUCT(BlueprintType)
struct FInteriorAudioBuildingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* Actor;
    
    FORTNITEGAME_API FInteriorAudioBuildingInfo();
};

