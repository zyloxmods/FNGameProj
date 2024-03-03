#pragma once
#include "CoreMinimal.h"
#include "BuildingSMActorClassData.h"
#include "BuildingAutoNavClassData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FBuildingAutoNavClassData : public FBuildingSMActorClassData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoAssignNavProperties: 1;
    
    FBuildingAutoNavClassData();
};

