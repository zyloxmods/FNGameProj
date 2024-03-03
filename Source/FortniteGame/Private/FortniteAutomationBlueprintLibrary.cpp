#include "FortniteAutomationBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

void UFortniteAutomationBlueprintLibrary::StopAllParticles(AActor* Actor) {
}

TArray<AFortWeapon*> UFortniteAutomationBlueprintLibrary::SpawnAthenaPickaxe(UAthenaPickaxeItemDefinition* ItemDefinition, const FTransform SpawnTransform, const TArray<FMcpVariantChannelInfo> VariantChannelInfos, const bool ClearAnimations) {
    return TArray<AFortWeapon*>();
}

TArray<AFortPlayerParachute*> UFortniteAutomationBlueprintLibrary::SpawnAthenaGlider(UAthenaGliderItemDefinition* ItemDefinition, const FTransform SpawnTransform, const TArray<FMcpVariantChannelInfo> VariantChannelInfos, const bool ClearAnimations) {
    return TArray<AFortPlayerParachute*>();
}

AFortPlayerMannequin* UFortniteAutomationBlueprintLibrary::SpawnAthenaCharacterSkin(UAthenaCharacterItemDefinition* ItemDefinition, const FTransform SpawnTransform, const TArray<FMcpVariantChannelInfo> VariantChannelInfos, const bool ClearAnimations, UClass* MannequinClass) {
    return NULL;
}

TArray<AActor*> UFortniteAutomationBlueprintLibrary::SpawnAthenaBackpack(UAthenaBackpackItemDefinition* ItemDefinition, const FTransform SpawnTransform, const TArray<FMcpVariantChannelInfo> VariantChannelInfos, const bool ClearAnimations) {
    return TArray<AActor*>();
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

FMcpVariantChannelInfo UFortniteAutomationBlueprintLibrary::MakeVariantChannelInfo(UAthenaCosmeticItemDefinition* ItemDefinition, FGameplayTag Channel, FGameplayTag ActiveVariant, const FString& CustomData) {
    return FMcpVariantChannelInfo{};
}

FFortAthenaLoadout UFortniteAutomationBlueprintLibrary::MakeLoadoutFromVariantChannelInfos(TArray<FMcpVariantChannelInfo> VariantInfo) {
    return FFortAthenaLoadout{};
}

TArray<TSoftObjectPtr<UObject>> UFortniteAutomationBlueprintLibrary::GetWrapPreviewObjects(ESubGame SubGame) {
    return TArray<TSoftObjectPtr<UObject>>();
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

TArray<UFortCreativeRealEstatePlotItemDefinition*> UFortniteAutomationBlueprintLibrary::GetAllRealEstatePlotItemDefinitions(bool bOnlyPlayerFacing) {
    return TArray<UFortCreativeRealEstatePlotItemDefinition*>();
}

TArray<UFortPlaysetGrenadeItemDefinition*> UFortniteAutomationBlueprintLibrary::GetAllPlaysetGrenadeItemDefinitions() {
    return TArray<UFortPlaysetGrenadeItemDefinition*>();
}

TArray<TSubclassOf<AActor>> UFortniteAutomationBlueprintLibrary::GetAllItemWrapCompatibleActors(ESubGame SubGame, bool OnePerType) {
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

TSet<UClass*> UFortniteAutomationBlueprintLibrary::FindDerivedBlueprintClasses(FName BaseClassName, const FString& SearchString, const FString& SearchPath) {
    return TSet<UClass*>();
}

bool UFortniteAutomationBlueprintLibrary::DumpFPSChartsData(const FString& EntryName) {
    return false;
}

void UFortniteAutomationBlueprintLibrary::ClearAllCharacterPartAnimations(AFortPlayerMannequin* Mannequin) {
}

void UFortniteAutomationBlueprintLibrary::ClearAllAnimInstances(AActor* Actor) {
}

void UFortniteAutomationBlueprintLibrary::ApplyItemWrapToActor(UAthenaItemWrapDefinition* wrap, AActor* Actor, EItemWrapMaterialType MaterialType) {
}

UFortniteAutomationBlueprintLibrary::UFortniteAutomationBlueprintLibrary() {
}

