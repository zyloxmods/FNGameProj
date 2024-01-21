#pragma once
#include "CoreMinimal.h"
#include "FortMontageItemDefinitionBase.h"
#include "AthenaDanceItemDefinition.generated.h"

class UFortGameplayAbility;

UCLASS(Blueprintable, MinimalAPI)
class UAthenaDanceItemDefinition : public UFortMontageItemDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMovingEmote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveForwardOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkForwardSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortGameplayAbility> CustomDanceAbility;
    
private:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChatTriggerCommandName;
    
public:
    UAthenaDanceItemDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetChatTriggerCommandName() const;
    
};

