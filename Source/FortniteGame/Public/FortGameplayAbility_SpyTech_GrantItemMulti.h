#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "FortGameplayAbility_SpyTech_GrantItem.h"
#include "FortGameplayAbility_SpyTech_GrantItemMulti.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UFortGameplayAbility_SpyTech_GrantItemMulti : public UFortGameplayAbility_SpyTech_GrantItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> GrantableItemListTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ActivationUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ActivationUpdateTimeHandle;
    
public:
    UFortGameplayAbility_SpyTech_GrantItemMulti();
protected:
    UFUNCTION(BlueprintCallable)
    void GrantItems();
    
};

