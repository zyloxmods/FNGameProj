#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Templates/SubclassOf.h"
#include "FortCosmeticLoadoutSelector.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UFortNameLoadoutPopup;
class UHorizontalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCosmeticLoadoutSelector : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortNameLoadoutPopup> NameLoadoutPopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBox_InternalVisibilitySetter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Prev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_LoadoutName;
    
public:
    UFortCosmeticLoadoutSelector();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNumLoadoutsFound(int32 NumLoadouts);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadoutSet(int32 Selection);
    
};

