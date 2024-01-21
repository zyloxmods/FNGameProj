#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortCollectionBookWidget.generated.h"

class UCommonWidgetSwitcher;
class UFortCollectionBookPage;
class UFortCollectionBookPrimaryPanel;
class UFortCollectionBookProgressWidget;
class UFortCollectionBookSection;
class UFortCollectionBookSectionPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookWidget : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCollectionBookProgressWidget* ProgressWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* MainWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCollectionBookPrimaryPanel* PrimaryPanelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCollectionBookSectionPanel* SectionPanelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PrimaryPanelIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SectionPanelIdx;
    
public:
    UFortCollectionBookWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void RequestToClose();
    
    UFUNCTION(BlueprintCallable)
    void OnPreviewXPChangeRequest(int32 XPChange);
    
    UFUNCTION(BlueprintCallable)
    void OnCollectionBookSectionCloseRequest();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectionBookSectionClicked(const UFortCollectionBookSection* ClickedSection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectionBookPageSelected(const UFortCollectionBookPage* SelectedPage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectionBookPageClicked(const UFortCollectionBookPage* ClickedPage);
    
};

