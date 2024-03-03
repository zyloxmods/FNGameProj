#pragma once
#include "CoreMinimal.h"
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
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_NodeLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* ButtonPrevious;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* ButtonNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* StartArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* EndArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* QuestButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuestMapScreen* ParentScreen;
    
public:
    UFortQuestMapNodeLayout();
private:
    UFUNCTION(BlueprintCallable)
    void HandleQuestIndexSelectionModelIndexChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleQuestButtonSelected(UCommonButton* SelectedQuestButton, int32 ButtonIndex);
    
};

