#pragma once
#include "CoreMinimal.h"
#include "BuildingActorNavArea.generated.h"

USTRUCT(BlueprintType)
struct FBuildingActorNavArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AreaBits;
    
    FORTNITEGAME_API FBuildingActorNavArea();
};

