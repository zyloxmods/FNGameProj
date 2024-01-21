#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortUpgradeTileBase.generated.h"

class UFortUpgradeInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortUpgradeTileBase : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortUpgradeInfo* UpgradeInfo;
    
public:
    UFortUpgradeTileBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataRefresh(bool bUpgrade);
    
    
    // Fix for true pure virtual functions not being implemented
};

