#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "FortCosmeticVariant.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortCosmeticVariant : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VariantChannelTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VariantChannelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag ActiveVariantTag;
    
public:
    UFortCosmeticVariant();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetVariantUnlockRequirement(FGameplayTag InVariantTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetVariantText(FGameplayTag InVariantTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetVariantChannelText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAllVariantTags() const;
    
};

