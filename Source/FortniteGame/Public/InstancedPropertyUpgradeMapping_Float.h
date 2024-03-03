#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InstancedPropertyUpgradeMappingBase.h"
#include "InstancedPropertyUpgradeMapping_Float.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UInstancedPropertyUpgradeMapping_Float : public UInstancedPropertyUpgradeMappingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LegacyRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Range;
    
    UInstancedPropertyUpgradeMapping_Float();
};

