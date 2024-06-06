#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortItemDefinition.h"
#include "BGAConsumableWrapperItemDefinition.generated.h"

class ABuildingGameplayActorConsumable;

UCLASS(Blueprintable)
class UBGAConsumableWrapperItemDefinition : public UFortItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ABuildingGameplayActorConsumable> ConsumableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinNumberConsumablesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxNumberConsumablesToSpawn;
    
public:
    UBGAConsumableWrapperItemDefinition(const FObjectInitializer& ObjectInitializer);
};

