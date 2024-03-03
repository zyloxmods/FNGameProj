#pragma once
#include "CoreMinimal.h"
#include "BuildingFoundation.h"
#include "BuildingFoundationMayday.generated.h"

class UBuildingGroup;

UCLASS(Blueprintable)
class ABuildingFoundationMayday : public ABuildingFoundation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildingGroup* StrangeLandsBuildingGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildingGroup* ForceStrangeLandsBuildingGroup;
    
    ABuildingFoundationMayday();
};

