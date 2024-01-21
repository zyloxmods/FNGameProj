#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "HUDLayoutToolFireModePanel.generated.h"

class UHUDLayoutToolFireModeButton;

UCLASS(Blueprintable, EditInlineNew)
class UHUDLayoutToolFireModePanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipFireModeOptionTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHUDLayoutToolFireModeButton*> FireModeButtons;
    
public:
    UHUDLayoutToolFireModePanel();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOpenState(bool bNewOpenState);
    
};

