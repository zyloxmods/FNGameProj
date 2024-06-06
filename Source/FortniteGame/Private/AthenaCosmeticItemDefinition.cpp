#include "AthenaCosmeticItemDefinition.h"

bool UAthenaCosmeticItemDefinition::IsOwnedByCampaignHero() const {
    return false;
}

bool UAthenaCosmeticItemDefinition::IsEnabledInSTW() const {
    return false;
}

bool UAthenaCosmeticItemDefinition::HasVariants() const {
    return false;
}

bool UAthenaCosmeticItemDefinition::HasModifiableVariants(UFortItem* InItem) const {
    return false;
}

EVariantUnlockType UAthenaCosmeticItemDefinition::GetVariantUnlockType() const {
    return EVariantUnlockType::UnlockAll;
}

UFortCosmeticVariant* UAthenaCosmeticItemDefinition::GetVariantChannel(FGameplayTag InVariantChannelTag) const {
    return NULL;
}

FRotator UAthenaCosmeticItemDefinition::GetPreviewPawnRotationOffset() const {
    return FRotator{};
}

TArray<FFortCosmeticVariantPreview> UAthenaCosmeticItemDefinition::GetItemVariantPreviews() const {
    return TArray<FFortCosmeticVariantPreview>();
}

TArray<FFortCosmeticAdaptiveStatPreview> UAthenaCosmeticItemDefinition::GetItemAdaptiveStatPreviews() const {
    return TArray<FFortCosmeticAdaptiveStatPreview>();
}

void UAthenaCosmeticItemDefinition::GetDefaultVariantChannels(TArray<FMcpVariantChannelInfo>& OutDefaultVariantData) const {
}

FGameplayTagContainer UAthenaCosmeticItemDefinition::GetAdaptivePlayerStatsList() const {
    return FGameplayTagContainer{};
}

void UAthenaCosmeticItemDefinition::GatherVariantAssets(AActor* InActor, const FFortAthenaLoadout& Loadout, TArray<FSoftObjectPath>& VariantAssetsNeeded, AFortPlayerPawn* InPlayerPawn) const {
}

void UAthenaCosmeticItemDefinition::ApplyVariantsToComponent(UPrimitiveComponent* InComponent, const FFortAthenaLoadout& Loadout, const FApplyVariantsAdditionalParams& Params) const {
}

void UAthenaCosmeticItemDefinition::ApplyVariants(AActor* InActor, const FFortAthenaLoadout& Loadout, const FApplyVariantsAdditionalParams& Params) const {
}

UAthenaCosmeticItemDefinition::UAthenaCosmeticItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bIsShuffleTile = false;
    bIsOwnedByCampaignHero = false;
    bHasMoreThanOneCharacterPartVariant = false;
    bHideIfNotOwned = false;
    bInitializedConfiguredDynamicInstallBundles = false;
    bDynamicInstallBundlesError = false;
    bDynamicInstallBundlesComplete = false;
    DynamicInstallBundlesUpdateStartTime = 4294967295;
    VariantUnlockType = EVariantUnlockType::UnlockAll;
}

