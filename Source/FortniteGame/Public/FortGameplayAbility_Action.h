#pragma once
#include "CoreMinimal.h"
#include "FortGameplayAbility.h"
#include "FortGameplayAbility_Action.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortGameplayAbility_Action : public UFortGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExtraActionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateOnInputPress;
    
public:
    UFortGameplayAbility_Action();
};

