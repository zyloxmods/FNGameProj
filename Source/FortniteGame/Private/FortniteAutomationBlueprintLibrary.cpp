#include "FortniteAutomationBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

void UFortniteAutomationBlueprintLibrary::StopAllParticles(AActor* Actor) {
}

bool UFortniteAutomationBlueprintLibrary::ResetFPSChartsData() {
    return false;
}

bool UFortniteAutomationBlueprintLibrary::ResetForcedAthenaCosmetics() {
    return false;
}

TArray<FMcpVariantChannelInfo> UFortniteAutomationBlueprintLibrary::MakeVariantChannelInfosFromVariantTagContainer(UAthenaCosmeticItemDefinition* ItemDefinition, FGameplayTagContainer VariantTags) {
    return TArray<FMcpVariantChannelInfo>();
}

FMcpVariantChannelInfo UFortniteAutomationBlueprintLibrary::MakeVariantChannelInfo(UAthenaCosmeticItemDefinition* ItemDefinition, FGameplayTag Channel, FGameplayTag ActiveVariant) {
    return FMcpVariantChannelInfo{};
}

TArray<FGameplayTag> UFortniteAutomationBlueprintLibrary::GetVariantNames(const UAthenaCosmeticItemDefinition* ItemDefinition, FGameplayTag VariantChannel, bool UnlockableOnly) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UFortniteAutomationBlueprintLibrary::GetVariantChannels(const UAthenaCosmeticItemDefinition* ItemDefinition, bool UnlockableOnly) {
    return TArray<FGameplayTag>();
}

int32 UFortniteAutomationBlueprintLibrary::GetItemWrapperLockerSlotIndex(UFortItemDefinition* ItemDefinition) {
    return 0;
}

TArray<FGameplayTagContainer> UFortniteAutomationBlueprintLibrary::GetAllVariantCombinations(UAthenaCosmeticItemDefinition* ItemDefinition, bool UnlockableOnly) {
    return TArray<FGameplayTagContainer>();
}

TArray<TSubclassOf<AActor>> UFortniteAutomationBlueprintLibrary::GetAllItemWrapCompatibleActors(bool Vehicles, bool RespectDropTables) {
    return TArray<TSubclassOf<AActor>>();
}

TArray<UFortVariantTokenType*> UFortniteAutomationBlueprintLibrary::GetAllFortVariantTokens() {
    return TArray<UFortVariantTokenType*>();
}

TArray<UAthenaCosmeticItemDefinition*> UFortniteAutomationBlueprintLibrary::GetAllAthenaCosmetics_MultipleType(const TArray<EFortItemType> Types) {
    return TArray<UAthenaCosmeticItemDefinition*>();
}

TArray<UAthenaCosmeticItemDefinition*> UFortniteAutomationBlueprintLibrary::GetAllAthenaCosmetics(const EFortItemType Type) {
    return TArray<UAthenaCosmeticItemDefinition*>();
}

bool UFortniteAutomationBlueprintLibrary::ForceAthenaCosmetic(const UAthenaCosmeticItemDefinition* ItemDefinition) {
    return false;
}

bool UFortniteAutomationBlueprintLibrary::DumpFPSChartsData(const FString& EntryName) {
    return false;
}

void UFortniteAutomationBlueprintLibrary::ClearAllAnimInstances(AActor* Actor) {
}

void UFortniteAutomationBlueprintLibrary::ApplyItemWrapToActor(UAthenaItemWrapDefinition* Wrap, AActor* Actor, EItemWrapMaterialType MaterialType) {
}

UFortniteAutomationBlueprintLibrary::UFortniteAutomationBlueprintLibrary() {
}

