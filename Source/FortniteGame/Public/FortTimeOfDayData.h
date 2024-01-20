#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WorldAmbientPropertiesMatchingGameContext.h"
#include "FortTimeOfDayData.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortTimeOfDayData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorldAmbientPropertiesMatchingGameContext> WorldAmbientPropertiesList;
    
public:
    UFortTimeOfDayData();
};

