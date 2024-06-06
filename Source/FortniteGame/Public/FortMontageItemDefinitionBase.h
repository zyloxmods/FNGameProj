#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AthenaCosmeticItemDefinition.h"
#include "EFortCustomBodyType.h"
#include "EFortCustomGender.h"
#include "FortEmoteMapping.h"
#include "MontageItemAccessData.h"
#include "MontageVisibilityData.h"
#include "SectionNameAndWeight.h"
#include "FortMontageItemDefinitionBase.generated.h"

class AFortPawn;
class AFortPlayerController;
class AFortPlayerPawn;
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
    TArray<FFortEmoteMapping> AnimationOverrides;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHolsterWeaponIfDualWieldPickaxe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMontageItemAccessData> AccessData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMontageVisibilityData> VisibilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EmoteWheelExclusiveTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAthenaCosmeticItemDefinition> RequiredEmoteParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsWhichIndicateEmoteParent;
    
public:
    UFortMontageItemDefinitionBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayRandomSectionByName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldHolsterWeapon(AFortPawn* FortPawn) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void PreviewInPIE();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName PickRandomSectionByName(float RandomNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName PickMontageSection(const UAnimMontage* Montage, AFortPawn* FortPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName PickCosmeticDrivenSectionByName(AFortPawn* PawnPlayingMotage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMontageItemEmoteWheelExclusive(const AFortPlayerController* FortPC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCosmeticDrivenMotageSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetFrontendPreviewAnimationHardReference(TEnumAsByte<EFortCustomBodyType::Type> BodyType, EFortCustomGender Gender, AFortPlayerPawn* PawnContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetFrontendPreviewAnimation(TEnumAsByte<EFortCustomBodyType::Type> BodyType, AFortPlayerPawn* PreviewPawn, EFortCustomGender Gender) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetAnimationHardReference(TEnumAsByte<EFortCustomBodyType::Type> BodyType, EFortCustomGender Gender, AFortPlayerPawn* PawnContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UAnimMontage> GetAnimation(TEnumAsByte<EFortCustomBodyType::Type> BodyType, EFortCustomGender Gender, AFortPlayerPawn* PawnContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowMontageItem(const AFortPlayerController* FortPC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivateMontageItem(const AFortPlayerController* FortPC, FGameplayTagContainer& OutFailureTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAccessMontageItem(const AFortPlayerController* FortPC) const;
    
};

