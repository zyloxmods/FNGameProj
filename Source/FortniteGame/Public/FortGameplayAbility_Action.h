#pragma once
#include "CoreMinimal.h"
#include "FortGameplayAbility.h"
#include "FortGameplayAbility_Action.generated.h"

UCLASS(Blueprintable)
class UFortGameplayAbility_Action : public UFortGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExtraActionNames;
    
public:
    UFortGameplayAbility_Action();
};

