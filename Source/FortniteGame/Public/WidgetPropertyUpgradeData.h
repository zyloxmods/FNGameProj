#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WidgetPropertyUpgradeData.generated.h"

class UInstancedPropertyUpgradeMappingBase;

USTRUCT(BlueprintType)
struct FWidgetPropertyUpgradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedPropertyUpgradeMappingBase* InstancedPropertyData0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedPropertyUpgradeMappingBase* InstancedPropertyData1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedPropertyUpgradeMappingBase* InstancedPropertyData2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedPropertyUpgradeMappingBase* InstancedPropertyData3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UInstancedPropertyUpgradeMappingBase*> InstancedFloatPropertyToTagPropertyMap;
    
    FORTNITEGAME_API FWidgetPropertyUpgradeData();
};

