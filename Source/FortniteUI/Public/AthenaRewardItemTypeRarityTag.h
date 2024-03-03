#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortRarityItemData.h"
#include "AthenaRewardItemTypeRarityTag.generated.h"

class UBorder;
class UCommonTextBlock;
class UFortItemSeriesDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaRewardItemTypeRarityTag : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border_ItemRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border_RarityTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemType;
    
public:
    UAthenaRewardItemTypeRarityTag();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeRarityWithSeries(const UFortItemSeriesDefinition* SeriesData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeRarityWithoutSeries(FFortRarityItemData RarityData);
    
};

