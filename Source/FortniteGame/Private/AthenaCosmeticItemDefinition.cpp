#include "AthenaCosmeticItemDefinition.h"

bool UAthenaCosmeticItemDefinition::HasVariants() const {
    return false;
}

bool UAthenaCosmeticItemDefinition::HasModifiableVariants(UFortItem* InItem) const {
    return false;
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

void UAthenaCosmeticItemDefinition::ApplyVariants(AActor* InActor, const TArray<FMcpVariantChannelInfo>& VariantChannels) const {
}

UAthenaCosmeticItemDefinition::UAthenaCosmeticItemDefinition() {
    this->bIsShuffleTile = false;
}

