#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserListEntry.h"
#include "FortServerTileBase.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortServerTileBase : public UCommonButton, public IUserListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ServerWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Launch;
    
public:
    UFortServerTileBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunchButtonEnableChanged(bool bEnableValue);
    
    
    // Fix for true pure virtual functions not being implemented
};

