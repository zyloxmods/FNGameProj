#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticItemTileButton.h"
#include "AthenaCustomizationPickerTileButton.generated.h"

class UFortBangWrapper_NUI;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCustomizationPickerTileButton : public UFortCosmeticItemTileButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBangWrapper_NUI* Bang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Favorite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ClassIcon;
    
public:
    UAthenaCustomizationPickerTileButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeOwnedState(bool bOwned);
    
};

