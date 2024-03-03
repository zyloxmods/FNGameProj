#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EDynamicFoundationEnabledState.h"
#include "DynamicBuildingFoundationRepData.generated.h"

USTRUCT(BlueprintType)
struct FDynamicBuildingFoundationRepData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicFoundationEnabledState EnabledState;
    
    FORTNITEGAME_API FDynamicBuildingFoundationRepData();
};

