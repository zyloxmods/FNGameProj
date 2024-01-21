#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BuildingClassData.generated.h"

class ABuildingActor;

USTRUCT(BlueprintType)
struct FBuildingClassData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingActor> BuildingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreviousBuildingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 UpgradeLevel;
    
    FORTNITEGAME_API FBuildingClassData();
};

