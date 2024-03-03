#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortRarity.h"
#include "FortColorPalette.h"
#include "FortRarityItemData.h"
#include "FortRarityData.generated.h"

class UFortItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortRarityData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRarityItemData RarityCollection[8];
    
    UFortRarityData();
    UFUNCTION(BlueprintCallable)
    static FFortRarityItemData BPGetRarityDataForItemDef(const UFortItemDefinition* ItemDef);
    
    UFUNCTION(BlueprintCallable)
    static FFortRarityItemData BPGetRarityData(EFortRarity Rarity);
    
    UFUNCTION(BlueprintCallable)
    static FFortColorPalette BPGetRarityColorPalette(EFortRarity Rarity);
    
};

