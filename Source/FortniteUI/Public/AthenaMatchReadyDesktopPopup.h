#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AthenaMatchReadyDesktopPopup.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAthenaMatchReadyDesktopPopup : public UUserWidget {
    GENERATED_BODY()
public:
    UAthenaMatchReadyDesktopPopup();
    UFUNCTION(BlueprintCallable)
    void UserDismissedDialog(bool bBringToFront);
    
};

