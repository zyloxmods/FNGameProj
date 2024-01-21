#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "ESocialImportPanelType.h"
#include "Templates/SubclassOf.h"
#include "FortSocialImportButton.generated.h"

class UFortSocialImportPanel;

UCLASS(Blueprintable, EditInlineNew)
class UFortSocialImportButton : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialImportPanel* ActivePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESocialImportPanelType DesiredPanelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSocialImportPanel> SocialImportPanelClass;
    
public:
    UFortSocialImportButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCaptionGenerated(const FText& Caption);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDynamicSocialImportDialogClosed();
    
};

