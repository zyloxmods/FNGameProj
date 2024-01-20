#pragma once
#include "CoreMinimal.h"
#include "FortQuestMapPage.h"
#include "Blueprint/UserWidget.h"
#include "FortQuestMapNodeLayout.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UFortQuestMapScreen;
class UPanelWidget;
class USizeBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortQuestMapNodeLayout : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* ButtonPrevious;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* ButtonNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* StartArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* EndArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* LayoutPanel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* QuestButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuestMapScreen* ParentScreen;
    
public:
    UFortQuestMapNodeLayout();
    UFUNCTION(BlueprintCallable)
    void SetParentScreen(UFortQuestMapScreen* Parent);
    
    UFUNCTION(BlueprintCallable)
    void SetLayoutPanel(UPanelWidget* Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleQuestIndexSelectionModelIndexChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleQuestButtonSelected(UCommonButton* SelectedQuestButton, int32 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortQuestMapPage GetQuestPageData() const;
    
    UFUNCTION(BlueprintCallable)
    void DisposeLayout();
    
};

