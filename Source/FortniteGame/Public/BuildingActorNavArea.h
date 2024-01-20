#pragma once
#include "CoreMinimal.h"
#include "BuildingActorNavArea.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FBuildingActorNavArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AreaBits;
    
    FBuildingActorNavArea();
};

