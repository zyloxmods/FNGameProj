#pragma once
#include "CoreMinimal.h"
#include "RadialOptionData.h"
#include "BuildingOptionData.generated.h"

USTRUCT(BlueprintType)
struct FBuildingOptionData : public FRadialOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClassSuffix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClassMirrored;
    
    FORTNITEUI_API FBuildingOptionData();
};

