#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortBuildingType.h"
#include "EFortResourceType.h"
#include "BuildingEditAnalyticEvent.generated.h"

USTRUCT(BlueprintType)
struct FBuildingEditAnalyticEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBuildingType::Type> BuildingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortResourceType ResourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    FORTNITEGAME_API FBuildingEditAnalyticEvent();
};

