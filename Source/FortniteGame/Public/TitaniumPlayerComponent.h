#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "TitaniumPlayerCompOnPlayerEarnedEliminationDelegate.h"
#include "TitaniumPlayerComponent.generated.h"

class UFortWorldItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UTitaniumPlayerComponent : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTitaniumPlayerCompOnPlayerEarnedElimination OnPlayerEarnedElimination;
    
    UTitaniumPlayerComponent();
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_PlayerEarnedElimination(const UFortWorldItemDefinition* UpgradedWeapon);
    
};

