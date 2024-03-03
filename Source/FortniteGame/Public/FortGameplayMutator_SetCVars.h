#pragma once
#include "CoreMinimal.h"
#include "FortGameplayMutator.h"
#include "SetCVarParams.h"
#include "FortGameplayMutator_SetCVars.generated.h"

UCLASS(Blueprintable)
class AFortGameplayMutator_SetCVars : public AFortGameplayMutator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSetCVarParams> CVarsToSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSetCVarParams> CVarsToSet_ClientOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSetCVarParams> CVarsToSet_ServerOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSetCVarParams> CVarsToSetBack;
    
public:
    AFortGameplayMutator_SetCVars();
};

