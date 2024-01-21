#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EFortItemType.h"
#include "EItemWrapMaterialType.h"
#include "McpVariantChannelInfo.h"
#include "Templates/SubclassOf.h"
#include "FortniteAutomationBlueprintLibrary.generated.h"

class AActor;
class UAthenaCosmeticItemDefinition;
class UAthenaItemWrapDefinition;
class UFortItemDefinition;
class UFortVariantTokenType;

UCLASS(Blueprintable)
class UFortniteAutomationBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortniteAutomationBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void StopAllParticles(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool ResetFPSChartsData();
    
    UFUNCTION(BlueprintCallable)
    static bool ResetForcedAthenaCosmetics();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMcpVariantChannelInfo> MakeVariantChannelInfosFromVariantTagContainer(UAthenaCosmeticItemDefinition* ItemDefinition, FGameplayTagContainer VariantTags);
    
    UFUNCTION(BlueprintCallable)
    static FMcpVariantChannelInfo MakeVariantChannelInfo(UAthenaCosmeticItemDefinition* ItemDefinition, FGameplayTag Channel, FGameplayTag ActiveVariant);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetVariantNames(const UAthenaCosmeticItemDefinition* ItemDefinition, FGameplayTag VariantChannel, bool UnlockableOnly);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetVariantChannels(const UAthenaCosmeticItemDefinition* ItemDefinition, bool UnlockableOnly);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetItemWrapperLockerSlotIndex(UFortItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTagContainer> GetAllVariantCombinations(UAthenaCosmeticItemDefinition* ItemDefinition, bool UnlockableOnly);
    
    UFUNCTION(BlueprintCallable)
    static TArray<TSubclassOf<AActor>> GetAllItemWrapCompatibleActors(bool Vehicles, bool RespectDropTables);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UFortVariantTokenType*> GetAllFortVariantTokens();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UAthenaCosmeticItemDefinition*> GetAllAthenaCosmetics_MultipleType(const TArray<EFortItemType> Types);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UAthenaCosmeticItemDefinition*> GetAllAthenaCosmetics(const EFortItemType Type);
    
    UFUNCTION(BlueprintCallable)
    static bool ForceAthenaCosmetic(const UAthenaCosmeticItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    static bool DumpFPSChartsData(const FString& EntryName);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllAnimInstances(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyItemWrapToActor(UAthenaItemWrapDefinition* Wrap, AActor* Actor, EItemWrapMaterialType MaterialType);
    
};

