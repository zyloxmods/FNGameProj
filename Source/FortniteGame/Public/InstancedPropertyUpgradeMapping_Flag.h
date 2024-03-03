#pragma once
#include "CoreMinimal.h"
#include "InstancedPropertyUpgradeMappingBase.h"
#include "InstancedPropertyUpgradeMapping_Flag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UInstancedPropertyUpgradeMapping_Flag : public UInstancedPropertyUpgradeMappingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UInstancedPropertyUpgradeMapping_Flag();
};

