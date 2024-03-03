#pragma once
#include "CoreMinimal.h"
#include "FortAthenaBTService_PickUpLoot.h"
#include "GameplayTagContainer.h"
#include "FortAthenaBTService_PickUpLoot_ArsenicCore.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortAthenaBTService_PickUpLoot_ArsenicCore : public UFortAthenaBTService_PickUpLoot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AttackInsteadOfInteractContainerTags;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetActorName;
    
public:
};

