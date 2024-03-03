#pragma once
#include "CoreMinimal.h"
#include "FortGameplayAbility_Action.h"
#include "Templates/SubclassOf.h"
#include "FortGameplayAbility_PossessProp.generated.h"

class ABuildingActor;
class UDataTable;

UCLASS(Blueprintable)
class UFortGameplayAbility_PossessProp : public UFortGameplayAbility_Action {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultAllowedPropTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* AllowedPropTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ABuildingActor>> AllowedPropClasses;
    
public:
    UFortGameplayAbility_PossessProp();
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAllowedPropTable(UDataTable* InAllowedPropTable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    TSubclassOf<ABuildingActor> GetAllowedPropClassByIndex(int32 AllowedPropIndex) const;
    
};

