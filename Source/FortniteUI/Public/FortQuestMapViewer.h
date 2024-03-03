#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Styling/SlateColor.h"
#include "EViewerNavigationDirection.h"
#include "FortQuestMapViewer.generated.h"

class UCanvasPanel;
class UCommonButton;
class UCommonTextBlock;
class UFortQuestMapNodeLayout;
class UFortQuestMapScreen;
class USizeBox;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortQuestMapViewer : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_PageRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_PageLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_Viewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_Cosmetic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuestMapScreen* ParentScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuestMapNodeLayout* NodeLayout;
    
public:
    UFortQuestMapViewer();
    UFUNCTION(BlueprintCallable)
    void UpdateViewerData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTryUpdateUserWidgetColor(UUserWidget* Widget, FSlateColor OverrideColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayLayoutOutroAnimation(EViewerNavigationDirection TravelDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayLayoutFadeInAnimation();
    
    UFUNCTION(BlueprintCallable)
    void HandleLayoutOutroAnimationFinished();
    
};

