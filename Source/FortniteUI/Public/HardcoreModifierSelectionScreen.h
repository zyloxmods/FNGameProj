#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "HardcoreModifierSelectionScreen.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UHardcoreModifierListView;
class UHardcoreModifierPreviewPane;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UHardcoreModifierSelectionScreen : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_Heading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHardcoreModifierListView* ListView_Challenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHardcoreModifierPreviewPane* PreviewPane_Modifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Save;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Cancel;
    
public:
    UHardcoreModifierSelectionScreen();
private:
    UFUNCTION(BlueprintCallable)
    void ApplyModifiers();
    
};

