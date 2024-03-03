#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortItemInfoPresentationWidget.generated.h"

class UAthenaRewardItemTypeRarityTag;
class UCommonTextBlock;
class UFortItem;
class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemInfoPresentationWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaRewardItemTypeRarityTag* AthenaRewardItemTypeRarityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_DescReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Variance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_DescVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_MainView;
    
public:
    UFortItemInfoPresentationWidget();
    UFUNCTION(BlueprintCallable)
    void PopulateUsingItem(const UFortItem* NewItem);
    
};

