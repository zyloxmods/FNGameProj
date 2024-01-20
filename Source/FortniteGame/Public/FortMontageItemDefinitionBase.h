#pragma once
#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "EFortCustomBodyType.h"
#include "EFortCustomGender.h"
#include "SectionNameAndWeight.h"
#include "FortMontageItemDefinitionBase.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, MinimalAPI)
class UFortMontageItemDefinitionBase : public UAthenaCosmeticItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> AnimationFemaleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewLoops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmoteCooldownSecs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMontageContainsFacialAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayRandomSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSectionNameAndWeight> PlayRandomSectionByName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwitchToHarvestingToolOnUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHolsterWeapon;
    
public:
    UFortMontageItemDefinitionBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayRandomSectionByName() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void PreviewInPIE();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName PickRandomSectionByName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetAnimationHardReference(EFortCustomBodyType BodyType, EFortCustomGender Gender) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetAnimation(EFortCustomBodyType BodyType, EFortCustomGender Gender) const;
    
};

