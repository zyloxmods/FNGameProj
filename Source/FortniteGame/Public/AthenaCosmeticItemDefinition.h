#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ApplyVariantsAdditionalParams.h"
#include "AthenaCosmeticMaterialOverride.h"
#include "EVariantUnlockType.h"
#include "FortAccountItemDefinition.h"
#include "FortAthenaLoadout.h"
#include "FortCosmeticAdaptiveStatPreview.h"
#include "FortCosmeticVariantPreview.h"
#include "McpVariantChannelInfo.h"
#include "Templates/SubclassOf.h"
#include "AthenaCosmeticItemDefinition.generated.h"

class AActor;
class AFortItemPreviewActor;
class AFortPlayerPawn;
class UAnimMontage;
class UAthenaCharacterItemDefinition;
class UFXSystemAsset;
class UFoleySoundLibrary;
class UFortCosmeticVariant;
class UFortItem;
class UFortMontageItemDefinitionBase;
class UPrimitiveComponent;
class UTexture2D;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UAthenaCosmeticItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    // Returns true if this item is a shuffle tile for random selections in the front end
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Frontend Preview")
    uint8 bIsShuffleTile: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Frontend Preview")
    uint8 bIsOwnedByCampaignHero: 1;

    //For Save the World use: whether or not this Item Definition has more than one character part variant (ItemVariants has more than one entry that sets the character parts.)  Used for simple display and content-editing purposes only.  Could be made Editor-Only if need be.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true), Category = "Frontend Preview")
    uint8 bHasMoreThanOneCharacterPartVariant: 1;

    /** if set to true will hide this variant in the UI if it is not owned */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    uint8 bHideIfNotOwned: 1;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    uint8 bInitializedConfiguredDynamicInstallBundles: 1;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    uint8 bDynamicInstallBundlesError: 1;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    uint8 bDynamicInstallBundlesComplete: 1;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    double DynamicInstallBundlesUpdateStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Variants")
    EVariantUnlockType VariantUnlockType;

    //Used by the older Party Display Manager.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Frontend Preview")
    FRotator PreviewPawnRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Foley")
    TArray<TSubclassOf<UFoleySoundLibrary>> FoleyLibraries;

    // The set of tags that must not be present for this cosmetic to be used; if any are present a default cosmetic will be substituted instead
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    FGameplayTagContainer DisallowedCosmeticTags;

    /** 
     * The set of meta tags this cosmetic specifies 
     * Used in LTMs which want to apply custom part overrides (Wick/Bounty)
     * 
     * MetaTags are roughly grouped into two groups:
     * Themes - 
     *		Mostly subjective labels, such as "casual wear", "fantasy" or "assassin".
     *		Skins don't need to be part of the same set to have the same theme - (Wick/Sofia, Reaper).
     *			 
     * Traits - 
     *		More technical, for labeling potential problem areas - the character doesn't have a 
     *		head part which is actually visible, or the character is less likely to swap out to generic
     *		parts (Peely).
     *		
     * @see MetaTags on any potential variants (scroll down).
     **/
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    FGameplayTagContainer MetaTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    TArray<FGameplayTag> VariantChannelsToNeverSendToMCP;

    /**
     * Optional list of (material, material index) pairs to override the default materials on a mesh.
     */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Visual|Overrides")
    TArray<FAthenaCosmeticMaterialOverride> MaterialOverrides;

	/**
	 * List of progressive/adaptive stats to observe, if any (used to make *cosmetic-only* changes based on player stats, e.g., # of kills in a BR match makes a pickaxe get cooler looking)
	 * Example names: WoodAcquired, DamageDealt, DamageReceived, AthenaKills
	 */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Visual|Overrides")
    FGameplayTagContainer ObservedPlayerStats;

	// List of 'built-in' emotes that this item grants
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Visual|Overrides")
    TArray<UFortMontageItemDefinitionBase*> BuiltInEmotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=truee, TitleProperty="VariantChannelName"), Category = "Variants")
    TArray<UFortCosmeticVariant*> ItemVariants;

	// The thumbnails from the specified variant channel will be used to set the thumbnail of this item if it is set and it exists
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Variants")
    FGameplayTag VariantChannelToUseForThumbnails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Variants")
    TArray<FFortCosmeticVariantPreview> ItemVariantPreviews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Variants")
    FText DirectAquisitionStyleDisclaimerOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Visual|Overrides")
    TArray<FFortCosmeticAdaptiveStatPreview> ItemObservedStatPreviews;

	/** Information on how to acquire this variant, only use if this variant is used */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    FText UnlockRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    TSoftObjectPtr<UFortAccountItemDefinition> UnlockingItemDef;

	/** Actor to use when spawning a preview on a FortCameraTargetPedestal. This will override the per-type data */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    TSoftClassPtr<AFortItemPreviewActor> ItemPreviewActorClass;

	/** Particle system to spawn when previewing this asset */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    TSoftObjectPtr<UFXSystemAsset> ItemPreviewParticleSystem;

	/** Male version of Animation Montage to play when previewing item */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    TSoftObjectPtr<UAnimMontage> ItemPreviewMontage_Male;

	/** Female version of Animation Montage to play when previewing item */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    TSoftObjectPtr<UAnimMontage> ItemPreviewMontage_Female;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    TSoftObjectPtr<UAthenaCharacterItemDefinition> ItemPreviewHero;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> ConfiguredDynamicInstallBundles;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> PendingDynamicInstallBundles;

	/** If the item requires tags, it may be equipped freely, but it appears default/empty, with warnings, unless the equipped outfit has any of these tags. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Exclusive Item")
    FGameplayTagContainer ExclusiveRequiresOutfitTags;

	/** Custom text to explain exclusive requirements to users. If empty, a generic fall-back will be used */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Exclusive Item")
    FText CustomExclusiveCallout;

	/** Custom description to use with exclusive items. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Exclusive Item")
    FText ExclusiveDesciption;

	/** Custom description to use with exclusive items. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Exclusive Item")
    TSoftObjectPtr<UTexture2D> ExclusiveIcon;
    
public:
    UAthenaCosmeticItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwnedByCampaignHero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledInSTW() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVariants() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasModifiableVariants(UFortItem* InItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVariantUnlockType GetVariantUnlockType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortCosmeticVariant* GetVariantChannel(FGameplayTag InVariantChannelTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetPreviewPawnRotationOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortCosmeticVariantPreview> GetItemVariantPreviews() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortCosmeticAdaptiveStatPreview> GetItemAdaptiveStatPreviews() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDefaultVariantChannels(TArray<FMcpVariantChannelInfo>& OutDefaultVariantData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAdaptivePlayerStatsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GatherVariantAssets(AActor* InActor, const FFortAthenaLoadout& Loadout, TArray<FSoftObjectPath>& VariantAssetsNeeded, AFortPlayerPawn* InPlayerPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyVariantsToComponent(UPrimitiveComponent* InComponent, const FFortAthenaLoadout& Loadout, const FApplyVariantsAdditionalParams& Params) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyVariants(AActor* InActor, const FFortAthenaLoadout& Loadout, const FApplyVariantsAdditionalParams& Params) const;
    
};

