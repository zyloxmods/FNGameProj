#pragma once
#include "CoreMinimal.h"
#include "FortItemPickerBase.h"
#include "FortTabButtonLabelInfo.h"
#include "Templates/SubclassOf.h"
#include "FortHeroLoadoutHeroPicker.generated.h"

class UCommonButton;
class UFortCampaignHeroLoadoutItem;
class UFortTabListWidgetBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHeroLoadoutHeroPicker : public UFortItemPickerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* ExternalFilterTabList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortCampaignHeroLoadoutItem> TargetLoadoutItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButton> FilterTabButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<FName, FFortTabButtonLabelInfo> TabButtonLabelInfoMap;
    
public:
    UFortHeroLoadoutHeroPicker();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateFilterTabList(FName PreviouslySelectedTab);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTargetLoadoutSlot(const UFortCampaignHeroLoadoutItem* LoadoutItem, const FName SlotName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleFilterTabSelectedBP(FName TabId);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleFilterTabSelected(FName TabId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentTargetLoadoutSetBP();
    
public:
    UFUNCTION(BlueprintCallable)
    FName GetCurrentlySelectedTab();
    
    UFUNCTION(BlueprintCallable)
    void AssociateFilterTabList(const UFortTabListWidgetBase* NewExternalFilterTabList);
    
};

