#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Animation/PreviewCollectionInterface.h"
#include "GameplayTagContainer.h"
#include "FortAttributeInitializationKey.h"
#include "FortWorkerType.h"
#include "GameplayEffectApplicationInfo.h"
#include "Templates/SubclassOf.h"
#include "FortHeroType.generated.h"

class AFortPlayerPawn;
class UAnimMontage;
class UAthenaBackpackItemDefinition;
class UAthenaCharacterItemDefinition;
class UFortFeedbackBank;
class UFortHeroGameplayDefinition;
class UFortHeroSpecialization;
class UFortMontageLookupTable;
class UFrontendAnimInstance;
class UItemPreviewAnimInstance;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortHeroType : public UFortWorkerType, public IPreviewCollectionInterface {
    GENERATED_BODY()
public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("Hero", GetFName());
    }
    virtual USkeletalMesh* GetPreviewBaseMesh() const override;
    virtual void GetPreviewSkeletalMeshes(TArray<USkeletalMesh*>& OutMeshes, TArray<TSubclassOf<UAnimInstance>>& OutAnimClasses) const override;
protected:
    /** If true, head accessory will be shown regardless of client option setting; Used for cases where the head accessory is a critical part of the character */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Parts")
    uint8 bForceShowHeadAccessory: 1;

    /** If true, backpack will be shown regardless of client option setting; Used for cases where the backpack is a critical part of the character */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Parts")
    uint8 bForceShowBackpack: 1;

    /** Hero specializations that this hero gets */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, AssetBundles="ItemDetails, AvatarDisplay"), Category = "Specialization")
    TArray<TSoftObjectPtr<UFortHeroSpecialization>> Specializations;

    //Shared lookup table for most montages this character may play on its root skeleton.  OverrideMontageLookupTable will be checked first.  If no match is found there, it will look for matches in this table.  If this table is empty, it will check the character's head data for the montage table there.  This location should generally only be used to choose animations if the hero's abilities are defining the animation to use or if the hero's actual head is shared (which ought not be the case in general, but may be more common in BR).
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Animation")
    TSoftObjectPtr<UFortMontageLookupTable> DefaultMontageLookupTable;

    //Optional override table for montages this character wants special versions of to play on its root skeleton.  While this can be shared, it's more likely to be unique than the Default table.  This table is checked first.  If it doesn't exist or doesn't have a montage matching a query, the Default Table will be searched next.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Animation")
    TSoftObjectPtr<UFortMontageLookupTable> OverrideMontageLookupTable;

    /** Contains gameplay effects that use meta attributes to affect other attributes */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, AssetBundles="ItemDetails, Equipped"), Category = "Combined Stats")
    TArray<FGameplayEffectApplicationInfo> CombinedStatGEs;
    
    /** GPTags required for this ability to be available for player */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Requirements")
    FGameplayTagContainer RequiredGPTags;

    /** Pawn vocalization feedback for male hero */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Feedback")
    TSoftObjectPtr<UFortFeedbackBank> MaleOverrideFeedback;

    /** Pawn vocalization feedback for female hero */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Feedback")
    TSoftObjectPtr<UFortFeedbackBank> FemaleOverrideFeedback;

    /** Pawn class to use, can be useful to add class-specific blueprint functions or visuals */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, AssetBundles="ItemDetails"), Category = "Pawn")
    TSoftClassPtr<AFortPlayerPawn> OverridePawnClass;

    //Asset that holds all gameplay-related data for the hero (but NOT cosmetic data).
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Hero Gameplay")
    UFortHeroGameplayDefinition* HeroGameplayDefinition;

    //Asset that holds all the information about the hero's outfit including all variations and unlockable style information.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Hero Gameplay")
    UAthenaCharacterItemDefinition* HeroCosmeticOutfitDefinition;

    //Asset that holds all the information about the hero's backbling including all variations and unlockable style information.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Hero Gameplay")
    UAthenaBackpackItemDefinition* HeroCosmeticBackblingDefinition;

    /** Pawn class to use when in the frontend */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Pawn")
    TSoftClassPtr<UFrontendAnimInstance> FrontEndAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Pawn")
    TSoftClassPtr<UItemPreviewAnimInstance> ItemPreviewAnimClass;

    /** Default anim montage override for the frontend */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Pawn")
    TSoftObjectPtr<UAnimMontage> FrontendAnimMontageIdleOverride;

    /** Additional rotational offset for hero when presenting back bling */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Pawn")
    float FrontEndBackPreviewRotationOffset;

    /** Hero sub type */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    FText Subtype;

    /** Attribute initialization key for look-up in global spreadsheet of attribute defaults */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Attributes")
    FFortAttributeInitializationKey AttributeInitKey;

    /** Stat handle for legacy pawn stats */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Attributes")
    FDataTableRowHandle LegacyStatHandle;

    /** Male version of Animation Montage to play when previewing item */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Preview")
    TSoftObjectPtr<UAnimMontage> ItemPreviewMontage_Male;

    /** Female version of Animation Montage to play when previewing item */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Preview")
    TSoftObjectPtr<UAnimMontage> ItemPreviewMontage_Female;
    
public:
#if WITH_EDITOR
    friend class UAthenaCharacterItemDefinition;
#endif
    UFortHeroType(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSubType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortHeroGameplayDefinition* GetHeroGameplayDefinition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetFrontendAnimMontageIdleOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UFrontendAnimInstance> GetFrontendAnimClass() const;
};

