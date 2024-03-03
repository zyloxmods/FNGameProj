#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EFortItemType.h"
#include "EItemWrapMaterialType.h"
#include "ESubGame.h"
#include "FortAthenaLoadout.h"
#include "McpVariantChannelInfo.h"
#include "Templates/SubclassOf.h"
#include "FortniteAutomationBlueprintLibrary.generated.h"

class AActor;
class AFortPlayerMannequin;
class AFortPlayerParachute;
class AFortWeapon;
class UAthenaBackpackItemDefinition;
class UAthenaCharacterItemDefinition;
class UAthenaCosmeticItemDefinition;
class UAthenaGliderItemDefinition;
class UAthenaItemWrapDefinition;
class UAthenaPickaxeItemDefinition;
class UFortCreativeRealEstatePlotItemDefinition;
class UFortItemDefinition;
class UFortPlaysetGrenadeItemDefinition;
class UFortVariantTokenType;
class UObject;

UCLASS(Blueprintable)
class UFortniteAutomationBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortniteAutomationBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void StopAllParticles(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AFortWeapon*> SpawnAthenaPickaxe(UAthenaPickaxeItemDefinition* ItemDefinition, const FTransform SpawnTransform, const TArray<FMcpVariantChannelInfo> VariantChannelInfos, const bool ClearAnimations);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AFortPlayerParachute*> SpawnAthenaGlider(UAthenaGliderItemDefinition* ItemDefinition, const FTransform SpawnTransform, const TArray<FMcpVariantChannelInfo> VariantChannelInfos, const bool ClearAnimations);
    
    UFUNCTION(BlueprintCallable)
    static AFortPlayerMannequin* SpawnAthenaCharacterSkin(UAthenaCharacterItemDefinition* ItemDefinition, const FTransform SpawnTransform, const TArray<FMcpVariantChannelInfo> VariantChannelInfos, const bool ClearAnimations, UClass* MannequinClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> SpawnAthenaBackpack(UAthenaBackpackItemDefinition* ItemDefinition, const FTransform SpawnTransform, const TArray<FMcpVariantChannelInfo> VariantChannelInfos, const bool ClearAnimations);
    
    UFUNCTION(BlueprintCallable)
    static bool ResetFPSChartsData();
    
    UFUNCTION(BlueprintCallable)
    static bool ResetForcedAthenaCosmetics();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMcpVariantChannelInfo> MakeVariantChannelInfosFromVariantTagContainer(UAthenaCosmeticItemDefinition* ItemDefinition, FGameplayTagContainer VariantTags);
    
    UFUNCTION(BlueprintCallable)
    static FMcpVariantChannelInfo MakeVariantChannelInfo(UAthenaCosmeticItemDefinition* ItemDefinition, FGameplayTag Channel, FGameplayTag ActiveVariant, const FString& CustomData);
    
    UFUNCTION(BlueprintCallable)
    static FFortAthenaLoadout MakeLoadoutFromVariantChannelInfos(TArray<FMcpVariantChannelInfo> VariantInfo);
    
    UFUNCTION(BlueprintCallable)
    static TArray<TSoftObjectPtr<UObject>> GetWrapPreviewObjects(ESubGame SubGame);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetVariantNames(const UAthenaCosmeticItemDefinition* ItemDefinition, FGameplayTag VariantChannel, bool UnlockableOnly);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetVariantChannels(const UAthenaCosmeticItemDefinition* ItemDefinition, bool UnlockableOnly);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetItemWrapperLockerSlotIndex(UFortItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTagContainer> GetAllVariantCombinations(UAthenaCosmeticItemDefinition* ItemDefinition, bool UnlockableOnly);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UFortCreativeRealEstatePlotItemDefinition*> GetAllRealEstatePlotItemDefinitions(bool bOnlyPlayerFacing);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UFortPlaysetGrenadeItemDefinition*> GetAllPlaysetGrenadeItemDefinitions();
    
    UFUNCTION(BlueprintCallable)
    static TArray<TSubclassOf<AActor>> GetAllItemWrapCompatibleActors(ESubGame SubGame, bool OnePerType);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UFortVariantTokenType*> GetAllFortVariantTokens();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UAthenaCosmeticItemDefinition*> GetAllAthenaCosmetics_MultipleType(const TArray<EFortItemType> Types);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UAthenaCosmeticItemDefinition*> GetAllAthenaCosmetics(const EFortItemType Type);
    
    UFUNCTION(BlueprintCallable)
    static bool ForceAthenaCosmetic(const UAthenaCosmeticItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    static TSet<UClass*> FindDerivedBlueprintClasses(FName BaseClassName, const FString& SearchString, const FString& SearchPath);
    
    UFUNCTION(BlueprintCallable)
    static bool DumpFPSChartsData(const FString& EntryName);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllCharacterPartAnimations(AFortPlayerMannequin* Mannequin);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllAnimInstances(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyItemWrapToActor(UAthenaItemWrapDefinition* wrap, AActor* Actor, EItemWrapMaterialType MaterialType);
    
};

