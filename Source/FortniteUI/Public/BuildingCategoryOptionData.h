#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingType.h"
#include "RadialOptionData.h"
#include "BuildingCategoryOptionData.generated.h"

USTRUCT(BlueprintType)
struct FBuildingCategoryOptionData : public FRadialOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBuildingType::Type> BuildingType;
    
    FORTNITEUI_API FBuildingCategoryOptionData();
};

