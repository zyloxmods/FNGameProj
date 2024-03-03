#pragma once
#include "CoreMinimal.h"
#include "FortPlacedBuilding.generated.h"

USTRUCT(BlueprintType)
struct FFortPlacedBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BuildingTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlacedTag;
    
    FORTNITEGAME_API FFortPlacedBuilding();
};

