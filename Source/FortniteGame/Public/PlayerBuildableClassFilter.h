#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingType.h"
#include "EFortResourceType.h"
#include "PlayerBuildableClassFilter.generated.h"

class UBuildingEditModeMetadata;

USTRUCT(BlueprintType)
struct FPlayerBuildableClassFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortResourceType ResourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBuildingType::Type> BuildingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBuildingEditModeMetadata* EditModeMetadata;
    
    FORTNITEGAME_API FPlayerBuildableClassFilter();
};

