#pragma once
#include "CoreMinimal.h"
#include "InteriorAudioBuildingRotationConstraint.h"
#include "InteriorAudioDictionaryEntry.generated.h"

USTRUCT(BlueprintType)
struct FInteriorAudioDictionaryEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EditCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteriorAudioBuildingRotationConstraint RotationConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SameCellBuildingCount;
    
    FORTNITEGAME_API FInteriorAudioDictionaryEntry();
};

