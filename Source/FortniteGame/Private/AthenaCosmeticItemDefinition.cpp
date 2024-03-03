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

UAthenaCosmeticItemDefinition::UAthenaCosmeticItemDefinition() {
    this->bIsShuffleTile = false;
    this->bIsOwnedByCampaignHero = false;
    this->bHasMoreThanOneCharacterPartVariant = false;
    this->bHideIfNotOwned = false;
    this->bInitializedConfiguredDynamicInstallBundles = false;
    this->bDynamicInstallBundlesError = false;
    this->bDynamicInstallBundlesComplete = false;
    this->DynamicInstallBundlesUpdateStartTime = 4294967295;
    this->VariantUnlockType = EVariantUnlockType::UnlockAll;
}

