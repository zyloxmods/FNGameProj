#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortCreativeCaptureScreenshotHUD.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeCaptureScreenshotHUD : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UFortCreativeCaptureScreenshotHUD();
protected:
    UFUNCTION(BlueprintCallable)
    void ServerPreviewActivated(bool bInActivated);
    
    UFUNCTION(BlueprintCallable)
    void ResetPreview();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonResetClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonConfirmClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonCancelClicked();
    
    UFUNCTION(BlueprintCallable)
    void CancelPreview();
    
    UFUNCTION(BlueprintCallable)
    bool BeginPreview();
    
    UFUNCTION(BlueprintCallable)
    void AcceptPreview();
    
};

