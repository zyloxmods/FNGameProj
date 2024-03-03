#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "EAthenaCustomizationCategory.h"
#include "FortAthenaLoadout.h"
#include "FortCosmeticFunctionLibrary.generated.h"

class UAthenaCosmeticItemDefinition;
class UObject;

UCLASS(Blueprintable)
class UFortCosmeticFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortCosmeticFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetVariantChannelActiveIndexForSlot(UObject* WorldContextObject, EAthenaCustomizationCategory Slot, int32 SubslotIndex, const FFortAthenaLoadout& Loadout, FGameplayTag Channel, const TArray<FGameplayTag>& VariantList, int32& Index, bool& bIndexIsValid, bool& bFoundChannel, bool bErrorIfChannelMissing, bool bErrorIfTagNotInArray);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetVariantChannelActiveIndexForItem(UObject* WorldContextObject, const UAthenaCosmeticItemDefinition* Item, const FFortAthenaLoadout& Loadout, FGameplayTag Channel, const TArray<FGameplayTag>& VariantList, int32& Index, bool& bIndexIsValid, bool& bFoundChannel, bool bErrorIfChannelMissing, bool bErrorIfTagNotInArray);
    
};

