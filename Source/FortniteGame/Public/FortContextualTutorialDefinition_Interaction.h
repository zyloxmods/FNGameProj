#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortContextualTutorialDefinition.h"
#include "FortContextualTutorialDefinition_Interaction.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorialDefinition_Interaction : public UFortContextualTutorialDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AbilityTagToTrigger;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActorGamePlayTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFireOnSuccess;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFireOnFail;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RessourceTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RessourceNeeded;
    
public:
    UFortContextualTutorialDefinition_Interaction();
};

