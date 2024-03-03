#pragma once
#include "CoreMinimal.h"
#include "BacchusHUDElement.h"
#include "Templates/SubclassOf.h"
#include "BacchusAvailablePickupsDisplay.generated.h"

class AFortPickup;
class UCommonButton;
class UCommonButtonStyle;
class UFortDynamicEntryBox;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UBacchusAvailablePickupsDisplay : public UBacchusHUDElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> ListCollapsedButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> ListVisibleButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ToggleVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDynamicEntryBox* EntryBox_PickupButtons;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFortPickup>> CurrentPickupArray;
    
public:
    UBacchusAvailablePickupsDisplay();
};

