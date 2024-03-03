#pragma once
#include "CoreMinimal.h"
#include "BuildingActorClassData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FBuildingActorClassData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumBuildingLevel;
    
    FBuildingActorClassData();
};

