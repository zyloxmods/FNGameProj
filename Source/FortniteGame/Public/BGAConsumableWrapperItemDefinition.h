#pragma once
#include "CoreMinimal.h"
#include "FortItemDefinition.h"
#include "BGAConsumableWrapperItemDefinition.generated.h"

class ABuildingGameplayActorConsumable;

UCLASS(Blueprintable)
class FORTNITEGAME_API UBGAConsumableWrapperItemDefinition : public UFortItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ABuildingGameplayActorConsumable> ConsumableClass;
    
public:
    UBGAConsumableWrapperItemDefinition();
};

