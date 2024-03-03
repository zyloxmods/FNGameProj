#pragma once
#include "CoreMinimal.h"
#include "GameplayMutatorObjectDataArray.h"
#include "SpecialActorRepData.h"
#include "GameplayTagContainer.h"
#include "EHeistExitCraftUIState.h"
#include "FortHUDElementWidget.h"
#include "HeistBlingIconData.h"
#include "HeistExitCraftIconData.h"
#include "HeistWidgetBase.generated.h"

class AFortPlayerStateZone;

UCLASS(Blueprintable, EditInlineNew)
class UHeistWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHeistExitCraftUIState CurrExitCraftUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayBlingRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanDisplayVanUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag SafeSupplyDropTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag BlingItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag CarryingBlingItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrBlingSupplyDropCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrBlingItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrBlingEnemyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrBlingAllyCount;
    
public:
    UHeistWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAllUI();
    
    UFUNCTION(BlueprintCallable)
    void SetExitCraftUIState(EHeistExitCraftUIState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateStateTimeText(const FText& TimeText, EHeistExitCraftUIState CurrState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateStateText(const FText& StateText, EHeistExitCraftUIState CurrState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateExitCraftIcon(const FHeistExitCraftIconData& ExitCraftIconData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateBlingIcon(const FHeistBlingIconData& BlingIconData);
    
    UFUNCTION(BlueprintCallable)
    void OnSpecialActorRemoved(const FSpecialActorRepData& SpecialActorData);
    
    UFUNCTION(BlueprintCallable)
    void OnSpecialActorAdded(const FSpecialActorRepData& SpecialActorData);
    
    UFUNCTION(BlueprintCallable)
    void OnMutatorObjectUpdated(const FGameplayMutatorObjectDataArray& MutatorArray);
    
    UFUNCTION(BlueprintCallable)
    void OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitCraftsUIChanged(EHeistExitCraftUIState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayExitCraftUI(bool bDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayBlingUI(bool bDisplay);
    
};

