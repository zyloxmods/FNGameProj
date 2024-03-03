#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanelWithItemPreview.h"
#include "SpatialFactionUnlockedPerksScreen.generated.h"

class UCommonButton;
class UFactionUnlockedPerkData;
class UFortItem;
class UTileView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USpatialFactionUnlockedPerksScreen : public UFortActivatablePanelWithItemPreview {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUnlockedPerksScreenClosedDynamic);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnlockedPerksScreenClosedDynamic BP_OnUnlockedPerksScreenClosed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTileView* TileView_Perks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CloseMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItem* LastViewedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFactionUnlockedPerkData*> AllPerkItems;
    
public:
    USpatialFactionUnlockedPerksScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemViewed(const UFactionUnlockedPerkData* ItemDisplayed);
    
};

