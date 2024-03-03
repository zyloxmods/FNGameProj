#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EComboSlotType.h"
#include "FortMobileHUDElementProxy.h"
#include "QuickbarProxySlotIconContainer.h"
#include "HUDLayoutToolV2_QuickbarProxy.generated.h"

class UFortDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UHUDLayoutToolV2_QuickbarProxy : public UFortMobileHUDElementProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EComboSlotType, FQuickbarProxySlotIconContainer> QuickbarProxySlotIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> SlotAmountOverridePerContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultSlotAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlotLocksPropertyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ReversePropertyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlotTypePropertyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDynamicEntryBox* EntryBox_QuickbarProxySlots;
    
public:
    UHUDLayoutToolV2_QuickbarProxy();
};

